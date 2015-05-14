#
#    makefile by GAME.CMD
#

ASM=ASM68K
OPT=/-S/E/-T/CASE
LOD=LOD68K

GAME.ABS: SYS.OBJ VECTOR.OBJ PHASE.OBJ EASY.OBJ GAME_DSP.OBJ MAIN.OBJ PAUSE.OBJ \
        STORY.OBJ START.OBJ BACK.OBJ SELECT.OBJ DUMMY.OBJ DM_TBL.OBJ DEMO_CML.OBJ \
        RANK.OBJ CARD.OBJ BONUS.OBJ BSEL.OBJ MOVE.OBJ HOW.OBJ HIT.OBJ \
        ACT_SUB.OBJ GAME_SUB.OBJ MESSAGE.OBJ LANG.OBJ WORK.OBJ 
 $(LOD) @GAME,GAME,GAME 
 @echo .
 @echo .
 ABS GAMEL
 @echo .
 @echo .
!if $d(WORK)
WORK=WORK.INC
!endif
!if $d(LABEL)
LABEL=LABEL.INC
!endif
!if $d(NEO_GEO)
NEO_GEO=NEO_GEO.INC
!endif
!if $d(MACRO)
MACRO=MACRO.INC
!endif
!if $d(SCODE)
SCODE=SCODE.INC
!endif
!if $d(ACT_No)
ACT_No=ACT_No.INC
!endif
!if $d(EASY_MAC)
EASY_MAC=EASY_MAC.INC
!endif
!if $d(SYS)
SYS=SYS.INC
!endif
!if $d(HERO_TBL)
HERO_TBL=HERO_TBL.INC
!endif
!if $d(HK3_TBL)
HK3_TBL=HK3_TBL.INC
!endif
SYS.OBJ: SYS.SRC 
 $(ASM) SYS,SYS,ER $(OPT)
 @echo .
 @echo .
VECTOR.OBJ: VECTOR.SRC $(KANA) $(HERO_TBL) 
 $(ASM) VECTOR,VECTOR,ER $(OPT)
 @echo .
 @echo .
PHASE.OBJ: PHASE.SRC $(SYS) $(NEO_GEO) $(LABEL) $(HFLAG) $(MACRO) $(EASY_MAC) $(SMACRO) $(SCODE) $(WORK) 
 $(ASM) PHASE,PHASE,ER $(OPT)
 @echo .
 @echo .
EASY.OBJ: EASY.SRC $(SYS) $(NEO_GEO) $(LABEL) $(MACRO) $(WORK) 
 $(ASM) EASY,EASY,ER $(OPT)
 @echo .
 @echo .
GAME_DSP.OBJ: GAME_DSP.SRC $(SYS) $(NEO_GEO) $(LABEL) $(EASY_MAC) $(MACRO) $(HFLAG) $(WORK) 
 $(ASM) GAME_DSP,GAME_DSP,ER $(OPT)
 @echo .
 @echo .
MAIN.OBJ: MAIN.SRC $(HERO_TBL) $(SYS) $(MACRO) $(NEO_GEO) $(LABEL) $(EASY_MAC) $(SMACRO) $(SCODE) $(WORK) 
 $(ASM) MAIN,MAIN,ER $(OPT)
 @echo .
 @echo .
PAUSE.OBJ: PAUSE.SRC $(SYS) $(MACRO) $(NEO_GEO) $(LABEL) $(SMACRO) $(SCODE) $(EASY_MAC) $(WORK) 
 $(ASM) PAUSE,PAUSE,ER $(OPT)
 @echo .
 @echo .
STORY.OBJ: STORY.SRC $(SYS) $(NEO_GEO) $(LABEL) $(HERO_TBL) $(HK3_TBL) $(MACRO) $(EASY_MAC) $(HFLAG) $(HERO_STP) $(CTRL_No) $(SMACRO) $(SCODE) $(WORK) 
 $(ASM) STORY,STORY,ER $(OPT)
 @echo .
 @echo .
START.OBJ: START.SRC $(SYS) $(NEO_GEO) $(LABEL) $(HERO_TBL) $(HK3_TBL) $(MACRO) $(EASY_MAC) $(HFLAG) $(HERO_STP) $(CTRL_No) $(SMACRO) $(SCODE) $(WORK) 
 $(ASM) START,START,ER $(OPT)
 @echo .
 @echo .
BACK.OBJ: BACK.SRC $(SYS) $(NEO_GEO) $(LABEL) $(HFLAG) $(SMACRO) $(SCODE) $(WORK) 
 $(ASM) BACK,BACK,ER $(OPT)
 @echo .
 @echo .
SELECT.OBJ: SELECT.SRC $(SYS) $(MACRO) $(NEO_GEO) $(LABEL) $(EASY_MAC) $(ACT_No) $(SMACRO) $(SCODE) $(WORK) 
 $(ASM) SELECT,SELECT,ER $(OPT)
 @echo .
 @echo .
DUMMY.OBJ: DUMMY.SRC $(SYS) $(MACRO) $(NEO_GEO) $(LABEL) $(ACT_No) $(HFLAG) $(WORK) 
 $(ASM) DUMMY,DUMMY,ER $(OPT)
 @echo .
 @echo .
DM_TBL.OBJ: DM_TBL.SRC $(LABEL) $(ACT_No) 
 $(ASM) DM_TBL,DM_TBL,ER $(OPT)
 @echo .
 @echo .
DEMO_CML.OBJ: DEMO_CML.SRC $(SYS) $(NEO_GEO) $(LABEL) $(ACT_No) $(MACRO) $(EASY_MAC) $(SMACRO) $(SCODE) $(WORK) 
 $(ASM) DEMO_CML,DEMO_CML,ER $(OPT)
 @echo .
 @echo .
RANK.OBJ: RANK.SRC $(SYS) $(NEO_GEO) $(LABEL) $(EASY_MAC) $(WORK) 
 $(ASM) RANK,RANK,ER $(OPT)
 @echo .
 @echo .
CARD.OBJ: CARD.SRC $(SYS) $(NEO_GEO) $(LABEL) $(ACT_No) $(MACRO) $(EASY_MAC) $(SMACRO) $(SCODE) $(WORK) 
 $(ASM) CARD,CARD,ER $(OPT)
 @echo .
 @echo .
BONUS.OBJ: BONUS.SRC $(SYS) $(NEO_GEO) $(LABEL) $(HERO_TBL) $(ACT_No) $(MACRO) $(EASY_MAC) $(SMACRO) $(SCODE) $(WORK) 
 $(ASM) BONUS,BONUS,ER $(OPT)
 @echo .
 @echo .
BSEL.OBJ: BSEL.SRC $(SYS) $(NEO_GEO) $(LABEL) $(HERO_TBL) $(ACT_No) $(CTRL_No) $(HERO_STP) $(MACRO) $(EASY_MAC) $(SMACRO) $(SCODE) $(WORK) 
 $(ASM) BSEL,BSEL,ER $(OPT)
 @echo .
 @echo .
MOVE.OBJ: MOVE.SRC $(SYS) $(NEO_GEO) $(LABEL) $(ACT_No) $(MACRO) $(EASY_MAC) $(SMACRO) $(SCODE) $(HFLAG) $(WORK) 
 $(ASM) MOVE,MOVE,ER $(OPT)
 @echo .
 @echo .
HOW.OBJ: HOW.SRC $(SYS) $(LABEL) $(NEO_GEO) $(HERO_TBL) $(EASY_MAC) $(WORK) 
 $(ASM) HOW,HOW,ER $(OPT)
 @echo .
 @echo .
HIT.OBJ: HIT.SRC $(SYS) $(MACRO) $(NEO_GEO) $(LABEL) $(WORK) 
 $(ASM) HIT,HIT,ER $(OPT)
 @echo .
 @echo .
ACT_SUB.OBJ: ACT_SUB.SRC $(NEO_GEO) $(LABEL) $(WORK) 
 $(ASM) ACT_SUB,ACT_SUB,ER $(OPT)
 @echo .
 @echo .
GAME_SUB.OBJ: GAME_SUB.SRC $(SYS) $(NEO_GEO) $(LABEL) $(WORK) 
 $(ASM) GAME_SUB,GAME_SUB,ER $(OPT)
 @echo .
 @echo .
MESSAGE.OBJ: MESSAGE.SRC $(SYS) $(LABEL) $(MACRO) $(EASY_MAC) $(KNJ) $(WORK) 
 $(ASM) MESSAGE,MESSAGE,ER $(OPT)
 @echo .
 @echo .
LANG.OBJ: LANG.SRC $(SYS) $(LABEL) $(EASY_MAC) $(KNJ) $(SMACRO) $(SCODE) $(WORK) 
 $(ASM) LANG,LANG,ER $(OPT)
 @echo .
 @echo .
!if 0
WORK.OBJ: WORK.SRC $(LABEL) $(WORK) 
 $(ASM) WORK,WORK,ER $(OPT)
 @echo .
 @echo .
!endif
WORK.OBJ: WORK.SRC LABEL.INC WORK.INC 
 $(ASM) WORK,WORK,WORK /D/-T/CASE
 @echo .
 @echo .
 $(LOD) @WORK,WORK,NUL
 @echo .
 @echo .
