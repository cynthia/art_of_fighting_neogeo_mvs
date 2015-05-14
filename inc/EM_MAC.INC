
;		enemy action_data macro
;

;
;		* normal & sub command
;
;			*total size 'n'

T1_ACT		MACRO
		DC.B	01H
		ENDM


;
;	lever or command data repeat
;
T1_CHG0		MACRO	DIS,LEVER1,TIMER1
		DC.B	0F0H,00H
		DC.B	TIMER1,LEVER1,DIS
		ENDM

;
;	lever or command data timer only
;
T1_CHG1		MACRO	TIMER,LEVER1
		DC.B	0F0H,01H
		DC.B	TIMER,LEVER1
		ENDM

;
;	player state or distance_mode seach
;
T1_CHG2		MACRO	DIS,STA,DS_S,DS_F,LEVER,TIMER
		DC.B	0F0H,02H
		DC.B	DIS,STA
		DC.B	DS_S,DS_F
		DC.B	TIMER,LEVER
		ENDM

;
;	distance_mode only searching
;
T1_CHG3		MACRO	DIS,LEVER,TIMER
		DC.B	0F0H,03H
		DC.B	DIS
		DC.B	TIMER,LEVER
		ENDM
 
;
;	search dot between from player to enemy
;
T1_CHG4		MACRO	DOT,LEVER,TIMER
		DC.B	0F0H,04H
		DC.B	TIMER,LEVER
		DC.B	DOT
		ENDM

;
;	search dor between from player to enemy part 2
;
T1_CHG5		MACRO	DOT1,DOT2,LEVER,TIMER
		DC.B	0F0H,05H
		DC.B	TIMER,LEVER
		DC.B	DOT2,DOT1
		ENDM

;
;	defence program setting command
;
T1_CHG6		MACRO	TIMER,LEVER
		DC.B	0F0H,06H
		DC.B	TIMER,LEVER
		ENDM

;
;	sankaku program setting command
;
T1_CHG7		MACRO
		DC.B	0F0H,07H
		ENDM

;
;	kiryoku power_on setting command
;
T1_CHG8		MACRO	DIS,TIMER
		DC.B	0F0H,08h
		DC.B	DIS,TIMER
		ENDM


;
;	player state or distance_mode seach
;
T2_ACT		MACRO	DIS,STA,DS_S,DS_F,LEVER,TIMER
		DC.B	02H
		DC.B	DIS,STA
		DC.B	DS_S,DS_F
		DC.B	TIMER,LEVER
		ENDM

;
;	*only distance_search
;
T3_ACT		MACRO	DIS,LEVER,TIMER
		DC.B	03H
		DC.B	DIS
		DC.B	TIMER,LEVER
		ENDM

;
;	distance_mode only searching
;
T4_ACT		MACRO	DOT,LEVER,TIMER
		DC.B	04H
		DC.B	TIMER,LEVER
		DC.B	DOT
		ENDM

;
;	search dot between from player to enemy
;
T5_ACT		MACRO	DOT1,DOT2,LEVER,TIMER
		DC.B	05H
		DC.B	TIMER,LEVER
		DC.B	DOT2,DOT1
		ENDM

;
;	defence program setting command
;
T6_ACT		MACRO	TIMER,LEVER
		DC.B	06h
		DC.B	TIMER,LEVER
		ENDM

;
;	sankaku_geri setting command
;
T7_ACT		MACRO
		DC.B	07h
		ENDM


ACT_END		MACRO
		DC.B	0FFH
		ENDM



ACT_TBL_MAX	MACRO	NUM
		DC.W	NUM-1
		ENDM


STATE1		MACRO	T1,T2,T3,T4
		DC.B	T1,T2,T3,T4
		ENDM

STATE2		MACRO	T1
		DC.B	00
		DC.B	T1
		ENDM

TYPE		MACRO	T1,T2
;		DC.W	T1,T2
		DC.W	T1
		ENDM
;
;	***********  common macro inculde file ***************
;

DSP_T1		MACRO	TBL1
		DC.W	(TBL1-*)
		ENDM

DSP_T2		MACRO	TBL1,TBL2
		DC.W	(TBL1-*)
		DC.W	(TBL2-*)
		ENDM

DSP_T4		MACRO	TBL1,TBL2,TBL3,TBL4
		DC.W	(TBL1-*)
		DC.W	(TBL2-*)
		DC.W	(TBL3-*)
		DC.W	(TBL4-*)
		ENDM

DSP_S1		MACRO	TBL1
		DC.B	(TBL1-*)
		ENDM


DSP_S4		MACRO	TBL1,TBL2,TBL3,TBL4
		DC.B	(TBL1-*)
		DC.B	(TBL2-*)
		DC.B	(TBL3-*)
		DC.B	(TBL4-*)
		ENDM

DM0		EQU	0
DM1		EQU	1
DM2		EQU	2
DM3		EQU	3


;
;	enemy_action standard action
;
NACT		EQU	00H
DOWN		EQU	02H
FRONT_WALK	EQU	08H
BACK_WALK	EQU	04H
 
V_JUMP		EQU	01H
FRONT_JUMP	EQU	01H+08H
BACK_JUMP	EQU	01H+04H

JUMP_PUNCH	EQU	01H+10H
JUMP_KICK	EQU	01H+20H

DOWN_PUNCH	EQU	02H+10H
DOWN_KICK	EQU	02H+20H

FDASH		EQU	04H+80H
BDASH		EQU	05H+80H

PUNCH		EQU	10H
KICK		EQU	20H

KIRYOKU		EQU	19H+80H
CHOHATSU	EQU	80H

UP_GARD	 	EQU	14h+80h
DOWN_GARD	EQU	08h+80h

;*******************************************************************

L_DATA		MACRO	DATA1,DATA2
		DC.L	DATA1*1000H,DATA2*1000H
		ENDM

SYS_LABEL	MACRO	DATA1
		DC.W	DATA1
		ENDM

XZ_POSITION	MACRO	DATA1,DATA2
		DC.W	DATA1,DATA2
		ENDM

XYZ_POSITION	MACRO	DATA1,DATA2,DATA3
		DC.W	DATA1,DATA2,DATA3
		ENDM

OBJNO_PRI	MACRO	DATA1,DATA2
		IFC	\1,'OBJ1'
		DC.W	DATA2+0
		ELSEC
		IFC	\1,'OBJ2'
		DC.W	DATA2+128
		ELSEC
		IFC	\1,'OBJ3'
		DC.W	DATA2+192
		ELSEC
		DC.W	DATA2+0
		ENDC
		ENDC
		ENDC
		ENDM


PNO_ACTNO	MACRO	DATA1,DATA2
		DC.W	DATA1,DATA2
		ENDM

VX_VZ		MACRO	DATA1,DATA2
		DC.L	DATA1*1000H,DATA2*1000H
		ENDM

HIT_BIT		MACRO	DATA1,DATA2
		DC.B	DATA1,DATA2
		ENDM


COM_END		MACRO
		DC.W	0
		ENDM


