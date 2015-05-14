;
;	    *** HK3 section jump table ***
;



TBL		MACRO	NAME
NAME		EQU	HK3_TBL+OFFSET
OFFSET		SET	OFFSET+6
		ENDM

HK3_TBL		EQU	19000H
OFFSET		SET	0

    		TBL	INIT_HK3
		TBL	HK3_SYSTEM




