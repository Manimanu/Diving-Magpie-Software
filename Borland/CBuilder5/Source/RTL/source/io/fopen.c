/*-----------------------------------------------------------------------*
 * filename - fopen.c
 *
 * function(s)
 *        fopen         - opens a stream
 *        __openfp      - opens a file
 *        __getfp       - gets a file pointer
 *        CheckOpenType - returns the FILE's flags value, zero if type
 *                        string was invalid.
 *-----------------------------------------------------------------------*/

/*
 *      C/C++ Run Time Library - Version 10.0
 *
 *      Copyright (c) 1987, 2000 by Inprise Corporation
 *      All Rights Reserved.
 *
 */

/* $Revision:   9.1  $        */

#include <stdio.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <_io.h>
#include <_stdio.h>
#include <_tchar.h>

extern void     (*_exitfopen)();
extern void     _xfclose();

/*---------------------------------------------------------------------*

Name            CheckOpenType  - examines file open type

Usage           static unsigned
                  CheckOpenType (const _TCHAR *type, unsigned *oflagsP,
                                   unsigned *modeP)

Prototype in    local

Description

  The function returns the FILE's flags value, zero if type string was
  invalid.

  The type string contains characters with the following meanings:

        oflags                          mode                    f->flags
r       O_RDONLY                        don't care              _F_READ
w       O_CREAT | O_WRONLY | O_TRUNC    S_IWRITE                _F_WRIT
a       O_CREAT | O_WRONLY | O_APPEND   S_IWRITE                _F_WRIT
r+      O_RDWR                          don't care              _F_RDWR
w+      O_RDWR | O_CREAT | O_TRUNC      S_IWRITE | S_IREAD      _F_RDWR
a+      O_RDWR | O_CREAT | O_APPEND     S_IWRITE | S_IREAD      _F_RDWR

where "oflags" and "mode" are the second and third parameters to the
open() function.  Please consult open() documentation for details.

A further character is optional:

        ..t     - text mode             oflags, f->flags |= O_TEXT,
        ..b     - binary mode           oflags, f->flags |= O_BINARY, _F_BIN

We require the first char of the type string to be r, w, or a, but after
that we just stop on mismatch and don't care if the string is junk.

Return value    see description above

*---------------------------------------------------------------------*/

static unsigned
CheckOpenType (register const _TCHAR *type, unsigned *oflagsP, unsigned *modeP)

{
    unsigned        mode   = 0;
    unsigned        oflags;
    unsigned        flags ;
    _TCHAR          c;

    if ((c = *type++) == _TEXT('r'))
    {
        oflags =  O_RDONLY;
        flags  = _F_READ;
    }
    else if (c == _TEXT('w'))
    {
        oflags = O_CREAT | O_WRONLY | O_TRUNC;
        mode   = S_IWRITE;
        flags  = _F_WRIT;
    }
    else if (c == _TEXT('a'))
    {
        oflags = O_WRONLY | O_CREAT | O_APPEND;
        mode   = S_IWRITE;
        flags  = _F_WRIT;
    }
#if 0
    else if (c == _TEXT('c'))  /* New DOS 'commit' attribute */
    {
        // ...
    }
#endif
    else
        return 0;

    c  = *type++;

    if (c == _TEXT('+') ||
        (*type == _TEXT('+') && (c == _TEXT('t') || c == _TEXT('b'))))
    {
        if (c == _TEXT('+'))
            c = *type;
        /* same modes, but both read and write */
        oflags = (oflags & ~(O_WRONLY | O_RDONLY)) | O_RDWR;
        mode   = S_IREAD | S_IWRITE;
        flags  = _F_READ | _F_WRIT;
    }

    if (_TEXT('t') == c)
    {
        oflags |= O_TEXT;
    }
    else if (_TEXT('b') == c)
    {
        oflags |= O_BINARY;
        flags |= _F_BIN;
    }
    else
    {
        if ((c != _TEXT('+')) && (c != _TEXT('\0')))
            return 0;   /* bad character in mode string */

        if ((oflags |= (_FMODE & (O_TEXT | O_BINARY))) & O_BINARY)
            flags |= _F_BIN;
    }
    _exitfopen = _xfclose;
    *oflagsP = oflags;
    *modeP = mode;
    return flags;
}


/*---------------------------------------------------------------------*

Name            __topenfp used as __openfp and __wopenfp
                __openfp - opens a file
                __wopenfp - opens a file

Usage           FILE * __topenfp (FILE *fp,
                const _TCHAR *filename, const _TCHAR *type, int shflag);

Prototype in    _stdio.h

Description     Opens a file for an existing stream structure.

Return value    On successful completion, each function returns the
                newly open stream. freopen returns the argument stream.
                In the event of error, each function returns NULL.

*---------------------------------------------------------------------*/

FILE     * __topenfp (FILE *fp, const _TCHAR *filename,
const _TCHAR *type, int shflag)
{
    unsigned    oflag, mode;

    if (((fp->flags = CheckOpenType (type, &oflag, &mode)) == 0) ||
        ((fp->fd < 0) &&
        (fp->fd = ___topen (filename, oflag|shflag, mode)) < 0))
    {
        fp->fd = -1;
        fp->flags = 0;
        return NULL;
    }

    if ((_openfd[fp->fd] & O_DEVICE) != 0)
        fp->flags |= _F_TERM;

    if (setvbuf (fp, NULL, (fp->flags & _F_TERM) ? _IOLBF : _IOFBF, BUFSIZ))
    {
        fclose (fp);
        return NULL;
    }
    else {
        fp->istemp = 0;
        return fp;
    }
}


/*---------------------------------------------------------------------*

Name            __getfp - gets a file pointer

Usage           static FILE  * __getfp(void)

Prototype in    _stdio.h

Description     gets a file pointer

*---------------------------------------------------------------------*/

#ifndef _UNICODE

FILE     * __getfp(void)
{
    register FILE   *fp;

    for (fp = _streams; fp->fd >= 0; fp++)      /* look for closed file */
        if (fp >= _streams + _nfile)            /* reached end? */
            return (NULL);
    return (fp);
}

#endif // _UNICODE

/*---------------------------------------------------------------------*

Name            _tfopen used as fopen and _wfopen
                fopen   - opens a stream
                _wfopen - opens a stream

Usage           #include <stdio.h>
                FILE *fopen(const char *filename, const char *type);
                FILE *_wfopen(const wchar_t *filename, const wchar_t *type);

Related
functions usage FILE *_tfdopen(int handle, _TCHAR *type);
                FILE *_tfreopen(const _TCHAR *filename, const _TCHAR *type,
                  FILE *stream);

Prototype in    stdio.h

Description     _tfopen opens the file named by filename and
                associates a stream with it. fopen returns a pointer to be
                used to identify the stream in subsequent operations.

                _tfdopen associates a stream with a file handle obtained from
                creat, dup, dup2, or open. The type of stream must match the
                mode of the open handle.

                _tfreopen substitutes the named file in place of the open
                stream. The original stream is closed, regardless of
                whether the open succeeds. freopen is useful for changing the
                file attached to stdin, stdout, or stderr.

                The type string used in each of these calls is one of the
                following values:

                    r       Open for reading only.

                    w       Create for writing.

                    a       Append; open for writing at end of file or
                            create for writing if the file does not exist.

                    r+      Open an existing file for update (reading and
                            writing).

                    w+      Create a new file for update.

                    a+      Open for append; open (or create if the file
                            does not exist) for update at the end of the
                            file.

                To specify that a file is being opened or created in text
                mode, you can append a t to the value of type (rt, w+t, etc.);
                similarly, to specify binary mode, you can append a b to the
                type value (wb, a+b, etc.)

                If a t or b is not given in type, the mode is governed by the
                global variable _fmode. If _fmode is set to O_BINARY, files
                will be opened in binary mode. If _fmode is set to O_TEXT,
                they will be opened in text mode. These O_... constants are
                defined in fcntl.h.

                When a file is opened for update, both input and output may be
                done on the resulting stream. However, output may not be
                directly followed by input without an intervening fseek or
                rewind, and input may not be directly followed by output
                without an intervening fseek, rewind, or an input which
                encounters end-of-file.

Return value    On successful completion, each function returns the
                newly open stream. _tfreopen returns the argument stream.
                In the event of error, each function returns NULL.

*---------------------------------------------------------------------*/

FILE * _RTLENTRY _EXPFUNC _tfopen (const _TCHAR *filename, const _TCHAR *type)
{
    register FILE   *fp;

    _lock_all_streams();

    if ((fp = __getfp()) != NULL)
        fp = __topenfp (fp, filename, type, 0);

    _unlock_all_streams();

    return (fp);
}
