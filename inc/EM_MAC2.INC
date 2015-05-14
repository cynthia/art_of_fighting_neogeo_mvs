
;
;		enemy action_data macro
;

CHG_TBL		MACRO	D1,D2,D3,D4,D5,D6,D7,D8
		DC.B	D1*4
		DC.B	D2*4
		DC.B	D3*4
		DC.B	D4*4
		DC.B	D5*4
		DC.B	D6*4
		DC.B	D7*4
		DC.B	D8*4
		ENDM
;
;	***********  common macro inculde file ***************
;

D0R_ADD		MACRO
		ADD.W	D0,D0
		ADD.W	D0,D0
		ENDM

D1R_ADD		MACRO
		ADD.W	D1,D1
		ADD.W	D1,D1
		ENDM

D2R_ADD		MACRO
		ADD.W	D2,D2
		ADD.W	D2,D2
		ENDM

D3R_ADD		MACRO
		ADD.W	D3,D3
		ADD.W	D3,D3
		ENDM

D4R_ADD		MACRO
		ADD.W	D4,D4
		ADD.W	D4,D4
		ENDM

;************************************************************************
;
;	job_controll macro no.1
;
JOB_INIT_SET	MACRO
		MOVE.B	#INIT_DIS_JOB,0(A4)
		ENDM

INIT_DIS_CLEAR	MACRO
		MOVE.B	#0,0(A4)
		ENDM

;
;	job_controll macro no.2
;
JOB_SPSTA_SET	MACRO	JOBSP
		LOCAL	JSEND
		TST.B	SEARCH_STATE(A6)
		BMI.S	JSEND

		MOVE.B	#JOBSP,1(A4)
JSEND		NOP
		ENDM

JOB_SPSTA_CLEAR	MACRO
		MOVE.B	#0,1(A4)
		ENDM


;
;	job_controll macro no.3
;
JOB_DIS_SET	MACRO
		LOCAL	JDEND
		CMP.B	#3,SEARCH_MODE(A6)
		BGT.S	JDEND

		MOVE.B	#DIS_JOB,2(A4)
JDEND		NOP
		ENDM

JOB_DIS_CLEAR	MACRO
		MOVE.B	#0,2(A4)
		ENDM

;
;	job_controll macro no.4
;
JOB_INT_SET	MACRO	LB
		MOVE.B	#LB,3(A4)
		ENDM

;
;	job_controll macro no.5
;
JOB_STA_SET	MACRO	JOBS
		MOVE.B	#JOBS,4(A4)
		ENDM

JOB_STA_CLEAR	MACRO
		MOVE.B	#0,4(A4)
		ENDM

;
;	job_controll macro no.6
;
JOB_ADRS_SET	MACRO	JADRSS
		MOVE.B	#JADRSS,5(A4)
		ENDM

JOB_ADRS_CLEAR	MACRO
		MOVE.B	#0,5(A4)
		ENDM


;
;	job_controll macro no.7
;
JOB_COM_SET	MACRO	JCOM
		MOVE.B	#JCOM,6(A4)
		ENDM
JOB_COM_CLEAR	MACRO
		MOVE.B	#0,6(A4)
		ENDM


;
;	job_controll macro etc.
;
JOB_CLEAR	MACRO
		MOVE	JOB_POINTER(A6),D0
		EORI	#7,D0
		MOVE.B	#0,(A4,D0)
		ENDM

JOB_ALL_CLEAR	MACRO
		MOVE.L	#0,(A4)
		MOVE.W	#0,4(A4)
		ENDM

JOB_CHG		MACRO	JB
		LOCAL	JOB_CHG_1
		MOVE	JOB_POINTER(A6),D0
		EORI	#7,D0
		MOVE.B	#JB,0(A4,D0)
		ADD	#1,JOB_POINTER(A6)
		CMP	#8,JOB_POINTER(A6)
		BLE	JOB_CHG_1

		MOVE	#7,JOB_POINTER(A6)
JOB_CHG_1	NOP
		ENDM


;************************************************************************

EM_INIT		EQU	1
EM_SPECIAL	EQU	11
EM_ATTACK	EQU	12
EM_SCLIM	EQU	13
EM_AT_CHK	EQU	14

EINT1		EQU	2
EINT2		EQU	3
EINT3		EQU	4
EINT4		EQU	5

EM_DEF_WAIT	EQU	6
EM_DEF_NEXT	EQU	7
EM_DEF_UP	EQU	9
EM_DEF_DOWN	EQU	10
SANKAKU		EQU	8


;************************************************************************

;
;	*job no.1 (init_diatance search mode)
;
INIT_DIS_JOB	EQU	1

;
;	*job no.2 (player special_status search mode)
;
SP_CHK_JOB	EQU	4
STA_AT_JOB	EQU	16

;
;	*job no.3 (player vs enemy status search mode)
;
DIS_JOB		EQU	5

;
;	*job no.4 (command interrupt program)
;
INT1_JOB	EQU	6
INT2_JOB	EQU	7
INT3_JOB	EQU	8
INT4_JOB	EQU	14

;
;	*job no.5 (enemy type seaquence program
;					 & nomal_status search mode)
;
SP_SRCH_JOB	EQU	9
SC_LIM_JOB	EQU	2
STA_NML_JOB	EQU	3

;
;	*job no.6 (enemy action_command address setting)
;
ADRS_SET_JOB	EQU    	10
SP_ADRS_SET_JOB	EQU   	11

;
;	*job no.7 (action_command operation program)
;
COM_OPE_JOB	EQU	12
COM_WAIT_JOB	EQU	13
COM_STOP_JOB	EQU	15

DEF_WAIT_JOB	EQU	17
DEF_NEXT_JOB	EQU	18
DEF_UP_JOB	EQU	20
DEF_DOWN_JOB	EQU	21

SANKAKU_JOB	EQU	19

;************************************************************************
