;----------------------------------------------------------------------
; rmtmp.asm - user-callable entry point to _rmtmp() function.
;----------------------------------------------------------------------

;
;       C/C++ Run Time Library - Version 10.0
; 
;       Copyright (c) 1996, 2000 by Inprise Corporation
;       All Rights Reserved.
; 

; $Revision:   9.0  $

        include rules.asi
	include entry.inc
        Entry@ rmtmp, _rmtmp, _RTLENTRY, 2
        end
