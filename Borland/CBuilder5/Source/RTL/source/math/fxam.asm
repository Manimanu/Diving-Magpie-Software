;[]-----------------------------------------------------------------[]
;|   FXAM.ASM -- examine floating point value, return status word    |
;[]-----------------------------------------------------------------[]

;
;       C/C++ Run Time Library - Version 10.0
; 
;       Copyright (c) 1991, 2000 by Inprise Corporation
;       All Rights Reserved.
; 

; $Revision:   9.0  $

        include RULES.ASI

;       Segments Definitions

Header@

;-----------------------------------------------------------------------
;
;Name           _fxam - examine a floating point value, return status
;
;Usage          unsigned short _fxam (long double *valP);
;
;Prototype in   _math.h
;
;Description    This is a helper function for __xcvt().  It loads
;               the floating point number and executes an FXAM to
;               set the condition codes based on the value.  The
;               floating point value is discarded.
;
;Return value   _fxam returns the value of the x87 status word
;               generated by the FXAM instruction.
;
;------------------------------------------------------------------------

Code_seg@

Func@ _fxam, public, _RTLENTRY, <pointer valP>

        mov     eax,[esp+4]             ; get pointer to number
        fld     tbyte ptr [eax]         ; load the number
        fxam                            ; examine it
        xor     eax,eax                 ; clear all bits of return value
        fstsw   ax                      ; save the status word in AX
        fstp    st(0)                   ; pop the number
        fwait
        Return@

EndFunc@ _fxam

Code_EndS@

        end
