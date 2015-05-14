#
#    makefile by SYS.CMD
#

ASM=ASM68K
OPT=/-S/E/-T/CASE
LOD=LOD68K

SYS.ABS: PAL_COM.OBJ ACTION.OBJ SUB.OBJ SOUND.OBJ FIX.OBJ 
 $(LOD) @SYS,SYS,SYS 
 @echo .
 @echo .
 ABS SYSL
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
PAL_COM.OBJ: PAL_COM.SRC $(NEO_GEO) $(WORK) 
 $(ASM) PAL_COM,PAL_COM,ER $(OPT)
 @echo .
 @echo .
ACTION.OBJ: ACTION.SRC $(NEO_GEO) $(LABEL) $(WORK) 
 $(ASM) ACTION,ACTION,ER $(OPT)
 @echo .
 @echo .
SUB.OBJ: SUB.SRC $(NEO_GEO) $(LABEL) $(MACRO) $(CML) $(WORK) 
 $(ASM) SUB,SUB,ER $(OPT)
 @echo .
 @echo .
SOUND.OBJ: SOUND.SRC $(NEO_GEO) $(LABEL) $(MACRO) $(SCODE) $(WORK) 
 $(ASM) SOUND,SOUND,ER $(OPT)
 @echo .
 @echo .
FIX.OBJ: FIX.SRC $(NEO_GEO) $(LABEL) $(WORK) 
 $(ASM) FIX,FIX,ER $(OPT)
 @echo .
 @echo .
