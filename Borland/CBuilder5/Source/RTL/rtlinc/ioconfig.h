/*------------------------------------------------------------------------
 * filename - ioconfig.h
 *
 *  contains configuration data for C++ io streams
 *
 *-----------------------------------------------------------------------*/

/*
 *      C/C++ Run Time Library - Version 10.0
 *
 *      Copyright (c) 1990, 2000 by Inprise Corporation
 *      All Rights Reserved.
 *
 */

/* $Revision:   9.0  $ */

#if !defined( __IOCONFIG_H )
#define __IOCONFIG_H

#undef _BIG_INLINE          // disable expansion of large inline functions

const MaxCharsInLong        = 16;
const MaxCharsInInt64       = 28;
const StreambufSize         = 1024;
const MinStrstreamAlloc     = 16;
const MinStrstreamIncr      = 4;

#endif  // __IOCONFIG_H

