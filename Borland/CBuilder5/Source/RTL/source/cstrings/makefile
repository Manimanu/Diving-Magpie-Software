#############################################################################
#                                                                           #
# The make process relies on the creation of DLL and library response file  #
# creation.  To control the location of object modules the following should #
# be defined:                                                               #
#                                                                           #
#     IMPOBJS - A list of object modules that should appear in the DLL      #
#               import library.                                             #
#                                                                           #
#        OBJS - If a DLL is build, this is a list of the object modules     #
#               that are linked into the DLL.  If building a library, this  #
#               is the list of object modules that goes into the library.   #
#                                                                           #
# The building of miscellaneous object modules and libraries is controlled  #
# by the list of files in the MISC variable.                                #
#                                                                           #
# $Revision:   9.0  $                                                                #
#                                                                           #
#############################################################################

#############################################################################
# Build the object module lists.                                            #
#############################################################################
OBJS =               \
        memchr.obj   \
        wmemchr.obj  \
        memcpy.obj   \
        wmemcpy.obj  \
        memmove.obj  \
        memset.obj   \
        wmemset.obj  \
        qstpcpy.obj  \
        qstrcat.obj  \
        qstrchr.obj  \
        qstrcmp.obj  \
        qstrcpy.obj  \
        stpcpy.obj   \
        strcat.obj   \
        strchr.obj   \
        strcmp.obj   \
        strcpy.obj   \
        strlen.obj   \
        strncat.obj  \
        strncmp.obj  \
        __memchr.obj \
        __strchr.obj \
        __strpbr.obj \
        __strrch.obj \
        __strstr.obj \
        memccpy.obj  \
        memcmp.obj   \
        memicmp.obj  \
        strcspn.obj  \
        strdup.obj   \
        strerror.obj \
        stricmp.obj  \
        strncpy.obj  \
        strnicmp.obj \
        strnset.obj  \
        strpbrk.obj  \
        strrchr.obj  \
        strrev.obj   \
        strset.obj   \
        strspn.obj   \
        strstr.obj   \
        strtok.obj   \
        _stpcpy.obj  \
        wcslen.obj   \
        wcscpy.obj   \
        wcscat.obj   \
        wcschr.obj   \
        wcscmp.obj   \
        wcscspn.obj  \
        wcsdup.obj   \
        wcsncmp.obj  \
        wcsncpy.obj  \
        wcsnset.obj  \
        wcspbrk.obj  \
        wcsrchr.obj  \
        wcsrev.obj   \
        wcsset.obj   \
        wcsspn.obj   \
        wcsstr.obj   \
        wcstok.obj   \
        wcsncat.obj  \
        wcspcpy.obj  \
        wcsicmp.obj  \
        wcsnicmp.obj


!if $d(DLL)
    IMPOBJS =            \
            __memchr.obj \
            __strchr.obj \
            __strpbr.obj \
            __strrch.obj \
            __strstr.obj
!endif

#############################################################################
# Configure the environment appropriately.                                  #
#############################################################################
TASMCFG = 1        # Force tasm.cfg creation

!include rules.mak

CC = $(CC) -U_MBCS

wcschr.obj : strchr.asm
wcscmp.obj : strcmp.asm
wcsncat.obj : strncat.asm
wcsncmp.obj : strncmp.asm
wcscspn.obj : strcspn.c

wcsdup.obj : strdup.c
wcsncpy.obj : strncpy.c
wcsnset.obj : strnset.c
wcspbrk.obj : strpbrk.c
wcsrchr.obj : strrchr.c
wcsrev.obj : strrev.c
wcsset.obj : strset.c
wcsspn.obj : strspn.c
wcsstr.obj : strstr.c
wcstok.obj : strtok.c
wcsicmp.obj : stricmp.c
wcsnicmp.obj : strnicmp.c
WCSCSPN.obj : strcspn.C
WCSICMP.obj : stricmp.C


