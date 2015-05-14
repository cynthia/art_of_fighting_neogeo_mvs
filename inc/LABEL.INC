***********************************************************************
*								       *
*		[[[ NOP ]]]  SYMBOL DEFINITION			       *
*								       *
************************************************************************



;*** physical & logical work ***

TYPE		EQU	00H		W:type number (0=free)
WORK_No		EQU	02H		B:myself work number
MASTER_No	EQU	03H		B:master work number

X_POSITION	EQU	04H		L:
Y_POSITION	EQU	08H		L:absolute position
Z_POSITION	EQU	0CH		L:

REL_X		EQU	10H		W:relocate position
REL_Y		EQU	12H		W:

VX		EQU	14H		L:X speed
VY		EQU	18H		L:Y speed
VZ		EQU	1CH		L:Z speed
SPEED		EQU	20H		L:master speed

AX		EQU	24H		W:X accelate
AY		EQU	26H		W:Y accelate
AZ		EQU	28H		W:Z accelate


SPEED_RANK	EQU	2AH		B:master speed rank
MOVE_DIR	EQU	2BH		B:move direction

ADRS1		EQU	2CH		L:address pointer store

STEP1		EQU	30H		B:program step
STEP2		EQU	31H		B:program sub step
MASTER_REQUEST	EQU	32H		B:master work request
BYTE_TIMER	EQU	33H		B:system timer
WORD_TIMER	EQU	34H		W:system timer

WORK_N0		EQU	36H		B:child or target work number
WORK_N1		EQU	37H		B:child or target work number
WORK_N2		EQU	38H		B:child or target work number
WORK_N3		EQU	39H		B:child or target work number

TARGET_X	EQU	3AH		W:target position
TARGET_Y	EQU	3CH		W:target position

FLAG		EQU	3EH		B:
STATE		EQU	3FH		B:


NOP_TYPE	EQU	78H		W:command number
CML_CCR		EQU	7AH		W:ccr store (use NOP_LOGIC)
CML_STACK	EQU	7CH		L:command line stack (use NOP_LOGIC)


;*** physical work ***

ACT_ADRS	EQU	40H		L:action data address
ACT_TYPE	EQU	44H		B:action type number
ACT_TIMER	EQU	45H		B:action timer
ACT_DEC		EQU	46H		B:action timer dec value
;		if d7=1 then action stop

ACT_ATTR	EQU	47H		B:action attribute

ACTAT_FLIP	EQU	0		h flip
ACTAT_KEEP	EQU	2		non display sprite keep
ACTAT_ERACE	EQU	3		16 char clear
ACTAT_CUT	EQU	4		h over cut
ACTAT_OFF	EQU	5		non display
ACTAT_FLASH	EQU	6		flash
ACTAT_SET	EQU	7		character change



ACT_COUNT	EQU	48H		B:action count
ACT_FLAG	EQU	49H		B:action flag
ACT_No		EQU	4AH		W:action code number

DISP_X		EQU	4CH		W:display offset
DISP_Y		EQU	4EH		W:display offset

BIG_X		EQU	50H		B:reduction
BIG_Y		EQU	51H		B:reduction

PALETTE_ADD	EQU	52H		B:display palette add value
FLASH_PALETTE	EQU	53H		B:flash palette code

PRIORITY	EQU	54H		B:sprite priority
SORT_CHILD	EQU	55H		B:sorting child work number
SPRITE_POS	EQU	56H		W:old sprite position

HIT_ACTIVE	EQU	58H		B:active hit judge flag
HIT_PASSIVE	EQU	59H		B:passive hit judge flag

HIT_FLAG	EQU	5AH		B:hit judge flag
HIT_TYPE	EQU	5BH		B:hit type
HIT_OFS_X	EQU	5CH		B:hit area offset
HIT_SIZE_X	EQU	5DH		B:hit area size
HIT_OFS_Y	EQU	5EH		B:hit area offset
HIT_SIZE_Y	EQU	5FH		B:hit area size

HIT_LEFT	EQU	60H		W:hit area position
HIT_RIGHT	EQU	62H		W:hit area position
HIT_UPPER	EQU	64H		W:hit area position
HIT_LOWER	EQU	66H		W:hit area position

HIT_PLAYER	EQU	68H		B:hit player work No
HIT_OBJ		EQU	69H		B:hit obj work No

LIFE		EQU	6AH		W:life
FORCE		EQU	6CH		W:force
COUNT		EQU	6EH		W:

POWER		EQU	70H		W:
LEVEL		EQU	72H		B:
HIT_TYPE_No	EQU	73H		B:



;*** logical work ***

LOG		EQU	80H		logical work offset from physical work


;*** logical work for NOP_LOGIC ***

ADRS2		EQU	40H		L:sub address
LW_D0		EQU	44H		W:
LW_D1		EQU	46H		W:register work
LW_D2		EQU	48H		W:
LW_D3		EQU	4AH		W:
LW_D4		EQU	4CH		W:
LW_D5		EQU	4EH		W:
LW_D6		EQU	50H		W:
LW_D7		EQU	52H		W:


;*** logical work for NOP_LOGIC fix type ***


BASE_ADRS	EQU	X_POSITION	W:output base address
CHAR_INC	EQU	X_POSITION+2	W:adrs inc value after 1 char
LINE_INC	EQU	Y_POSITION	W:adrs inc value after 1 line
CHAR_ATTR	EQU	Z_POSITION	L:character attribute

TEMP_ADRS	EQU	REL_X		W:temporary output address
TEMP_HEAD	EQU	REL_Y		W:temporary line head address

CHAR_WAIT	EQU	VX		B:1 char output wait time
CHAR_WAIT_ORG	EQU	VX+1		B:	"	orginal
LINE_WAIT	EQU	VY		B:1 line output wait time
LINE_WAIT_ORG	EQU	VY+1		B:	"	orginal
PAGE_WAIT	EQU	VZ		B:1 page output wait time
PAGE_WAIT_ORG	EQU	VZ+1		B:	"	orginal

CLEAR_CODE	EQU	AX		W:clear char code
CLEAR_ATTR	EQU	AY		W:clear attribute
COMMAND_CHAR	EQU	AZ		W:command char code
CF_STACK	EQU	SPEED		L:command stack


;
;*** logical work for player and hero ***
;		use LWORK11(player 1) and LWORK12(player 2)
;		    LWORK13(hero 1) and LWORK14(hero 2)
;		P	player only
;		H	hero only
;		PH	player hero common

JUMP_VX		EQU	AX
JUMP_AX		EQU	AY
VZ_KEEP		EQU	AX



HERO_OFFSET	EQU	200H		offset from player to hero
PLAYER_OFFSET	EQU	-200H		offset from hero to player

PLAYER_STATE	EQU	40H	P	B:player status
HERO_STATE	EQU	40H	H	B:hero status
CONT_COUNT	EQU	41H	P	B:coutinue limit
PLAYER_No	EQU	42H	P	W:player No
HERO_TYPE	EQU	42H	H	W:
ANOTHER_PLAYER	EQU	44H	PH	L:another player work address
PLAY_LEVER	EQU	48H	PH	3:playing lever
;					+0 real , +1 triger ,+2 nagetive triger
HERO_OBJ_START	EQU	4BH	H	B:PWORK start
HERO_LIFE	EQU	4CH	H	W:
HERO_ACT_No	EQU	4EH	H	W:hero action code


;		* player only

ATTACK_ON	EQU	AZ
TRI_ON		EQU	AZ+1
ACT_ON		EQU	AY
LIMIT_STOP	EQU	AY+1
ATTACK_STATE	EQU	AX
ATTACK_STATE2	EQU	AX+1
MOVE_MODE	EQU	MOVE_DIR

NON_DEF_TIME	EQU	4EH	P	B:
DEF_SEQ_LV	EQU	4FH	P	B:

EM_STEP		EQU	50H	P	W:
EM_INT		EQU	52H	P	W:

X_DIS		EQU	54h	P	W:player vs player
X_DIS_NEG	EQU	56h	P	W:player vs player (negative)
OLD_X_DIS	EQU	SPEED		W

PLAYER_CONTROL	EQU	58H	P	B
DEF_IN_COUNT	EQU	59H	P	B
ACT_COM		EQU	5AH	P	W:chr_action command
ACTION_ADRS	EQU	5CH	P	L:action_data_address

DIS_SHORT	EQU	60H	P	W:short  search_data
DIS_MID		EQU	62H	P	W:middle search_data
DIS_LONG	EQU	64H	P	W:long   search_data
WIN_ROUND	EQU	66H	P	W:player win_round

DIS_MODE	EQU	68H	P	B:distance_mode level
STATE_MODE	EQU	69H	P	B:state_mode  level
ACT_WAIT	EQU	6AH	P	B:action wait
ACT_CNT		EQU	6BH	P	B:action counter
LIFE_MODE	EQU	6CH	P	B:life_mode  level
FORCE_MODE	EQU	6DH	P	B:force_mode level
TIME_MODE	EQU	6EH	P	B:rest_time_mode level

SEARCH_MODE	EQU	6FH	P	B:search distance_mode
SEARCH_STATE	EQU	70H	P	B:search state_mode
MINE_STATE	EQU	71H	P	B:search enemy_mine state_mode

BEFORE_STATE	EQU	72H	P	B:player before_state
NOW_STATE	EQU	73H	P

STATE_CNT	EQU	74H	P	B:now_state counter
BEFORE_LEVER	EQU	75H	P	B:player before_lever
SRCH_TIMER	EQU	76H	P	B:action_command check_timer
SUCCESS_LEVER	EQU	77H	P	B:player command success_lever
FAIL_LEVER	EQU	78H	P	B:player command failture_lever

NML_SEQ_LV	EQU	79H	P	B:normal_sequence_mode  level
SP_SEQ_LV	EQU	7AH	P	B:special_sequence_mode level
DIS_SEQ_LV	EQU	7BH	P	B:siatnce_sequence_mode level

STOCK_DATA	EQU	7CH	P	B:commnad_interrupt nextaction_stock
OBJECT_WORK	EQU	7DH	P	B:special_sequence back object_work_no

DG_TBLNO	EQU	7EH	P
SEARCH_WAIT	EQU	7FH	P	B:soft_dip level_timer

;Full_work 1byte

;		* hero_only

HIT_OFF		EQU	50H	H	B:hit judge controll (vs.another player)
;					  d0:defence d7:offence (1=off)
DAMAGE_LEVEL	EQU	51H	H	B:get damage level
;			52H	H	B:
SPECIAL_TIMER	EQU	53H	H	B:special attack lever timer
SPECIAL_LEVER	EQU	54H	H	B:special attack lever
HIT_WORK_No	EQU	55H	H	B:hit star work No
SPECIAL_No	EQU	56H	H	B:special attack No
ATTACK_TIMER	EQU	57H	H	B:attack timer

HERO_JOB_BUFFER	EQU	58H	H	B*8:
DASH_CNT	EQU	60H	H	B:
LOCK_TIMER	EQU	61H	H	B:
AREA_POSITION	EQU	62H	H	B:display area 4>2>0>3>5
PLAYER_ACTION	EQU	63H	H	B:
HERO_LOWER	EQU	64H	H	W:hero lower line
WALK_POINTER	EQU	66H	H	B:
DEF_HIT_TYPE_No	EQU	67H	H	B:hit type

;
;*** logical work for hero sub ***
;		use LWORK15(hero 1) and LWORK16(hero 2)

ATTACK_TYPE	EQU	204H		W:
ATTACK_LEVEL	EQU	206H		B:
GARD_LEVEL	EQU	207H		B:
COUNTER_LEVEL	EQU	208H		B:
HIT_STOP	EQU	209H		B:
DAMAGE_ACT_TYPE	EQU	20AH		W:
ACT_GROUP	EQU	20CH		B:

RUNNING_TIMER	EQU	210H		W:
RUNNING_CT	EQU	212H		B:
RUNNING_LEVER	EQU	213H		B:

ADC_ACT_No	EQU	218H		W:action data command set No
ADC_ACT_COUNT	EQU	21AH		B:		"
ADC_COMMAND	EQU	21BH		B:
ADC_VX		EQU	21CH		W:
ADC_VZ		EQU	21EH		W:

HERO_LIFE_D	EQU	220H		W:life display
LIFE_GAGE	EQU	222H		B:life gage
SPIRIT_GAGE	EQU	223H		B:spirit gage
HERO_SPIRIT	EQU	224H		W:spirit
HERO_SPIRIT_D	EQU	226H		W:spirit display
HERO_SCORE	EQU	228H		L:

ACT_CTRL	EQU	230H		W:
DIRECT_CTRL	EQU	232H		W:
CTRL_FLAG	EQU	234H		B:
BEFOR_ATTACK	EQU	235H		B:

HERO_TYPE2	EQU	236H		W:story mode HERO_TYPE store
HERO_TYPE3	EQU	238H		W:HERO_TYPE in player select
HERO_SCORE_D	EQU	23AH		L:
RIKI_TIMER	EQU	23EH		B:
SPIRIT_OLD	EQU	23FH		B:

REV_TRIG_OFF	EQU	240H		B:
NEED_SPIRIT	EQU	241H		B:
HIT_SCORE	EQU	242H		L:
HIT_LR		EQU	246H		B:
DAMAGE_LOCK	EQU	247H		B:

DEF_GARD_LEVEL	EQU	248H		B:
DEF_HIT_STOP	EQU	249H		B:
DEF_HIT_LR	EQU	24AH		B:
DEF_DAMAGE_ACT_TYPE	EQU	24BH	B:
DEF_HIT_SCORE	EQU	24CH		L:

SPECIAL_OUT	EQU	250H		B:
SPECIAL_USE	EQU	251H		B:
WEAK_HIT	EQU	252H		B:
DOWN_DMG	EQU	253H		B:

DEF_HIT_PLAYER	EQU	254H		W:
RIKI_MAX	EQU	256H		W:
DAMAGE_LEVEL2	EQU	258H		B:
TAMA_No		EQU	259H		B:
HERO_BEAT	EQU	25AH		B:
HERO_STATE_ON	EQU	25BH		B:
DEMO_LEVER	EQU	25CH		L:
DEMO_LEV_COUNT	EQU	260H		W:
PLAY_LEVER2	EQU	262H		B:
FURA_COUNT	EQU	263H		B:
FURA_TIMER	EQU	264H		W:
FURA_LEVER	EQU	266H		B:
BEFOR_PUSH	EQU	267H		B:
NON_ADC		EQU	268H		B:

LIFE_PER	EQU	26AH		W:
RENDA_COUNT	EQU	26CH		W:
RET100_No	EQU	26EH		W:

;
;*** logical work for BACK2 ***
;		use LWORK18

Lx		EQU	X_POSITION+2
Ly		EQU	Y_POSITION+2
Wx		EQU	X_POSITION
Wy		EQU	Y_POSITION
Px		EQU	REL_X
Py		EQU	REL_Y
WIDTH_X		EQU	VX
WIDTH_Y		EQU	VY
WxRIGHT		EQU	VX+2
WyUP		EQU	VY+2

WINDOW_LEFT	EQU	40H
DISP_LEFT	EQU	42H
TRI_LEFT	EQU	44H
TRI_RIGHT	EQU	46H
DISP_RIGHT	EQU	48H
WINDOW_RIGHT	EQU	4AH

SL_LEFT		EQU	4CH		scroll move delta limit
SL_RIGHT	EQU	4EH
Tx		EQU	60H



;*** logical work for MORIKAWA ***


BREAK_TYPE	EQU	40H		:W
BREAK_FLAG	EQU	42H		;B
Z_CNT		EQU	43H		;B
SETTING_CNT	EQU	44H		;B
DM_CNT		EQU	45H		;B
GROUND_LINE	EQU	46H		;W
VZ_INIT		EQU	48H		;L

;*** back obect kubifuri ***

JB_BUFFER	EQU	40H		;B*8
JB_STACK	EQU	48H		;B*8
JB_POINTER	EQU	50H		;W
LOOK_PLAYER	EQU	52H		;B
LOOK_STATUS	EQU	53H		;B
LOOK_DIRECTION	EQU	54H		;B
WAIT_TIMER	EQU	55H		;B

GUNJIN_TYPE	EQU	60H		;W



;

;*** player life & force ouput ***
;
CHG_DISP	EQU	40H		;W
MASTER_LIFE	EQU	42H		;W
DISP_LIFE	EQU	44H		;W
MASTER_FORCE	EQU	46H		;W
DISP_FORCE	EQU	48H		;W
DISP_DIR	EQU	4AH		:W

LIFE_F_BUFFER	EQU	50H		;16 B
FORCE_F_BUFFER	EQU	60H		;16 B




;
;	    *** LWORK type number ***
;

SYS_LOGIC	EQU	001H		nop system logic
SYS_PLAYER1	EQU	002H		system player 1
SYS_PLAYER2	EQU	003H		system player 2
SYS_HERO1	EQU	004H		hero 1
SYS_HERO2	EQU	005H		hero 2
SYS_BACK1	EQU	006H		back 1
SYS_BACK2	EQU	007H		back 2
SYS_TEXT1	EQU	008H		text 1
SYS_TEXT2	EQU	009H		text 2
SYS_RESERV	EQU	00AH
SYS_AHO		EQU	00BH		;<*******
SYS_HAKO	EQU	00CH
SYS_HAHEN	EQU	00DH
SYS_LF_OUT	EQU	00EH
L_EASY		EQU	00FH
SYS_KUBIFURI	EQU	010H
L_PAL_ACT	EQU	011H
L_HITAREA	EQU	012H

;
;	    *** PWORK type number ***
;

;SYS_LOGIC	EQU	001H		nop system logic
P_HERO		EQU	002H		hero
P_MAN		EQU	003H		;garally
P_TREE_1	EQU	004H		fornt tree
P_AHO		EQU	005H		;<******
P_HAKO		EQU	006H		;test tal
P_HERO_HEAD	EQU	007H
P_HERO_ATTACK	EQU	008H
P_HAHEN		EQU	009H
P_F_TREE	EQU	00AH
P_STAR		EQU	00BH
P_HERO_BODY	EQU	00CH
P_HERO_SHADOW	EQU	00DH
P_SP2		EQU	00EH
P_SP3		EQU	00FH
P_HERO_WEAK	EQU	010H
P_EASY		EQU	011H
P_KUBIFURI	EQU	012H
P_ICE		EQU	013H
P_BEER		EQU	014H
P_HERO_AREA	EQU	015H
P_HERO_DISP	EQU	016H
P_MATO		EQU	017H
P_FIGHT		EQU	018H
P_HITAREA	EQU	019H
P_GETA		EQU	01AH
P_DESI		EQU	01BH

;
;	    *** soft dip ***
;

SD_ROUND_TIME	EQU	04H		round time	max 99 sec
SD_LANGUAGE	EQU	06H		language	japanese,english,spanish
SD_CONTINUE	EQU	07H		continue	0=without 1=with
SD_RANNYUU	EQU	08H		rannyuu		0=with 1=without
SD_LEVEL	EQU	09H		difficulty	0-7
SD_ROUND	EQU	0AH		stage-round	0=1 1=3 2=5 round
SD_DEMO_SOUND	EQU	0BH		demo sound	0=on 1=off
SD_CREDIT	EQU	0DH		credit display	0=on 1=off
SD_HOW_TO_PLAY	EQU	0EH		how to play	0=on 1=off


;*** debug dip ***

;	dip 1

DEBUG_MODE	EQU	0

HK3_REV1	EQU	00000001B	HK3 reverce
HK3_REV2	EQU	00000010B	HK3 reverce
DISP_HK3	EQU	00000100B
DEMO_IN		EQU	00001000B	demo lever in
HA_ON		EQU	00010000B	hit area disp
NO_DEATH	EQU	00100000B	no death
RND_STOP	EQU	01000000B	effect random stop
NON_FACE	EQU	10000000B	non face change
;	dip 2

SLOW_MODE	EQU	00000011B	bit 0,1
;		00	speed normal
;		01	speed 1/2
;		10	not use (1/2)
;		11	speed 1/4

PAUSE_MODE	EQU	00001100B	bit 2,3
;		00	normal pause
;		01	display freez
;		10	sound test
;		11	RGB test

RENDA_ON	EQU	5
TIME_STOP	EQU	6		non timer dec
MAIN_SHADOW	EQU	7



