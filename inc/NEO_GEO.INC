;
;	    *** NEO-GEO SYSTEM PROGRAM ADDRESS ***
;

SYSTEM_RESET	EQU	0C00402H
SYSTEM_INT1	EQU	0C00438H
SYSTEM_RETURN	EQU	0C00444H
SYSTEM_IO	EQU	0C0044AH
CREDIT_CHECK	EQU	0C00450H
CREDIT_DOWN	EQU	0C00456H
READ_CALENDAR	EQU	0C0045CH
SYS_CARD	EQU	0C00468H
SYS_CARD_ERROR	EQU	0C0046EH
FIX_CLEAR	EQU	0C004C2H
LSP_1st		EQU	0C004C8H
MESS_OUT	EQU	0C004CEH

METRIC_DATA	EQU	0C02000H
SIN_DATA	EQU	0C04000H
RND_DATA	EQU	0C04200H

MVS_CREDIT	EQU	0D00034H
SOUND_STOP	EQU	0D00046H

;
;	    ***	NEO-GEO	MEMORY & I/O  MAPPING ***
;


*** LSPC (LINE SPRITE CONTROLER) ***

LSPC_ADRS	EQU	3C0000H		W word
;		vram address register

LSPC_DATA	EQU	3C0002H		R/W word
;		vram data register

LSPC_INC	EQU	3C0004H		W word
;		auto increment data register (after vram write)

LSPC_MODE	EQU	3C0006H		W word
;		mode register
;		bit 8-15 auto action speed (1/60 sec)
;		bit 3 action stop, bit 4-7 timer interrupt mode set

V_POSITION	EQU	3C0006H		R word
;		laster virtical	position read register
;		bit 0-2	auto action character code bit 0-2
;		bit 3 0=ntsc 1=pal
;		bit 7-15 v position (*80H)

TIMER_HI	EQU	3C0008H		W word
TIMER_LOW	EQU	3C000AH		W word
;		timer value set
;		count down cycle   1 picsel =167 usec

INT_CLEAR	EQU	3C000CH		W word
;		interrupt clear
CL_TIMER	EQU	00000010B	timer
CL_BLANK	EQU	00000100B	v blanking




*** PALETTE ( COLOR GENERATER )	***

COLOR_GEN	EQU	400000H	 -401FFFH  bank	0  word	or long	word


;		1 color	= [R,G,B] 4 bit	* dark bit
;		1 palette = 16 color (code 0 = blank)
;		all 256	palette
;		palette	0-0FH fix, 10H-FEH line	sprite,	FFH (code F only) back ground
;
;		    bit	0-3   blue  b1-b4
;			4-7   green b1-b4
;			8-11  red   b1-b4
;			12    blue  b0
;			13    green b0
;			14    red   b0
;			15    dark bit
;
;	    ***	read write only	v blanking ***

SHADOW_OFF	EQU	3A0001H		W byte shadow bit off
SHADOW_ON	EQU	3A0011H		W byte shadow bit on

PALETTE_BANK0	EQU	3A001FH		W byte palette bank 0
PALETTE_BANK1	EQU	3A000FH		W byte palette bank 1


*** WATCH DOG ***

WATCH_DOG	EQU	300001H		W byte
;		write this address by 100 ms



*** SOUND ***

SOUND		EQU	320000H		R/W byte
;		write send sound code and request NMI to sound CPU



*** LEVER I/O ***     negative ie. 0=on	1=off

UP		EQU	00000001B
DOWN		EQU	00000010B
LEFT		EQU	00000100B
RIGHT		EQU	00001000B
A_BUTTON	EQU	00010000B
B_BUTTON	EQU	00100000B
C_BUTTON	EQU	01000000B
D_BUTTON	EQU	10000000B

B_UP		EQU	0
B_DOWN		EQU	1
B_LEFT		EQU	2
B_RIGHT		EQU	3
B_A_BUTTON	EQU	4
B_B_BUTTON	EQU	5
B_C_BUTTON	EQU	6
B_D_BUTTON	EQU	7

START_SELECT	EQU	380000H		R byte

P1_START	EQU	00000001B
P1_SELECT	EQU	00000010B
P2_START	EQU	00000100B
P2_SELECT	EQU	00001000B

IC_CARD_ON	EQU	00110000B	0=IC card on

B_P1_START	EQU	0
B_P1_SELECT	EQU	1
B_P2_START	EQU	2
B_P2_SELECT	EQU	3


*** IC CARD ***

IC_WRITE_EI1	EQU	3A0005H		W byte
IC_WRITE_EI2	EQU	3A0017H		W byte
IC_WRITE_DI1	EQU	3A0007H		W byte
IC_WRITE_DI2	EQU	3A0015H		W byte
IC_SELECT	EQU	3A0009H		W byte
IC_NORMAL	EQU	3A0019H		W byte
IC_BANK		EQU	380011H		W byte b0-2
IC_MEMORY	EQU	800000H		IC card	memory area



*** MEMORY BANK	***

SYSTEM_ROM	EQU	3A0003H		W byte 0-7FH is	system rom
USER_ROM	EQU	3A0013H		W byte 0-7FH is	user rom



*** LINE SPRITE	***

;		one line sprite=32 characters (1 character=16*16 dot)

SP_CODE		EQU	00H  40H,41,42,-,7F	(line sprite 0 ,1)
;			   ---	5F3FH (line sprite 380)
;		even address	character code 15 bit (bit 15 don't care)
;		odd address	character atrribute
;				bit 0 h	flip
;				    1 v	flip
;				    2 auto action by 4 character
;				    3	   "         8
;				    4-7	not used
;				    8-15 palette No
;



SP_BIG		EQU	8000H		(line sprite 0)
;			-817CH		 (line sprite 380)
;		line sprite reduction number
;		      bit 0-7	v reduction   (X+1)/100H %
;			  8-11	h reduction   (X+1)/10H	%
;			  12-15	not used



SP_V		EQU	8200H		(line sprite 0)
;			-837CH		 (line sprite 380)
;		line sprite v position
;		      bit 0-5	active character No (if	0 then not displayed)
;			  6	chane bit
;			  7-15	v position (9 bit)
CHANE		EQU	01000000B
B_CHANE		EQU	6


SP_H		EQU	8400H		(line sprite 0)
;			-857CH		 (line sprite 380)
;		line sprite h position
;		      bit 0-6	not used
;			  7-15	h position (9 bit)


*** FIX	***

;		one character 8*8 dot

FIX		EQU	7002H		(v=0 h=0)
;			-73FDH		 (v=27 h=31)
;		h position right => address +20H
;		v position down	 => address +1
;		      bit 0-11	character code
;			  12-15	palette	No


