#
#    makefile by CHARA.CMD
#

ASM=ASM68K
OPT=/-S/E/-T/CASE
LOD=LOD68K

CHARA.ABS: CH_TBL.OBJ CH_TIT.OBJ CH_BACK.OBJ CH_H1N.OBJ CH_H1A.OBJ CH_H1D.OBJ CH_H2N.OBJ \
        CH_H2A.OBJ CH_H2D.OBJ CH_E1N.OBJ CH_E1A.OBJ CH_E1D.OBJ CH_E2N.OBJ CH_E2A.OBJ \
        CH_E2D.OBJ CH_E3N.OBJ CH_E3A.OBJ CH_E3D.OBJ CH_E4N.OBJ CH_E4A.OBJ CH_E4D.OBJ \
        CH_E5N.OBJ CH_E5A.OBJ CH_E5D.OBJ CH_E6N.OBJ CH_E6A.OBJ CH_E6D.OBJ CH_E7N.OBJ \
        CH_E7A.OBJ CH_E7D.OBJ CH_E8N.OBJ CH_E8A.OBJ CH_E8D.OBJ CH_TEST.OBJ CH_ETC.OBJ \
        CH_DEMO.OBJ 
 $(LOD) @CHARA,CHARA,CHARA 
 @echo .
 @echo .
 ABS CHARAL
 @echo .
 @echo .
!if $d(CH_MAC)
CH_MAC=CH_MAC.INC
!endif
!if $d(SCODE)
SCODE=SCODE.INC
!endif
CH_TBL.OBJ: CH_TBL.SRC 
 $(ASM) CH_TBL,CH_TBL,ER $(OPT)
 @echo .
 @echo .
CH_TIT.OBJ: CH_TIT.SRC $(SMACRO) $(SCODE) $(CH_MAC) $(ACT_No) 
 $(ASM) CH_TIT,CH_TIT,ER $(OPT)
 @echo .
 @echo .
CH_BACK.OBJ: CH_BACK.SRC $(CH_MAC) 
 $(ASM) CH_BACK,CH_BACK,ER $(OPT)
 @echo .
 @echo .
CH_H1N.OBJ: CH_H1N.SRC $(SMACRO) $(SCODE) $(CH_MAC) 
 $(ASM) CH_H1N,CH_H1N,ER $(OPT)
 @echo .
 @echo .
CH_H1A.OBJ: CH_H1A.SRC $(SMACRO) $(SCODE) $(CH_MAC) 
 $(ASM) CH_H1A,CH_H1A,ER $(OPT)
 @echo .
 @echo .
CH_H1D.OBJ: CH_H1D.SRC $(SMACRO) $(SCODE) $(CH_MAC) 
 $(ASM) CH_H1D,CH_H1D,ER $(OPT)
 @echo .
 @echo .
CH_H2N.OBJ: CH_H2N.SRC $(SMACRO) $(SCODE) $(CH_MAC) 
 $(ASM) CH_H2N,CH_H2N,ER $(OPT)
 @echo .
 @echo .
CH_H2A.OBJ: CH_H2A.SRC $(SMACRO) $(SCODE) $(CH_MAC) 
 $(ASM) CH_H2A,CH_H2A,ER $(OPT)
 @echo .
 @echo .
CH_H2D.OBJ: CH_H2D.SRC $(SMACRO) $(SCODE) $(CH_MAC) 
 $(ASM) CH_H2D,CH_H2D,ER $(OPT)
 @echo .
 @echo .
CH_E1N.OBJ: CH_E1N.SRC $(SMACRO) $(SCODE) $(CH_MAC) 
 $(ASM) CH_E1N,CH_E1N,ER $(OPT)
 @echo .
 @echo .
CH_E1A.OBJ: CH_E1A.SRC $(SMACRO) $(SCODE) $(CH_MAC) 
 $(ASM) CH_E1A,CH_E1A,ER $(OPT)
 @echo .
 @echo .
CH_E1D.OBJ: CH_E1D.SRC $(SMACRO) $(SCODE) $(CH_MAC) 
 $(ASM) CH_E1D,CH_E1D,ER $(OPT)
 @echo .
 @echo .
CH_E2N.OBJ: CH_E2N.SRC $(SMACRO) $(SCODE) $(CH_MAC) 
 $(ASM) CH_E2N,CH_E2N,ER $(OPT)
 @echo .
 @echo .
CH_E2A.OBJ: CH_E2A.SRC $(SMACRO) $(SCODE) $(CH_MAC) 
 $(ASM) CH_E2A,CH_E2A,ER $(OPT)
 @echo .
 @echo .
CH_E2D.OBJ: CH_E2D.SRC $(SMACRO) $(SCODE) $(CH_MAC) 
 $(ASM) CH_E2D,CH_E2D,ER $(OPT)
 @echo .
 @echo .
CH_E3N.OBJ: CH_E3N.SRC $(SMACRO) $(SCODE) $(CH_MAC) 
 $(ASM) CH_E3N,CH_E3N,ER $(OPT)
 @echo .
 @echo .
CH_E3A.OBJ: CH_E3A.SRC $(SMACRO) $(SCODE) $(CH_MAC) 
 $(ASM) CH_E3A,CH_E3A,ER $(OPT)
 @echo .
 @echo .
CH_E3D.OBJ: CH_E3D.SRC $(SMACRO) $(SCODE) $(CH_MAC) 
 $(ASM) CH_E3D,CH_E3D,ER $(OPT)
 @echo .
 @echo .
CH_E4N.OBJ: CH_E4N.SRC $(SMACRO) $(SCODE) $(CH_MAC) 
 $(ASM) CH_E4N,CH_E4N,ER $(OPT)
 @echo .
 @echo .
CH_E4A.OBJ: CH_E4A.SRC $(SMACRO) $(SCODE) $(CH_MAC) 
 $(ASM) CH_E4A,CH_E4A,ER $(OPT)
 @echo .
 @echo .
CH_E4D.OBJ: CH_E4D.SRC $(SMACRO) $(SCODE) $(CH_MAC) 
 $(ASM) CH_E4D,CH_E4D,ER $(OPT)
 @echo .
 @echo .
CH_E5N.OBJ: CH_E5N.SRC $(SMACRO) $(SCODE) $(CH_MAC) 
 $(ASM) CH_E5N,CH_E5N,ER $(OPT)
 @echo .
 @echo .
CH_E5A.OBJ: CH_E5A.SRC $(SMACRO) $(SCODE) $(CH_MAC) 
 $(ASM) CH_E5A,CH_E5A,ER $(OPT)
 @echo .
 @echo .
CH_E5D.OBJ: CH_E5D.SRC $(SMACRO) $(SCODE) $(CH_MAC) 
 $(ASM) CH_E5D,CH_E5D,ER $(OPT)
 @echo .
 @echo .
CH_E6N.OBJ: CH_E6N.SRC $(SMACRO) $(SCODE) $(CH_MAC) 
 $(ASM) CH_E6N,CH_E6N,ER $(OPT)
 @echo .
 @echo .
CH_E6A.OBJ: CH_E6A.SRC $(SMACRO) $(SCODE) $(CH_MAC) 
 $(ASM) CH_E6A,CH_E6A,ER $(OPT)
 @echo .
 @echo .
CH_E6D.OBJ: CH_E6D.SRC $(SMACRO) $(SCODE) $(CH_MAC) 
 $(ASM) CH_E6D,CH_E6D,ER $(OPT)
 @echo .
 @echo .
CH_E7N.OBJ: CH_E7N.SRC $(SMACRO) $(SCODE) $(CH_MAC) 
 $(ASM) CH_E7N,CH_E7N,ER $(OPT)
 @echo .
 @echo .
CH_E7A.OBJ: CH_E7A.SRC $(SMACRO) $(SCODE) $(CH_MAC) 
 $(ASM) CH_E7A,CH_E7A,ER $(OPT)
 @echo .
 @echo .
CH_E7D.OBJ: CH_E7D.SRC $(SMACRO) $(SCODE) $(CH_MAC) 
 $(ASM) CH_E7D,CH_E7D,ER $(OPT)
 @echo .
 @echo .
CH_E8N.OBJ: CH_E8N.SRC $(SMACRO) $(SCODE) $(CH_MAC) 
 $(ASM) CH_E8N,CH_E8N,ER $(OPT)
 @echo .
 @echo .
CH_E8A.OBJ: CH_E8A.SRC $(SMACRO) $(SCODE) $(CH_MAC) 
 $(ASM) CH_E8A,CH_E8A,ER $(OPT)
 @echo .
 @echo .
CH_E8D.OBJ: CH_E8D.SRC $(SMACRO) $(SCODE) $(CH_MAC) 
 $(ASM) CH_E8D,CH_E8D,ER $(OPT)
 @echo .
 @echo .
CH_TEST.OBJ: CH_TEST.SRC $(SMACRO) $(SCODE) $(CH_MAC) $(ACT_No) 
 $(ASM) CH_TEST,CH_TEST,ER $(OPT)
 @echo .
 @echo .
CH_ETC.OBJ: CH_ETC.SRC $(SMACRO) $(SCODE) $(CH_MAC) 
 $(ASM) CH_ETC,CH_ETC,ER $(OPT)
 @echo .
 @echo .
CH_DEMO.OBJ: CH_DEMO.SRC $(SMACRO) $(SCODE) $(CH_MAC) 
 $(ASM) CH_DEMO,CH_DEMO,ER $(OPT)
 @echo .
 @echo .
