#############################################################################
#
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
#############################################################################

#############################################################################
# Build the object module lists.                                            #
#############################################################################
    OBJS =               \
            mbbis.obj    \
            mbbtype.obj  \
            mbccmp.obj   \
            mbccpy.obj   \
            mbclen.obj   \
            mbctype.obj  \
            mbisalp.obj  \
            mbisdgt.obj  \
            mbishira.obj \
            mbiskata.obj \
            mbisl0.obj   \
            mbisl1.obj   \
            mbisl2.obj   \
            mbislgl.obj  \
            mbislwr.obj  \
            mbisprn.obj  \
            mbisspc.obj  \
            mbissym.obj  \
            mbisupr.obj  \
            mbjisjms.obj \
            mbjmsjis.obj \
            mbsbtype.obj \
            mbschr.obj   \
            mbscmp.obj   \
            mbscspn.obj  \
            mbsdec.obj   \
            mbsicmp.obj  \
            mbsinc.obj   \
            mbsisle.obj  \
            mbsistr.obj  \
            mbslen.obj   \
            mbslwr.obj   \
            mbsnbcat.obj \
            mbsnbcmp.obj \
            mbsnbcnt.obj \
            mbsnbcpy.obj \
            mbsnbicm.obj \
            mbsnbset.obj \
            mbsncat.obj  \
            mbsnccnt.obj \
            mbsncmp.obj  \
            mbsncpy.obj  \
            mbsnextc.obj \
            mbsnicmp.obj \
            mbsninc.obj  \
            mbsnset.obj  \
            mbspbrk.obj  \
            mbsrchr.obj  \
            mbsrev.obj   \
            mbsset.obj   \
            mbsspn.obj   \
            mbsspnp.obj  \
            mbsstr.obj   \
            mbstok.obj   \
            mbsupr.obj   \
            mbtohira.obj \
            mbtokata.obj \
            mbtolwr.obj  \
            mbtomb.obj   \
            mbtoupr.obj  \
            mbscoll.obj  \
            mbsnicol.obj \
            mbsncoll.obj \
            mbsicoll.obj \
            mbsnbcol.obj \
            mbsnbico.obj \
            ismbalnm.obj \
            ismbgrph.obj \
            ismbpunc.obj \
            mbscat.obj   \
            mbscpy.obj   \
            mbsdup.obj   \
            tthunks.obj

#############################################################################
# Configure the environment apprpriately.                                   #
#############################################################################
TASMCFG = 1        # Force tasm.cfg creation

!include rules.mak

