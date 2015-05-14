#
#    makefile by LANG.CMD
#

ASM=ASM68K
OPT=/-S/E/-T/CASE
LOD=LOD68K

LANG.ABS: LANG2.OBJ LANG3.OBJ 
 $(LOD) @LANG,LANG,LANG 
 @echo .
 @echo .
 ABS LANGL
 @echo .
 @echo .
LANG2.OBJ: LANG2.SRC $(EASY_MAC) $(KNJ) $(SMACRO) $(SCODE) $(WORK) 
 $(ASM) LANG2,LANG2,ER $(OPT)
 @echo .
 @echo .
LANG3.OBJ: LANG3.SRC $(EASY_MAC) $(KNJ) 
 $(ASM) LANG3,LANG3,ER $(OPT)
 @echo .
 @echo .
