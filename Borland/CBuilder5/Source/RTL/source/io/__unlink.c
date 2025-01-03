/*-----------------------------------------------------------------------*
 * filename - __unlink.c
 *
 * function(s)
 *        __unlink    - delete a file
 *-----------------------------------------------------------------------*/

/*
 *      C/C++ Run Time Library - Version 10.0
 *
 *      Copyright (c) 1991, 2000 by Inprise Corporation
 *      All Rights Reserved.
 *
 */

/* $Revision:   9.1  $        */

#include <ntbc.h>

#include <_io.h>
#include <_tchar.h>

/*-----------------------------------------------------------------------*

Name            _tunlink used as __unlink and _wunlink
                __unlink - deletes a file
                _wunlink - deletes a file

Usage           int __unlink(const char *filename);
                int _wunlink(const wchar_t *filename);

Related
functions usage int _tremove(const _TCHAR *filename);

Prototype in    _io.h

Description     __tunlink deletes a file specified by filename. Any
                drive, path, and file name may be used as a filename.
                Wildcards are not allowed.

                Read-only files cannot be deleted by this call. To remove
                read-only files, first use chmod or _chmod to change the
                read-only attribute.

                _tremove is a macro that simply translates the call to a call
                to __tunlink.

Return value    On successful completion, a 0 is returned. On
                error, a -1 is returned, and errno is set to one of the
                following values:

                        ENOENT  Path or file name not found
                        EACCES  Permission denied

*------------------------------------------------------------------------*/

#ifdef _UNICODE
int _RTLENTRY _EXPFUNC _wunlink(const wchar_t *filename)
#else
int _RTLENTRY _EXPFUNC __unlink(const char *filename)
#endif
{
    return (DeleteFile(filename) == TRUE ? 0 : __NTerror());
}
