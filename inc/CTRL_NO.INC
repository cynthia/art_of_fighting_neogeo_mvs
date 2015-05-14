;
;
;	    *** HERO CONTOROL CODE NUMBER LIST ***
;
;



;*** normal action ***

CTRL_STOP	EQU	1		standing
CTRL_WALK	EQU	2		walk (front)
CTRL_WALK_BACK	EQU	3		walk (back)
CTRL_RUN	EQU	4		run (front)
CTRL_RUN_BACK	EQU	5		run (back)
CTRL_TO_SIT	EQU	6		to sitdown
CTRL_SIT	EQU	7		sitdown
CTRL_SIT_GARD	EQU	8		sitdown gard
CTRL_TO_UP	EQU	9		to standing (form sit)
CTRL_JUMP	EQU	0AH		jump (nutral)
CTRL_FALL	EQU	0BH		jump fall down
CTRL_LANDING	EQU	0CH		jump landing
CTRL_DAMAGE	EQU	0DH		standing damage
CTRL_DAMAGE_J	EQU	0EH		jumping damage
CTRL_DAMAGE_SIT	EQU	0FH		sitdown damage

CTRL_ATTACK_A	EQU	10H		A button attack
CTRL_ATTACK_B	EQU	11H		B button attack
CTRL_NAGERARE	EQU	12H		nagerare
CTRL_DEAD	EQU	13H		dead damage
CTRL_GARD	EQU	14H		standing gard
CTRL_FRONT_JUMP	EQU	15H		jump (front)
CTRL_BACK_JUMP	EQU	16H		jump (back)
CTRL_STARTC	EQU	17H		start jump
CTRL_WIN	EQU	18H		win pose
CTRL_RIKI	EQU	19H		riki
CTRL_COM	EQU	1AH		com on
CTRL_LOS	EQU	1BH		los
CTRL_FURA	EQU	1CH		furafura
CTRL_ST2	EQU	1DH
CTRL_ST3	EQU	1EH


;*** attack (A button = punch) ***

CTRL_PUNCH0	EQU	20H		long read punch
CTRL_PUNCH1	EQU	21H		long strong punch
CTRL_PUNCH2	EQU	22H		short read punch
CTRL_PUNCH3	EQU	23H		short strong punch
CTRL_PUNCH4	EQU	24H		long body punch (+C button)
CTRL_PUNCH5	EQU	25H		short body punch (+C button)
CTRL_PUNCH6	EQU	26H		punch in sit up
CTRL_PUNCH7	EQU	27H		sitdown punch
CTRL_PUNCH8	EQU	28H		jump punch
CTRL_PUNCH9	EQU	29H		special punch
CTRL_PUNCHA	EQU	2AH		special punch
CTRL_PUNCHB	EQU	2BH		special punch
CTRL_PUNCHC	EQU	2CH		special punch
CTRL_RUN_PUNCH	EQU	2DH		running punch
CTRL_NAGE0	EQU	2EH		nage
CTRL_NAGE1	EQU	2FH		nage


;*** attack (B button = kick) ***

CTRL_KICK0	EQU	30H		long read kick
CTRL_KICK1	EQU	31H		long strong kick
CTRL_KICK2	EQU	32H		short read kick
CTRL_KICK3	EQU	33H		short strong kick
CTRL_KICK4	EQU	34H		long body kick (+C button)
CTRL_KICK5	EQU	35H		short body kick (+C button)
CTRL_KICK6	EQU	36H		kick in sit up
CTRL_KICK7	EQU	37H		sitdown kick
CTRL_KICK8	EQU	38H		jump kick
CTRL_KICK9	EQU	39H		jump back kick
CTRL_KICKA	EQU	3AH		triangle back kick
CTRL_KICKB	EQU	3BH		special kick
CTRL_KICKC	EQU	3CH		special kick
CTRL_RUN_KICK	EQU	3DH		running kick
CTRL_KICKE	EQU	3EH		special kick
CTRL_KICKF	EQU	3FH		special kick


;*** special attck ***

CTRL_SPECIAL0	EQU	40H		special attack
CTRL_SPECIAL1	EQU	41H		special attack
CTRL_SPECIAL2	EQU	42H		special attack
CTRL_SPECIAL3	EQU	43H		special attack
CTRL_SPECIAL4	EQU	44H		special attack
CTRL_SPECIAL5	EQU	45H		special attack
CTRL_SPECIAL6	EQU	46H		special attack
CTRL_SPECIAL7	EQU	47H		special attack
CTRL_SPECIAL8	EQU	48H		special attack
CTRL_SPECIAL9	EQU	49H		special attack
CTRL_SPECIALA	EQU	4AH		special attack
CTRL_SPECIALB	EQU	4BH		special attack
CTRL_SPECIALC	EQU	4CH		special attack
CTRL_SPECIALD	EQU	4DH		special attack
CTRL_SPECIALE	EQU	4EH		special attack
CTRL_SPECIALF	EQU	4FH		special attack


;*** special action *** (from 60H)







