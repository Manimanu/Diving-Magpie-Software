# By default, this makefile builds the static and dynamic MFC libraries without
# diagnostic information.
#
#     MAKE              - default build (shipping build)
#     MAKE Dbg          - IDE Debugging information only
#     MAKE Diags        - Diagnostics only
#     MAKE DbgDiags     - both
#
#
# To build any of these flavors with source debugging information enabled,
# add the DBGINFO=1 parameter. (Note this will create very large files > 50meg)

!ifndef BCLIBDIR
!ifdef BCROOT
BCLIBDIR = $(BCROOT)\lib
!else
BCLIBDIR = $(MAKEDIR)\..\lib
!endif
!endif

Default:
   make -B -fborland.mak DEBUG=0 DBGINFO=0 LIBDIR=$(BCLIBDIR)
   make -B -fbfcdll.mak  DEBUG=0 DBGINFO=0 LIBDIR=$(BCLIBDIR)

Dbg:
   make -B -fborland.mak DEBUG=0 DBGINFO=1 LIBDIR=$(BCLIBDIR)
   make -B -fbfcdll.mak  DEBUG=0 DBGINFO=1 LIBDIR=$(BCLIBDIR)

Diags:
   make -B -fborland.mak DEBUG=1 DBGINFO=0 LIBDIR=$(BCLIBDIR)
   make -B -fbfcdll.mak  DEBUG=1 DBGINFO=0 LIBDIR=$(BCLIBDIR)

DbgDiags:
   make -B -fborland.mak DEBUG=1 DBGINFO=1 LIBDIR=$(BCLIBDIR)
   make -B -fbfcdll.mak  DEBUG=1 DBGINFO=1 LIBDIR=$(BCLIBDIR)

clean: 
   make -fborland.mak clean
