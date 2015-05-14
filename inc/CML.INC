************************************************************************
*								       *
*		[[[ NOP ]]]  EASY CML MACRO DEFINITIONS		       *
*		by S.OKADA from 92/01/07 Tue 14:56		       *
*								       *
************************************************************************



;
;	    *** nop mess out ***
;

;		No 0	command	end

FIX_END		MACRO	NEXT,SAVE_CML
MODE		SET	0
		IFC	'RAM',\1
MODE		SET	8000H
		ENDC
		IFC	'SAVE',\2
MODE		SET	MODE+100H
		ENDC
		DC.W	MODE
		ENDM


;		No 1	data format
FIX_FORMAT	MACRO	TYPE,PARM
MODE		SET	301H
		IFC	'B',\0
MODE		SET	101H
		ENDC
		IFC	'CODE',\1
MODE		SET	MODE-100H
		ENDC
		DC.W	MODE,PARM
		ENDM

FIX_FORMAT_T	MACRO	TYPE
MODE		SET	301H
		IFC	'B',\0
MODE		SET	101H
		ENDC
		IFC	'CODE',\1
MODE		SET	MODE-100H
		ENDC
		DC.W	MODE
		ENDM
FIX_FORMAT_TP	MACRO	PARM
		DC.W	PARM
		ENDM


;		No 2	auto increment value
FIX_AUTO	MACRO	INC
		DC.W	INC*100H+2
		ENDM


;		No 3	output v-ram address
FIX_ADRS	MACRO	X,Y
		DC.W	3
		IFEQ	NARG-1
		DC.W	X
		ELSEC
		DC.W	7000H+20H*X+Y
		ENDM

FIX_ADRS_T	MACRO
		DC.W	3
		ENDM
FIX_ADRS_TP	MACRO	X,Y
		IFEQ	NARG-1
		DC.W	X
		ELSEC
		DC.W	7000H+20H*X+Y
		ENDM


;		No 4	get data address and data output
FIX_DATA_ADRS	MACRO	ADRS
		DC.W	4
		DC.L	ADRS
		ENDM

;		No 5	address	increment
;		No 14	address	increment byte type
FIX_NEXT	MACRO	X,Y
MODE		SET	X
		IFEQ	NARG-2
MODE		SET	X*20H+(Y)
		ENDC
		IFGE	MODE+80H
		IFLT	MODE-80H
		DC.W	MODE*100H+14H
		ELSEC
		DC.W	5,MODE
		ENDC
		ELSEC
		DC.W	5,MODE
		ENDC
		ENDM

FIX_NEXT_T	MACRO
		DC.W	5
		ENDM
FIX_NEXT_TP	MACRO	X,Y
		DC.W	X*20H+(Y)
		ENDM


NEXT_DIRECT	MACRO	X,Y
MODE		SET	X
		IFEQ	NARG-2
MODE		SET	X*20H+(Y)
		ENDC
		IFGE	MODE+80H
		IFLT	MODE-80H
		DC.W	MODE*100H+14H,7
		ELSEC
		DC.W	5,MODE,7
		ENDC
		ELSEC
		DC.W	5,MODE,7
		ENDC
		ENDM

;		No 6	data continue output
FIX_DATA_CONT	MACRO
		DC.W	6
		ENDM

;		No 7	direct data
FIX_DIRECT_DATA	MACRO
		DC.W	7
		ENDM

;		No 8	common Fix 8*16	font output
FIX_DOUBLE	MACRO	HI
		DC.W	HI*100H+8
		ENDM

;		No 9	common Fix 8*16	font output
FIX_KANA	MACRO	HI
		DC.W	HI*100H+9
		ENDM

;		No 9	common Fix 16*16	font output
FIX_KNJ		MACRO	HI
		DC.W	HI*100H+18H
		ENDM

;		No 0A		sub data call
FIX_CALL	MACRO	ADRS
		DC.W	0AH
		DC.L	ADRS
		ENDM

;		No 0B		sub data return
FIX_RETURN	MACRO
		DC.W	0BH
		ENDM

;		No 0C		same data output
FIX_SAME	MACRO	COUNT,CODE
		DC.W	COUNT*100H+0CH,CODE
		ENDM

;		No 0D		increment data output
FIX_INC_OUT	MACRO	COUNT,CODE
		DC.W	COUNT*100H+0DH,CODE
		ENDM

;		No 0E	A6 work change
FIX_WORK_CHANGE	MACRO	TARGET
		IFC	'MASTER',\1
		DC.W	800EH
		ELSEC
		DC.W	TARGET*100H+0EH
		ENDC
		ENDM

;		No 0F	command table call
FIX_TABLE	MACRO	WORK,OFS,TABLE
		IFC	'A6',\1
		DC.W	0FH
		ELSEC
		DC.W	10FH
		ENDC
		DC.W	OFS
		DC.W	TABLE-*
		ENDM

;		No 17	single command table call
FIX_TABLE_SING	MACRO	WORK,OFS,TABLE
		IFC	'A6',\1
		DC.W	17H
		ELSEC
		DC.W	117H
		ENDC
		DC.W	OFS
		DC.W	TABLE-*
		ENDM

WORD_TBL	MACRO	ADRS
		DC.W	ADRS-*
		ENDM


;		No 10	command pointer to cml
FIX_CML_POINT	MACRO
		DC.W	10H
		ENDM

;		No 11	cml pointer save
FIX_CML_SAVE	MACRO
		DC.W	11H
		ENDM

;		No 12	BCD convert data table set
FIX_BCD_TABLE	MACRO	ADRS
		DC.W	12H
		DC.L	ADRS
		ENDM

;		No 13	BCD data output by BCD table
FIX_BCD_OUT	MACRO	ZERO,BASE,OFS,START,COUNT,X,Y,HI
MODE		SET	8013H+(COUNT-1)*100H
		IFC	\0,'B'
MODE		SET	MODE-8000H
		ENDC
		IFC	'MASK',\1
MODE		SET	MODE+4000H
		ENDC
		IFC	'A6',\2
MODE		SET	MODE+1000H
		ENDC
		IFC	'LOW',\4
MODE		SET	MODE+2000H
		ENDC
		DC.W	MODE,7000H+20H*X+Y,OFS
		DC.B	HI,0
		ENDM

;		No 15	fix continue output
FIX_CONT_MODE	MACRO
		DC.W	15H
		ENDM

;		No 16	C language printf
FIX_PRINTF	MACRO
		DC.W	16H
		ENDM

PARM		MACRO	COUNT,ADRS
		DC.B	'%',COUNT
		DC.W	ADRS-?A5
		ENDM


;
;	    *** fix countinue command ***
;

;		CF No 00	data end
CF_END		MACRO
		DC.B	CTRL_CH,0
		ENDM

;		CF No 01	first parm set
CF_FIRST	MACRO	BX,BY,CH_INC,LINE_INC,ATTR
		DC.B	CTRL_CH,1
		DC.W	7000H+20H*BX+BY
		DC.W	CH_INC,LINE_INC,ATTR
		ENDM

;		CF No 02	line feed
CF_LINE_FEED	MACRO
		DC.B	CTRL_CH,02
		ENDM

;		CF No 03	next page
CF_NEXT_PAGE	MACRO
		DC.B	CTRL_CH,03
		ENDM

;		CF No 04	temporary 1 line clear
CF_LINE_CLEAR	MACRO	X
		DC.B	CTRL_CH,04,X
		ENDM

;		CF No 05	page clear
CF_PAGE_CLEAR	MACRO	X,Y
		DC.B	CTRL_CH,05,X,Y
		ENDM

;		CF No 06	table sub data call with d16(A5)
;		CF No 07	table sub data call with d16(A6)
CF_TABLE_SUB	MACRO	BASE,OFS,TABLE
		DC.B	CTRL_CH
		IFC	'A5',\1
		DC.B	7
		ELSEC
		DC.B	6
		ENDC
		DC.W	OFS
		DC.W	TABLE-*
		ENDM

;		CF No 08	return from sub data
CF_SUB_RETURN	MACRO
		DC.B	CTRL_CH,08
		ENDM

;		CF No 09	word output
CF_WORD_OUT	MACRO	CHH,CHL
		DC.B	CTRL_CH,09,CHH,CHL
		ENDM

;		CF No 0A	CHAR_ATTR change
CF_ATTR_CHANGE	MACRO	CHH
		DC.B	CTRL_CH,0AH,CHH
		ENDM


