#
#    makefile by HERO.CMD
#

ASM=ASM68K
OPT=/-S/E/-T/CASE
LOD=LOD68K

HERO.ABS: GAME_SYM.OBJ HERO_TBL.OBJ HERO.OBJ MOVE_CHG.OBJ HERO_SET.OBJ HERO_ST2.OBJ DMG_SET.OBJ \
        HERO_PM.OBJ HERO_CML.OBJ ATTACK.OBJ 
 $(LOD) @HERO,HERO,HERO 
 @echo .
 @echo .
 ABS HEROL
 @echo .
 @echo .
!if $d(WORK)
WORK=WORK.INC
!endif
!if $d(LABEL)
LABEL=LABEL.INC
!endif
!if $d(ACT_No)
ACT_No=ACT_No.INC
!endif
!if $d(CTRL_No)
CTRL_No=CTRL_No.INC
!endif
!if $d(GAME_SYM)
GAME_SYM=GAME_SYM.INC
!endif
!if $d(SCODE)
SCODE=SCODE.INC
!endif
GAME_SYM.OBJ: GAME_SYM.SRC 
 $(ASM) GAME_SYM,GAME_SYM,ER $(OPT)
 @echo .
 @echo .
HERO_TBL.OBJ: HERO_TBL.SRC 
 $(ASM) HERO_TBL,HERO_TBL,ER $(OPT)
 @echo .
 @echo .
HERO.OBJ: HERO.SRC $(GAME_SYM) $(MACRO) $(NEO_GEO) $(LABEL) $(HFLAG) $(HERO_STP) $(ACT_GRP) $(ACT_No) $(CTRL_No) $(WORK) 
 $(ASM) HERO,HERO,ER $(OPT)
 @echo .
 @echo .
MOVE_CHG.OBJ: MOVE_CHG.SRC $(GAME_SYM) $(MACRO) $(NEO_GEO) $(LABEL) $(HFLAG) $(HERO_STP) $(ACT_GRP) $(CTRL_No) $(WORK) 
 $(ASM) MOVE_CHG,MOVE_CHG,ER $(OPT)
 @echo .
 @echo .
HERO_SET.OBJ: HERO_SET.SRC $(LABEL) $(HFLAG) $(HERO_STP) $(ACT_No) $(ACT_GRP) $(CTRL_No) $(SMACRO) $(SCODE) $(WORK) 
 $(ASM) HERO_SET,HERO_SET,ER $(OPT)
 @echo .
 @echo .
HERO_ST2.OBJ: HERO_ST2.SRC $(LABEL) $(HFLAG) $(HERO_STP) $(ACT_No) $(ACT_GRP) $(CTRL_No) $(SMACRO) $(SCODE) $(WORK) 
 $(ASM) HERO_ST2,HERO_ST2,ER $(OPT)
 @echo .
 @echo .
DMG_SET.OBJ: DMG_SET.SRC $(GAME_SYM) $(LABEL) $(HFLAG) $(HERO_STP) $(ACT_No) $(ACT_GRP) $(CTRL_No) $(SMACRO) $(SCODE) $(WORK) 
 $(ASM) DMG_SET,DMG_SET,ER $(OPT)
 @echo .
 @echo .
HERO_PM.OBJ: HERO_PM.SRC $(GAME_SYM) $(MACRO) $(NEO_GEO) $(LABEL) $(ACT_No) $(HFLAG) $(WORK) 
 $(ASM) HERO_PM,HERO_PM,ER $(OPT)
 @echo .
 @echo .
HERO_CML.OBJ: HERO_CML.SRC $(GAME_SYM) $(NEO_GEO) $(LABEL) $(CML) $(MACRO) $(HFLAG) $(WORK) 
 $(ASM) HERO_CML,HERO_CML,ER $(OPT)
 @echo .
 @echo .
ATTACK.OBJ: ATTACK.SRC 
 $(ASM) ATTACK,ATTACK,ER $(OPT)
 @echo .
 @echo .
