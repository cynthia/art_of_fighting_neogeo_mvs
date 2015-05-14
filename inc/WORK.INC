************************************************************************
*  								       *
*		[[[ NOP ]]]  WORK AREA				       *
*								       *
************************************************************************



		COMMON	WORK,,D

WORK_TOP:

;	    *** buffer etc. (100000H) ***

COLOR_BUFFER_0	DS.B	2000H
COLOR_BUFFER	DS.B	2000H

BACK1_BUFFER	DS.B	1000H
BACK2_BUFFER	DS.B	1000H
BACK3_BUFFER	DS.B	1000H

SOUND_BUFFER	DS.B	100H
CARD_BUFFER	DS.B	100H
TEXT_BUFFER	DS.B	200H
RANDOM_BUFFER	DS.B	100H
SORT_WORK	DS.B	100H
ORDER_BUFFER	DS.B	128*2
VPOS_BUFFER	DS.W	180H
BACK_VRAM	DS.W	64*2
CAL_MESS	DS.B	100H

		DS.B	1000H-(*-SOUND_BUFFER)



;	    *** system area (108000H) ***



A5_WORK		DS.B	16

REG_D0		DS.B	4
REG_D1		DS.B	4
REG_D2		DS.B	4
REG_D3		DS.B	4
REG_D4		DS.B	4
REG_D5		DS.B	4
REG_D6		DS.B	4
REG_D7		DS.B	4
REG_A0		DS.B	4
REG_A1		DS.B	4
REG_A2		DS.B	4
REG_A3		DS.B	4
REG_A4		DS.B	4
REG_A5		DS.B	4
REG_A6		DS.B	4
REG_A7		DS.B	4

REG_STACK	DS.B	4*16


MAIN_STEP	DS.W	1		game main step
MAIN_STEP_STORE	DS.W	1		game main step store
SUB_STEP	DS.W	1		game sub step
SUB_STEP_STORE	DS.W	1		game sub step store
SUB_SUB_STEP	DS.W	1		spear step

STOP_STEP	DS.W	1		game stop mode step
STOP_SUB_STEP	DS.W	1		stop mode sub step
		DS.W	1
LSPC_MODE_STORE	DS.W	1		LSPC mode register output value
SOUND_CODE_W	DS.W	1		send outer sound code

LSPC_TIMER1	DS.L	1
LSPC_TIMER2	DS.L	1
INT2_COUNT_BASE	DS.W	1
INT2_COUNT	DS.W	1
INT2_START	DS.L	1
LSPC_MODE_STOP	DS.W	1		LSPC mode register for pause


		DS.B	100H-(*-A5_WORK)


STOPPER		DS.B	1		1/60 sec wait stopper
LSPC_BUSY	DS.B	1		LSPC access flag
START_FLAG2	DS.B	1		game start flag
FIRST_START	DS.B	1		game start time

SD_IN_POINT	DS.B	1		sound code input pointer
SD_OUT_POINT	DS.B	1		sound code output pointer

RANDOM_SEED	DS.B	1		system randomlist seed
MAKE_RANDOM	DS.B	1		random make pointer
READ_RANDOM	DS.B	1		random read pointer

ERROR_LEVER	DS.B	1		system lever off
SECOND_VALUE	DS.B	1		1sec v-int count
TEMP_ORDER	DS.B	1		use order buffer number
TEMP_SPG	DS.B	1
SPG_MODE	DS.B	1

MASTER_LWORK	DS.B	8		step master LWORK No
HIT_JUDGE_COUNT	DS.B	2

PG_NUMBER	DS.B	16

PAUSE_DI	DS.B	1		!=0 pause disable
SOUND_TEST_CODE	DS.B	2

TEST_PALETTE	DS.B	2
TEST_COLOR	DS.B	2
TEST_PG		DS.B	2
TEST_R		DS.B	2
TEST_G		DS.B	2
TEST_B		DS.B	2
STC20		DS.B	3
STC21		DS.B	3


		DS.B	80H-(*-STOPPER)

RANDOM_COUNT	DS.W	1		random make
MAIN_COUNT	DS.L	1
INT1_COUNT	DS.L	1

BGM_CODE	DS.W	1		playing BGM code keep

COLOR_STATE	DS.W	1
COLOR_FLAG	DS.W	1
COLOR_TIMER	DS.W	1

PAUSE_BUFFER	DS.W	5


		DS.B	80H-(*-RANDOM_COUNT)

;
;	    *** for sprite display ***
;

BACK_INFO	DS.L	1
PAL_IND_INFO	DS.L	1	nop tool infomation
PALETTE_INFO	DS.L	1
OBJT_INFO	DS.L	1

WINDOW_X	DS.L	1
WINDOW_Y	DS.L	1

OBJ_DIV_POINT	DS.L	1


OBJ1_MAP	DS.B	8
OBJ2_MAP	DS.B	8
OBJ3_MAP	DS.B	8
OBJ4_MAP	DS.B	8

OBJ_START	EQU	0
OBJ_SIZE	EQU	2
OBJ_USE		EQU	4
DB_TYPE		EQU	6

TEMP_SPRITE	DS.W	1
MAX_SPRITE	DS.W	1
START_V_ADRS	DS.W	1
START_V_VALUE	DS.W	1
TEMP_BIG_X	DS.W	1
TEMP_BIG_Y	DS.W	1
TEMP_BIG_VALUE	DS.W	1
TEMP_BIG_BIT	DS.L	1
TEMP_PAL_COM	DS.W	1
H_FLIP_FLAG	DS.W	1
ERACE_CHARA	DS.W	1
ERACE_16	DS.W	1
VPOS_POINT	DS.L	1
CONV_TYPE	DS.W	1
CONV_MARK	DS.L	1
MASTER_PWORK	DS.L	1
ACTION_STACK	DS.L	1

TEMP_PAL_COM2	DS.W	1
TEMP_CONV_START	DS.W	1
USE_COUNT	DS.W	1
OBJ_MAP_POINT	DS.L	1


  		DS.B	100H-(*-BACK_INFO)

MESS_OUT_POINT	DS.L	1
MESS_COM_MODE	DS.L	1
MESS_DATA_POINT	DS.W	1


		DS.B	400H-(*-A5_WORK)

;
;	    *** game original work ***
;

AREA_No		DS.W	1
ROUND_No	DS.W	1
MAX_ROUND	DS.W	1
STAGE_TIME	DS.W	1
WIN_PLAYER	DS.L	1
WINNER_ROUND	DS.W	1

SELECT_PLAYER	DS.W	1		<**************
SEL_TIMER	DS.W	1		<**************
SEL_CURSOLE1	DS.W	1
SEL_CURSOLE2	DS.W	1

MIN_DISTANCE	DS.W	1
TEMP_DISTANCE	DS.W	1
TEMP_DISTANCE2	DS.W	1
ACT_CHECK_MODE	DS.W	1

PLAYING_TYPE	DS.W	1

PHASE		DS.W	1		game phase
HOME_CREDIT	DS.W	1
DISP_CREDIT	DS.W	1		for credit disp
STORY_PLAYER	DS.W	1		story mode player
STORY_STAGE	DS.W	1		story mode stage No

LEVEL_ORG	DS.W	1		original level
LEVEL_ADD	DS.W	1		level addition
LEVEL_TEMP	DS.W	1		temp level

INSERT_POS	DS.W	1		insert ... DISPLAY POSITION
FLAME_POS	DS.W	1
FLAME_TYPE	DS.W	1
FLAME_COUNT	DS.W	1
FLAME_END	DS.W	1

BONUS_No	DS.W	1
BONUS_HERO	DS.W	1
KING_MUNE	DS.W	1
OLD_VS		DS.W	1
ROUND_DISP_No	DS.W	1

ATTACK_MUL	DS.W	1
BONUS_RANK	DS.W	1
HAOH_USE	DS.W	1
BONUS3_NORMA	DS.W	1
BONUS3_USE	DS.W	1

SCORE_LIFE	DS.L	1
SCORE_TIME	DS.L	1
SCORE_PER	DS.L	1
SCORE_TOTAL	DS.L	1
ST_TD_RANK	DS.W	1
ST_TL_RANK	DS.W	1
VS_TD_RANK	DS.W	1
VS_TL_RANK	DS.W	1
NAMING_PLAYER	DS.L	1
ST_IN_RANK	DS.W	1
VS_IN_RANK	DS.W	1
NAME_NAME_POS	DS.W	1
BACK2_ST_BIG	DS.W	1
ST_DEMO_MESSP	DS.W	1
SELC_MODE	DS.W	1
HOW_SPA_No	DS.W	1

		DS.B	700H-(*-A5_WORK)

LANGUAGE	DS.B	1
NEXT_AREA_F	DS.B	1
DEMO_OVER_FLAG	DS.B	1
DRAW_FLAG	DS.B	1
STAGE_END_FLAG	DS.B	1
DEMO_FLAG	DS.B	1
LP_MAIN_RUN	DS.B	1
NON_CTRL	DS.B	1
LANGUAGE_SD	DS.B	1
MAKE_DEMO_CUT	DS.B	1
STORY_LIFE	DS.B	1
STORY_SPIRIT	DS.B	1
IN_BONUS	DS.B	1
BONUS_DI	DS.B	1
BONUS_STATE_ON	DS.B	1
BONUS_WIN	DS.B	1
BONUS_TIMER	DS.B	1
SLOW_CUT	DS.B	1
HOW_TO_FLAG	DS.B	1
ST_DEMO_ON	DS.B	1
ST_BACK_FLAG	DS.B	1
ST_DEMO_IN	DS.B	1
TIME_UP_TIMER	DS.B	1

		DS.B	800H-(*-A5_WORK)



;	    *** backup area (108800H) ***

DEBUG_DIP1	DS.B	1
DEBUG_DIP2	DS.B	1
VERSION		DS.W	1
COIN_COUNT	DS.W	1		coin sound counter
DEMO_NUMBER	DS.B	1
HOW_MESS_No	DS.B	1
TODAY		DS.L	1
HI_SCORE	DS.L	1
RANK_TL_S	DS.B	8*5
RANK_TD_S	DS.B	8*5
RANK_TD_V	DS.B	8*5
RANK_TL_V	DS.B	8*5


		DS.B	800H-(*-DEBUG_DIP1)



;	    *** logical & physical work (109000H) ***


PWORK_START:
PWORK10		DS.B	80H

LWORK_START:
LWORK11		DS.B	80H

		DS.B	100H*(96-1)


PLAYER1		EQU	LWORK11+0000H
PLAYER2		EQU	LWORK11+0100H
HERO1		EQU	LWORK11+0200H
HERO2		EQU	LWORK11+0300H
HERO1S		EQU	LWORK11+0400H
HERO2S		EQU	LWORK11+0500H
BACK1		EQU	LWORK11+0600H
BACK2		EQU	LWORK11+0700H
TEXT1		EQU	LWORK11+0800H
TEXT2		EQU	LWORK11+0900H
RESERV1		EQU	LWORK11+0A00H
RESERV2		EQU	LWORK11+0B00H
RESERV3		EQU	LWORK11+0C00H
RESERV4		EQU	LWORK11+0D00H
RESERV5		EQU	LWORK11+0E00H
RESERV6		EQU	LWORK11+0F00H
MLWORK1		EQU	RESERV5
MLWORK2		EQU	RESERV6


HERO1_OBJ_START	EQU	(10H+0)*100H
HERO2_OBJ_START	EQU	(10H+10H)*100H
FREE_OBJ_START	EQU	(10H+20H)*100H



;	    *** flag buffer (10F000H) ***

BIT_FLAG	DS.B	100H
BYTE_FLAG	DS.B	100H


		DS.B	0F300H-(*-WORK_TOP)


;
;	    *** NEO-GEO system work (10F300H) ***
;


SSP_END:		       ;supervisor stack
		DS.B	900H
		DS.B	180H


SYS_WORK0:

;		user read area

SYSTEM_MODE	DS.W	1	system working mode
MVS_FLAG	DS.B	1	consumer or M.V.S
COUNTRY_CODE	DS.B	1

GAME_DIP	DS.B	16

INPUT_1		DS.B	6	I/O input value	for player 1

;		+0	controller type		0=non connect
;						1=nomal	controller
;						2=expander
;						3=marjang
;						4=key board
;		+1	before 1/60 sec	real value (positive)
;		+2	real value (positive)
;		+3	edge (positiove)
;		+4	edge or	auto repeat (8/60 sec)
;		+5	key repeat timer

INPUT_2		DS.B	6	I/O input value	for player 2
INPUT_3		DS.B	6	I/O input value	for player 3
INPUT_4		DS.B	6	I/O input value	for player 4

INPUT_S		DS.B	2	start &	select button

;		+0	real value (positive)
;		+1	edge (positiove)
;		bit (N-1)*2	player N start
;		but (N-1)*2+1	player N select


USER_REQUEST	DS.B	1	request	code for user by system

;		0	power on initialize
;		1	eye catch
;		2	demo,game

USER_MODE	DS.B	1	user job mode

;		0	power on initialize or eye catch
;		1	demo
;		2	in game

CREDIT_DEC	DS.L	1	credit decrement number	P1-P4 (BCD)

START_FLAG	DS.W	1	player addtioin	request	or answer flag

PLAYER_MODE	DS.B	8	player condition

;		0	not start
;		1	in game
;		2	continue time
;		3	game over


MESS_POINT	DS.L	1	message	buffer pointer
MESS_BUSY	DS.W	1	message	buffer busy flag

CARD_COMMAND	DS.B	1	IC card	acces command
CARD_MODE	DS.B	1	IC card	command	error job mode
CARD_ANSWER	DS.W	1	IC card	command	answer back
CARD_START	DS.L	1	IC card	buffer start address
CARD_SIZE	DS.W	1	IC card	buffer size
CARD_FCB	DS.W	1	IC card	FCB
CARD_SUB	DS.W	1	IC card	file sub No

DATE_TIME	DS.B	8	presnt date & time

SELECT_TIMER	DS.W	1
		DS.W	1	START_TEST
		DS.W	1	COIN_LEVER

		DS.B	80H-(*-SYS_WORK0)


SYS_WORK1:

CREDIT		DS.B	4
		DS.L	1	SWITCH_STORE
		DS.B	8	UNDER_CREDIT
		DS.W	1	COIN1_CRD_NOR
		DS.W	1	COIN2_CRD_NOR
		DS.W	1	COIN1_CRD_CNT
		DS.W	1	COIN2_CRD_CNT
		DS.B	1	SELECT_FREE
		DS.B	1	NON_LIMIT
		DS.W	1	SELECT_LIMIT
		DS.B	1	DEMO_SOUND
		DS.B	1
		DS.W	1	INIT_MARK
		DS.W	1	SR_STORE
		DS.L	1	VERSION_BASE
		DS.B	2*16	GD_STORE


		DS.B	80H-(*-SYS_WORK1)


SYS_WORK2:

POWER_ON_ID	DS.B	8	power on id-code
SYS_INT1_TIMER	DS.L	1	int 1 counter
SYS_STOPPER	DS.B	1	system stopper
		DS.B	1	Z80_BANK

		DS.W	1	SYSTEM_MODE2
		DS.W	1	CARD_TIMER
		DS.L	1	CARD_START2
		DS.W	1	CARD_SIZE2
		DS.W	1	CARD_FCB2
		DS.W	1	CARD_SUB2
		DS.B	20	DIR_BUFFER
		DS.W	5	DIR_NUMBER
		DS.B	1	FIX_STORE_FLAG
		DS.B	1	LED_OFF
		DS.B	1	IN_TEST
		DS.B	1	INST_MODE
		DS.B	1	START_BUSY
		DS.B	1	BACKUP_MODE
		DS.L	1	INST_RAD
		DS.B	1	INST_RCO
		DS.B	1	TITLE_MODE

MESS_STACK	DS.L	5

		DS.B	1
		DS.B	1
INPUT_SS	DS.B	2
		DS.B	2	INPUT_TT
		DS.B	1	KYOUSEI_MODE
		DS.B	1	SYS_STOP
		DS.B	1	CS_REMAIN
		DS.B	1	INT_OFF
		DS.W	1	INT1_TIMER2
		DS.B	1	MAJ_NOR
		DS.B	1
INPUT_5		DS.B	6
INPUT_6		DS.B	6

		DS.B	80H-(*-SYS_WORK2)


MESS_BUFFER	DS.B	100H	system message buffer



