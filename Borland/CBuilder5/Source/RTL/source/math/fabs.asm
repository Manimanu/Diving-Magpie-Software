;[]-----------------------------------------------------------------[]
;|   FABS.ASM -- absolute value                                      |
;[]-----------------------------------------------------------------[]

;
;       C/C++ Run Time Library - Version 10.0
; 
;       Copyright (c) 1991, 2000 by Inprise Corporation
;       All Rights Reserved.
; 

; $Revision:   9.0  $

;----------------------------------------------------------------------
; function(s)
;        fabs - absolute value
;----------------------------------------------------------------------

        include RULES.ASI

;       Segments Definitions

Header@

;--------------------------------------------------------------------------
;
;Name           fabs - absolute value
;
;Usage          double fabs(double x);
;
;Prototype in   math.h
;
;Description    fabs calculates the absolute value of x, which may have any
;               value.
;
;Return value   fabs returns the absolute value of x.
;
;--------------------------------------------------------------------------

Code_Seg@

Func@   fabs, _EXPFUNC, _RTLENTRY, <double x>

        Link@

        FWAIT
        and     BY0 (x [7]), 7Fh        ; remove any sign bit
        FLD     x.double                ; return x

        Unlink@
        Return@

EndFunc@ fabs

Code_EndS@
        end
