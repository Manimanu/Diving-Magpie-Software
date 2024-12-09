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
# $Revision:   9.5  $                                                       #
#                                                                           #
#############################################################################

#############################################################################
# Build the object module lists.                                            #
#############################################################################

CRTLSTUB_OBJS =      \
        crtlst_i.obj \
        crtlst_e.obj \
        crtlst_l.obj


!if $d(MAGIC)
!if !$d(DLL)
OBJS = $(OBJS)	     \
        need_vcl.obj \
        crtlvcl.obj  \
        gthpstat.obj \
        vlibstub.obj

!else  # !DLL
OBJS = $(OBJS)	     \
        gthpstat.obj \
       $(CRTLSTUB_OBJS)

!endif # !DLL
!else  # MAGIC
OBJS = $(OBJS)       \
       $(CRTLSTUB_OBJS)

!endif # MAGIC

!if $d(MAGIC)
!if $d(DLL)

IMPOBJS_P_ONLY=$(IMPOBJS_P_ONLY)  \
        need_vcl.obj \
        crtlvcl.obj  \
        vlibstub.obj \
        vclshmem.obj \
        syshook.obj

IMPOBJS_W_ONLY=$(IMPOBJS_W_ONLY)  \
        $(CRTLSTUB_OBJS)

OBJS =  $(OBJS)      \
        vclshmem.obj

!endif # DLL

OBJS =  $(OBJS)      \
        syshook.obj

!else  # MAGIC
  IMPOBJS= $(IMPOBJS) $(CRTLSTUB_OBJS)
!endif # MAGIC

!if $d(MAGIC) && !$d(DLL)
MISC = $(MISC)              \
        $(LIBDIR)\vcl.lib   \
        $(LIBDIR)\vclstd.lib

VCLLIBOBJS = vcllib.obj
VCLSTDLIBOBJS = vclstd.obj
!endif # MAGIC && !DLL

#############################################################################
# Configure the environment appropriately.                                  #
#############################################################################
!include rules.mak

#############################################################################
# MISC explicit rules.                                                      #
#############################################################################
!if $d(MAGIC) && !$d(DLL)

#
# Rules for creating the small VCL.LIB and VCLSTD.LIB (standard SKU version)
#
# NOTE: Don't use the $(TLIB) macro since that includes the /0 switch that
#       will remove the pragma comment (lib, "...") entries.
#

$(LIBDIR)\vcl.lib: $(VCLLIBOBJS)
    makersp "-+!s &\n" &&|
        $?
|   > $&.rsp
    tlib /C $< @$&.rsp, temp.lst
    del *.rsp
    del temp.lst
    if exist $*.bak del $*.bak

$(LIBDIR)\vclstd.lib: $(VCLSTDLIBOBJS)
    makersp "-+!s &\n" &&|
        $?
|   > $&.rsp
    tlib /C $< @$&.rsp, temp.lst
    del *.rsp
    del temp.lst
    if exist $*.bak del $*.bak

!endif
