#
#    makefile by HK3.CMD
#

ASM=ASM68K
OPT=/-S/E/-T/CASE
LOD=LOD68K

HK3.ABS: GAME_SYM.OBJ HK3_TBL.OBJ HK3.OBJ HK3_SET.OBJ STATE_CHK.OBJ HK3_INT.OBJ HK3_SUB.OBJ \
        COM_OPE.OBJ EM_DATA.OBJ EM_FRONT.OBJ EM_BACK.OBJ DEF_1P.OBJ DEF_2P.OBJ DEF2_1P.OBJ \
        DEF2_2P.OBJ EM_P1.OBJ EM_P2.OBJ EM_SP1.OBJ EM_SP2.OBJ EM_SP3.OBJ EM_SP4.OBJ \
        EM_SP5.OBJ EM_SCLIM.OBJ EM_SP6.OBJ EM_SP7.OBJ EM_SP8.OBJ EM_SP9.OBJ EM_SP10.OBJ \
        EM_SP11.OBJ EM_SP1H.OBJ EM_SP2H.OBJ EM_SP3H.OBJ EM_SP4H.OBJ EM_SP5H.OBJ EM_SP6H.OBJ \
        EM_SP7H.OBJ EM_SP8H.OBJ EM_SP9H.OBJ EM_SP10H.OBJ EM_SP11H.OBJ EMH_SCLIM.OBJ EM1_TBL.OBJ \
        EM2_TBL.OBJ EM3_TBL.OBJ EM4_TBL.OBJ EM5_TBL.OBJ EM6_TBL.OBJ EM7_TBL.OBJ EM8_TBL.OBJ \
        MOTION.OBJ EM_PACK.OBJ NEWS.OBJ 
 $(LOD) @HK3,HK3,HK3 
 @echo .
 @echo .
 ABS HK3L
 @echo .
 @echo .
!if $d(WORK)
WORK=WORK.INC
!endif
!if $d(LABEL)
LABEL=LABEL.INC
!endif
!if $d(GAME_SYM)
GAME_SYM=GAME_SYM.INC
!endif
GAME_SYM.OBJ: GAME_SYM.SRC 
 $(ASM) GAME_SYM,GAME_SYM,ER $(OPT)
 @echo .
 @echo .
HK3_TBL.OBJ: HK3_TBL.SRC 
 $(ASM) HK3_TBL,HK3_TBL,ER $(OPT)
 @echo .
 @echo .
HK3.OBJ: HK3.SRC $(MACRO) $(NEO_GEO) $(LABEL) $(HFLAG) $(EM_MAC2) $(CML) $(WORK) 
 $(ASM) HK3,HK3,ER $(OPT)
 @echo .
 @echo .
HK3_SET.OBJ: HK3_SET.SRC $(LABEL) $(HFLAG) $(EM_MAC2) $(WORK) 
 $(ASM) HK3_SET,HK3_SET,ER $(OPT)
 @echo .
 @echo .
STATE_CHK.OBJ: STATE_CHK.SRC $(LABEL) $(HFLAG) $(EM_MAC2) $(WORK) 
 $(ASM) STATE_CHK,STATE_CHK,ER $(OPT)
 @echo .
 @echo .
HK3_INT.OBJ: HK3_INT.SRC $(GAME_SYM) $(LABEL) $(HFLAG) $(EM_MAC2) $(WORK) 
 $(ASM) HK3_INT,HK3_INT,ER $(OPT)
 @echo .
 @echo .
HK3_SUB.OBJ: HK3_SUB.SRC $(LABEL) $(HFLAG) $(EM_MAC2) $(WORK) 
 $(ASM) HK3_SUB,HK3_SUB,ER $(OPT)
 @echo .
 @echo .
COM_OPE.OBJ: COM_OPE.SRC $(NEO_GEO) $(LABEL) $(HFLAG) $(EM_MAC2) $(WORK) 
 $(ASM) COM_OPE,COM_OPE,ER $(OPT)
 @echo .
 @echo .
EM_DATA.OBJ: EM_DATA.SRC $(HFLAG) $(EM_MAC) $(EM_MAC2) 
 $(ASM) EM_DATA,EM_DATA,ER $(OPT)
 @echo .
 @echo .
EM_FRONT.OBJ: EM_FRONT.SRC $(EM_MAC) $(EM_MAC2) $(HFLAG) 
 $(ASM) EM_FRONT,EM_FRONT,ER $(OPT)
 @echo .
 @echo .
EM_BACK.OBJ: EM_BACK.SRC $(EM_MAC) $(EM_MAC2) $(HFLAG) 
 $(ASM) EM_BACK,EM_BACK,ER $(OPT)
 @echo .
 @echo .
DEF_1P.OBJ: DEF_1P.SRC $(EM_MAC) $(HFLAG) 
 $(ASM) DEF_1P,DEF_1P,ER $(OPT)
 @echo .
 @echo .
DEF_2P.OBJ: DEF_2P.SRC $(EM_MAC) $(HFLAG) 
 $(ASM) DEF_2P,DEF_2P,ER $(OPT)
 @echo .
 @echo .
DEF2_1P.OBJ: DEF2_1P.SRC $(EM_MAC) $(HFLAG) 
 $(ASM) DEF2_1P,DEF2_1P,ER $(OPT)
 @echo .
 @echo .
DEF2_2P.OBJ: DEF2_2P.SRC $(EM_MAC) $(HFLAG) 
 $(ASM) DEF2_2P,DEF2_2P,ER $(OPT)
 @echo .
 @echo .
EM_P1.OBJ: EM_P1.SRC $(EM_MAC) $(EM_MAC2) $(HFLAG) 
 $(ASM) EM_P1,EM_P1,ER $(OPT)
 @echo .
 @echo .
EM_P2.OBJ: EM_P2.SRC $(EM_MAC) $(EM_MAC2) $(HFLAG) 
 $(ASM) EM_P2,EM_P2,ER $(OPT)
 @echo .
 @echo .
EM_SP1.OBJ: EM_SP1.SRC $(EM_MAC) $(EM_MAC2) $(HFLAG) 
 $(ASM) EM_SP1,EM_SP1,ER $(OPT)
 @echo .
 @echo .
EM_SP2.OBJ: EM_SP2.SRC $(EM_MAC) $(EM_MAC2) $(HFLAG) 
 $(ASM) EM_SP2,EM_SP2,ER $(OPT)
 @echo .
 @echo .
EM_SP3.OBJ: EM_SP3.SRC $(EM_MAC) $(EM_MAC2) $(HFLAG) 
 $(ASM) EM_SP3,EM_SP3,ER $(OPT)
 @echo .
 @echo .
EM_SP4.OBJ: EM_SP4.SRC $(EM_MAC) $(EM_MAC2) $(HFLAG) 
 $(ASM) EM_SP4,EM_SP4,ER $(OPT)
 @echo .
 @echo .
EM_SP5.OBJ: EM_SP5.SRC $(EM_MAC) $(EM_MAC2) $(HFLAG) 
 $(ASM) EM_SP5,EM_SP5,ER $(OPT)
 @echo .
 @echo .
EM_SCLIM.OBJ: EM_SCLIM.SRC $(EM_MAC) $(EM_MAC2) $(HFLAG) 
 $(ASM) EM_SCLIM,EM_SCLIM,ER $(OPT)
 @echo .
 @echo .
EM_SP6.OBJ: EM_SP6.SRC $(EM_MAC) $(EM_MAC2) $(HFLAG) 
 $(ASM) EM_SP6,EM_SP6,ER $(OPT)
 @echo .
 @echo .
EM_SP7.OBJ: EM_SP7.SRC $(EM_MAC) $(EM_MAC2) $(HFLAG) 
 $(ASM) EM_SP7,EM_SP7,ER $(OPT)
 @echo .
 @echo .
EM_SP8.OBJ: EM_SP8.SRC $(EM_MAC) $(EM_MAC2) $(HFLAG) 
 $(ASM) EM_SP8,EM_SP8,ER $(OPT)
 @echo .
 @echo .
EM_SP9.OBJ: EM_SP9.SRC $(EM_MAC) $(EM_MAC2) $(HFLAG) 
 $(ASM) EM_SP9,EM_SP9,ER $(OPT)
 @echo .
 @echo .
EM_SP10.OBJ: EM_SP10.SRC $(EM_MAC) $(EM_MAC2) $(HFLAG) 
 $(ASM) EM_SP10,EM_SP10,ER $(OPT)
 @echo .
 @echo .
EM_SP11.OBJ: EM_SP11.SRC $(EM_MAC) $(EM_MAC2) $(HFLAG) 
 $(ASM) EM_SP11,EM_SP11,ER $(OPT)
 @echo .
 @echo .
EM_SP1H.OBJ: EM_SP1H.SRC $(EM_MAC) $(EM_MAC2) $(HFLAG) 
 $(ASM) EM_SP1H,EM_SP1H,ER $(OPT)
 @echo .
 @echo .
EM_SP2H.OBJ: EM_SP2H.SRC $(EM_MAC) $(EM_MAC2) $(HFLAG) 
 $(ASM) EM_SP2H,EM_SP2H,ER $(OPT)
 @echo .
 @echo .
EM_SP3H.OBJ: EM_SP3H.SRC $(EM_MAC) $(EM_MAC2) $(HFLAG) 
 $(ASM) EM_SP3H,EM_SP3H,ER $(OPT)
 @echo .
 @echo .
EM_SP4H.OBJ: EM_SP4H.SRC $(EM_MAC) $(EM_MAC2) $(HFLAG) 
 $(ASM) EM_SP4H,EM_SP4H,ER $(OPT)
 @echo .
 @echo .
EM_SP5H.OBJ: EM_SP5H.SRC $(EM_MAC) $(EM_MAC2) $(HFLAG) 
 $(ASM) EM_SP5H,EM_SP5H,ER $(OPT)
 @echo .
 @echo .
EM_SP6H.OBJ: EM_SP6H.SRC $(EM_MAC) $(EM_MAC2) $(HFLAG) 
 $(ASM) EM_SP6H,EM_SP6H,ER $(OPT)
 @echo .
 @echo .
EM_SP7H.OBJ: EM_SP7H.SRC $(EM_MAC) $(EM_MAC2) $(HFLAG) 
 $(ASM) EM_SP7H,EM_SP7H,ER $(OPT)
 @echo .
 @echo .
EM_SP8H.OBJ: EM_SP8H.SRC $(EM_MAC) $(EM_MAC2) $(HFLAG) 
 $(ASM) EM_SP8H,EM_SP8H,ER $(OPT)
 @echo .
 @echo .
EM_SP9H.OBJ: EM_SP9H.SRC $(EM_MAC) $(EM_MAC2) $(HFLAG) 
 $(ASM) EM_SP9H,EM_SP9H,ER $(OPT)
 @echo .
 @echo .
EM_SP10H.OBJ: EM_SP10H.SRC $(EM_MAC) $(EM_MAC2) $(HFLAG) 
 $(ASM) EM_SP10H,EM_SP10H,ER $(OPT)
 @echo .
 @echo .
EM_SP11H.OBJ: EM_SP11H.SRC $(EM_MAC) $(EM_MAC2) $(HFLAG) 
 $(ASM) EM_SP11H,EM_SP11H,ER $(OPT)
 @echo .
 @echo .
EMH_SCLIM.OBJ: EMH_SCLIM.SRC $(EM_MAC) $(EM_MAC2) $(HFLAG) 
 $(ASM) EMH_SCLIM,EMH_SCLIM,ER $(OPT)
 @echo .
 @echo .
EM1_TBL.OBJ: EM1_TBL.SRC $(EM_MAC) $(EM_MAC2) 
 $(ASM) EM1_TBL,EM1_TBL,ER $(OPT)
 @echo .
 @echo .
EM2_TBL.OBJ: EM2_TBL.SRC $(EM_MAC) $(EM_MAC2) 
 $(ASM) EM2_TBL,EM2_TBL,ER $(OPT)
 @echo .
 @echo .
EM3_TBL.OBJ: EM3_TBL.SRC $(EM_MAC) $(EM_MAC2) 
 $(ASM) EM3_TBL,EM3_TBL,ER $(OPT)
 @echo .
 @echo .
EM4_TBL.OBJ: EM4_TBL.SRC $(EM_MAC) $(EM_MAC2) 
 $(ASM) EM4_TBL,EM4_TBL,ER $(OPT)
 @echo .
 @echo .
EM5_TBL.OBJ: EM5_TBL.SRC $(EM_MAC) $(EM_MAC2) 
 $(ASM) EM5_TBL,EM5_TBL,ER $(OPT)
 @echo .
 @echo .
EM6_TBL.OBJ: EM6_TBL.SRC $(EM_MAC) $(EM_MAC2) 
 $(ASM) EM6_TBL,EM6_TBL,ER $(OPT)
 @echo .
 @echo .
EM7_TBL.OBJ: EM7_TBL.SRC $(EM_MAC) $(EM_MAC2) 
 $(ASM) EM7_TBL,EM7_TBL,ER $(OPT)
 @echo .
 @echo .
EM8_TBL.OBJ: EM8_TBL.SRC $(EM_MAC) $(EM_MAC2) 
 $(ASM) EM8_TBL,EM8_TBL,ER $(OPT)
 @echo .
 @echo .
MOTION.OBJ: MOTION.SRC $(EM_MAC) $(EM_MAC2) 
 $(ASM) MOTION,MOTION,ER $(OPT)
 @echo .
 @echo .
EM_PACK.OBJ: EM_PACK.SRC $(EM_MAC) 
 $(ASM) EM_PACK,EM_PACK,ER $(OPT)
 @echo .
 @echo .
NEWS.OBJ: NEWS.SRC $(LABEL) $(WORK) 
 $(ASM) NEWS,NEWS,ER $(OPT)
 @echo .
 @echo .
