/*---------------------------------------------------------------------------
 * filename - statcvt.c
 *
 * function(s)
 *        _posixtime   - convert NT date and time to POSIX time
 *        _statcvt     - convert NT FILESTATUS3 structure to struct tm
 *        _statcvt_i64 - convert NT FILESTATUS3 structure to struct tm
 *--------------------------------------------------------------------------*/

/*
 *      C/C++ Run Time Library - Version 10.0
 *
 *      Copyright (c) 1991, 2000 by Inprise Corporation
 *      All Rights Reserved.
 *
 */

/* $Revision:   9.2  $        */

#include <ntbc.h>

#include <sys/types.h>
#include <sys/stat.h>
#include <time.h>
#include <_time.h>

/*--------------------------------------------------------------------------*

Name            _posixtime - convert NT date and time to POSIX time

Usage           time_t _posixtime(FILETIME *ptime);

Prototype in    local

Description     Convert the specified time and date in NT format to
                a POSIX calendar time (no. of seconds since 1-1-1970).
                The current timezone and daylight savings time are
                used to adjust the time.

Return value    The date and time converted to a POSIX calendar time in UTC.

*---------------------------------------------------------------------------*/

static time_t _posixtime(FILETIME *ft)
{
    SYSTEMTIME st;
    FILETIME loc;

    /* Convert the Win32 UTC based filetime to local time. */
    if (FileTimeToLocalFileTime (ft, &loc) != TRUE)
        return 0;

    /* Convert the filetime format into a systemtime format. */
    if (FileTimeToSystemTime(&loc, &st) != TRUE)
        return 0;

    /* Return the number of seconds since 1-1-1970 in UTC. */
    return (_totalsec(st.wYear-1900, st.wMonth-1, st.wDay-1,
                      st.wHour, st.wMinute, st.wSecond, -1));
}

/*--------------------------------------------------------------------------*

Name            _statcvt - convert NT file information to struct tm

Usage           void _statcvt(struct stat *bufP, DWORD attr, FILETIME *ctime
                    FILETIME *atime, FILETIME *wtime, DWORD fsize);

Prototype in    none

Description     This is a helper function for stat() and fstat().   It
                converts the file information in the attr, atime, wtime
                and fsize parameters to a POSIX struct tm.  The following
                ields in the tm structure are modified:

                    st_mode
                    st_nlink
                    st_size
                    st_atime
                    st_mtime
                    st_ctime

                The remaining fields are not modified, and should be
                zeroed by the caller.

                NOTE: 64-bit file sizes are not supported.  Only
                the low 32-bits may be passed in.

Return value    none

*---------------------------------------------------------------------------*/

void _statcvt(
    struct stat *bufP,      /* stat structure to be filled in */
    DWORD attr,             /* NT file attributes */
    FILETIME *ctime,        /* NT time of file creation */
    FILETIME *atime,        /* NT time of last access */
    FILETIME *wtime,        /* NT time of last write */
    DWORD fsize)            /* NT low word of file size */
{
    bufP->st_size = fsize;      /* file size */

    /* Convert the NT file times to their POSIX equivalent.
     * POSIX doesn't support the NT notion of creation time,
     * and NT doesn't support the POSIX notion of file status time,
     * so we just set it to the NT file creation time.
     * The FAT file system supports only the modification time.
     */
    bufP->st_atime = _posixtime(atime);     /* access time */
    bufP->st_mtime = _posixtime(wtime);     /* write time */
    bufP->st_ctime = _posixtime(ctime);     /* creation time */

    /* Convert the NT file attributes.  We always set S_IEXEC for directories.
     */
    bufP->st_mode = S_IREAD;

    if (attr & FILE_ATTRIBUTE_DIRECTORY)
        bufP->st_mode |= (S_IFDIR | S_IWRITE | S_IEXEC) ;
    else
    {
        bufP->st_mode |= S_IFREG;

        if ((attr & FILE_ATTRIBUTE_READONLY) == 0)
            bufP->st_mode |= S_IWRITE;
    }

    bufP->st_nlink = 1;
}

/*--------------------------------------------------------------------------*

Name            _statcvti64 - convert NT file information to struct tm

Usage           void _statcvti64 (struct stati64 *bufP, DWORD attr, FILETIME *ctime
                    FILETIME *atime, FILETIME *wtime);

Prototype in    none

Description     This is a helper function for stat() and fstat().   It
                converts the file information in the attr, atime, and
                wtime parameters to a POSIX struct tm.  The following
                fields in the tm structure are modified:

                    st_mode
                    st_nlink
                    st_size
                    st_atime
                    st_mtime
                    st_ctime

                The remaining fields are not modified, and should be
                zeroed by the caller.

Return value    none

*---------------------------------------------------------------------------*/

void _statcvt_i64(
    struct stati64 *bufP,   /* stati64 structure to be filled in */
    DWORD attr,             /* NT file attributes */
    FILETIME *ctime,        /* NT time of file creation */
    FILETIME *atime,        /* NT time of last access */
    FILETIME *wtime,        /* NT time of last write */
    DWORD    fsizeHigh,     /* NT high word of file size */
    DWORD    fsizeLow)      /* NT low word of file size */

{

    bufP->st_size = ((((__int64)(fsizeHigh)) << 32) + (__int64)(fsizeLow));

    /* Convert the NT file times to their POSIX equivalent.
     * POSIX doesn't support the NT notion of creation time,
     * and NT doesn't support the POSIX notion of file status time,
     * so we just set it to the NT file creation time.
     * The FAT file system supports only the modification time.
     */
    bufP->st_atime = _posixtime(atime);     /* access time */
    bufP->st_mtime = _posixtime(wtime);     /* write time */
    bufP->st_ctime = _posixtime(ctime);     /* creation time */

    /* Convert the NT file attributes.  We always set S_IEXEC for directories.
     */
    bufP->st_mode = S_IREAD;

    if (attr & FILE_ATTRIBUTE_DIRECTORY)
        bufP->st_mode |= (S_IFDIR | S_IWRITE | S_IEXEC) ;
    else
    {
        bufP->st_mode |= S_IFREG;

        if ((attr & FILE_ATTRIBUTE_READONLY) == 0)
            bufP->st_mode |= S_IWRITE;
    }

    bufP->st_nlink = 1;
}

