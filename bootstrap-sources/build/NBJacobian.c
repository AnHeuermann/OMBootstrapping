#include "omc_simulation_settings.h"
#include "NBJacobian.h"
#define _OMC_LIT0_data "/OpenModelica/OMCompiler/Compiler/NBackEnd/Modules/3_Post/NBJacobian.mo"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT0,71,_OMC_LIT0_data);
#define _OMC_LIT0 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT0)
static const MMC_DEFREALLIT(_OMC_LIT_STRUCT1_6,1.76286855e9);
#define _OMC_LIT1_6 MMC_REFREALLIT(_OMC_LIT_STRUCT1_6)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT1,8,3) {&SourceInfo_SOURCEINFO__desc,_OMC_LIT0,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(967)),MMC_IMMEDIATE(MMC_TAGFIXNUM(41)),MMC_IMMEDIATE(MMC_TAGFIXNUM(968)),MMC_IMMEDIATE(MMC_TAGFIXNUM(13)),_OMC_LIT1_6}};
#define _OMC_LIT1 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT1)
static const MMC_DEFREALLIT(_OMC_LIT_STRUCT2_6,1.76286855e9);
#define _OMC_LIT2_6 MMC_REFREALLIT(_OMC_LIT_STRUCT2_6)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT2,8,3) {&SourceInfo_SOURCEINFO__desc,_OMC_LIT0,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(971)),MMC_IMMEDIATE(MMC_TAGFIXNUM(13)),MMC_IMMEDIATE(MMC_TAGFIXNUM(972)),MMC_IMMEDIATE(MMC_TAGFIXNUM(11)),_OMC_LIT2_6}};
#define _OMC_LIT2 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT2)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT3,1,5) {&ErrorTypes_MessageType_TRANSLATION__desc,}};
#define _OMC_LIT3 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT3)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT4,1,4) {&ErrorTypes_Severity_ERROR__desc,}};
#define _OMC_LIT4 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT4)
#define _OMC_LIT5_data "Internal error %s"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT5,17,_OMC_LIT5_data);
#define _OMC_LIT5 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT5)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT6,2,3) {&Gettext_TranslatableContent_gettext__desc,_OMC_LIT5}};
#define _OMC_LIT6 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT6)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT7,5,3) {&ErrorTypes_Message_MESSAGE__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(63)),_OMC_LIT3,_OMC_LIT4,_OMC_LIT6}};
#define _OMC_LIT7 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT7)
#define _OMC_LIT8_data "NBJacobian.getTmpFilterFunction failed because jacobian type is not known: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT8,75,_OMC_LIT8_data);
#define _OMC_LIT8 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT8)
#define _OMC_LIT9_data "NBJacobian.jacobianSymbolic failed because no strong components were given!"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT9,75,_OMC_LIT9_data);
#define _OMC_LIT9 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT9)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT10,2,1) {_OMC_LIT9,MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT10 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT10)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT11,1,4) {&NFComponentRef_EMPTY__desc,}};
#define _OMC_LIT11 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT11)
#define _OMC_LIT12_data "NBJacobian.jacobianSymbolic"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT12,27,_OMC_LIT12_data);
#define _OMC_LIT12 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT12)
#define _OMC_LIT13_data "_LS_JAC_"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT13,8,_OMC_LIT13_data);
#define _OMC_LIT13 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT13)
#define _OMC_LIT14_data "_NLS_JAC_"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT14,9,_OMC_LIT14_data);
#define _OMC_LIT14 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT14)
#define _OMC_LIT15_data "\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT15,1,_OMC_LIT15_data);
#define _OMC_LIT15 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT15)
#define _OMC_LIT16_data "symjacdump"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT16,10,_OMC_LIT16_data);
#define _OMC_LIT16 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT16)
#define _OMC_LIT17_data "Dumps information about symbolic Jacobians."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT17,43,_OMC_LIT17_data);
#define _OMC_LIT17 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT17)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT18,2,3) {&Gettext_TranslatableContent_gettext__desc,_OMC_LIT17}};
#define _OMC_LIT18 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT18)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT19,5,3) {&Flags_DebugFlag_DEBUG__FLAG__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(45)),_OMC_LIT16,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),_OMC_LIT18}};
#define _OMC_LIT19 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT19)
static const MMC_DEFREALLIT(_OMC_LIT_STRUCT20_6,1.76286855e9);
#define _OMC_LIT20_6 MMC_REFREALLIT(_OMC_LIT_STRUCT20_6)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT20,8,3) {&SourceInfo_SOURCEINFO__desc,_OMC_LIT0,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(647)),MMC_IMMEDIATE(MMC_TAGFIXNUM(13)),MMC_IMMEDIATE(MMC_TAGFIXNUM(647)),MMC_IMMEDIATE(MMC_TAGFIXNUM(89)),_OMC_LIT20_6}};
#define _OMC_LIT20 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT20)
static const MMC_DEFREALLIT(_OMC_LIT_STRUCT21_6,1.76286855e9);
#define _OMC_LIT21_6 MMC_REFREALLIT(_OMC_LIT_STRUCT21_6)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT21,8,3) {&SourceInfo_SOURCEINFO__desc,_OMC_LIT0,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(646)),MMC_IMMEDIATE(MMC_TAGFIXNUM(11)),MMC_IMMEDIATE(MMC_TAGFIXNUM(651)),MMC_IMMEDIATE(MMC_TAGFIXNUM(18)),_OMC_LIT21_6}};
#define _OMC_LIT21 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT21)
static const MMC_DEFREALLIT(_OMC_LIT_STRUCT22_6,1.76286855e9);
#define _OMC_LIT22_6 MMC_REFREALLIT(_OMC_LIT_STRUCT22_6)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT22,8,3) {&SourceInfo_SOURCEINFO__desc,_OMC_LIT0,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(645)),MMC_IMMEDIATE(MMC_TAGFIXNUM(9)),MMC_IMMEDIATE(MMC_TAGFIXNUM(652)),MMC_IMMEDIATE(MMC_TAGFIXNUM(16)),_OMC_LIT22_6}};
#define _OMC_LIT22 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT22)
static const MMC_DEFREALLIT(_OMC_LIT_STRUCT23_6,1.76286855e9);
#define _OMC_LIT23_6 MMC_REFREALLIT(_OMC_LIT_STRUCT23_6)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT23,8,3) {&SourceInfo_SOURCEINFO__desc,_OMC_LIT0,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(659)),MMC_IMMEDIATE(MMC_TAGFIXNUM(9)),MMC_IMMEDIATE(MMC_TAGFIXNUM(659)),MMC_IMMEDIATE(MMC_TAGFIXNUM(120)),_OMC_LIT23_6}};
#define _OMC_LIT23 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT23)
#define _OMC_LIT24_data "NBJacobian.SparsityColoring.PartialD2ColoringAlgC.getIndices failed because cref "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT24,81,_OMC_LIT24_data);
#define _OMC_LIT24 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT24)
#define _OMC_LIT25_data " is neither a seed nor a partial candidate!"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT25,43,_OMC_LIT25_data);
#define _OMC_LIT25 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT25)
static const MMC_DEFREALLIT(_OMC_LIT_STRUCT26_6,1.76286855e9);
#define _OMC_LIT26_6 MMC_REFREALLIT(_OMC_LIT_STRUCT26_6)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT26,8,3) {&SourceInfo_SOURCEINFO__desc,_OMC_LIT0,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(558)),MMC_IMMEDIATE(MMC_TAGFIXNUM(11)),MMC_IMMEDIATE(MMC_TAGFIXNUM(558)),MMC_IMMEDIATE(MMC_TAGFIXNUM(85)),_OMC_LIT26_6}};
#define _OMC_LIT26 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT26)
static const MMC_DEFREALLIT(_OMC_LIT_STRUCT27_6,1.76286855e9);
#define _OMC_LIT27_6 MMC_REFREALLIT(_OMC_LIT_STRUCT27_6)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT27,8,3) {&SourceInfo_SOURCEINFO__desc,_OMC_LIT0,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(556)),MMC_IMMEDIATE(MMC_TAGFIXNUM(11)),MMC_IMMEDIATE(MMC_TAGFIXNUM(556)),MMC_IMMEDIATE(MMC_TAGFIXNUM(78)),_OMC_LIT27_6}};
#define _OMC_LIT27 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT27)
static const MMC_DEFREALLIT(_OMC_LIT_STRUCT28_6,1.76286855e9);
#define _OMC_LIT28_6 MMC_REFREALLIT(_OMC_LIT_STRUCT28_6)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT28,8,3) {&SourceInfo_SOURCEINFO__desc,_OMC_LIT0,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(571)),MMC_IMMEDIATE(MMC_TAGFIXNUM(9)),MMC_IMMEDIATE(MMC_TAGFIXNUM(572)),MMC_IMMEDIATE(MMC_TAGFIXNUM(107)),_OMC_LIT28_6}};
#define _OMC_LIT28 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT28)
static const MMC_DEFREALLIT(_OMC_LIT_STRUCT29_6,1.76286855e9);
#define _OMC_LIT29_6 MMC_REFREALLIT(_OMC_LIT_STRUCT29_6)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT29,8,3) {&SourceInfo_SOURCEINFO__desc,_OMC_LIT0,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(592)),MMC_IMMEDIATE(MMC_TAGFIXNUM(9)),MMC_IMMEDIATE(MMC_TAGFIXNUM(592)),MMC_IMMEDIATE(MMC_TAGFIXNUM(155)),_OMC_LIT29_6}};
#define _OMC_LIT29 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT29)
static const MMC_DEFREALLIT(_OMC_LIT_STRUCT30_6,1.76286855e9);
#define _OMC_LIT30_6 MMC_REFREALLIT(_OMC_LIT_STRUCT30_6)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT30,8,3) {&SourceInfo_SOURCEINFO__desc,_OMC_LIT0,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(596)),MMC_IMMEDIATE(MMC_TAGFIXNUM(9)),MMC_IMMEDIATE(MMC_TAGFIXNUM(596)),MMC_IMMEDIATE(MMC_TAGFIXNUM(159)),_OMC_LIT30_6}};
#define _OMC_LIT30 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT30)
#define _OMC_LIT31_data "Sparsity Coloring"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT31,17,_OMC_LIT31_data);
#define _OMC_LIT31 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT31)
#define _OMC_LIT32_data "\n<empty sparsity pattern>\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT32,26,_OMC_LIT32_data);
#define _OMC_LIT32 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT32)
#define _OMC_LIT33_data "Color ("
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT33,7,_OMC_LIT33_data);
#define _OMC_LIT33 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT33)
#define _OMC_LIT34_data ")\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT34,2,_OMC_LIT34_data);
#define _OMC_LIT34 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT34)
#define _OMC_LIT35_data "  - Column: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT35,12,_OMC_LIT35_data);
#define _OMC_LIT35 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT35)
#define _OMC_LIT36_data "  - Row:    "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT36,12,_OMC_LIT36_data);
#define _OMC_LIT36 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT36)
#define _OMC_LIT37_data "\n\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT37,2,_OMC_LIT37_data);
#define _OMC_LIT37 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT37)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT38,6,3) {&NBJacobian_SparsityPattern_SPARSITY__PATTERN__desc,MMC_REFSTRUCTLIT(mmc_nil),MMC_REFSTRUCTLIT(mmc_nil),MMC_REFSTRUCTLIT(mmc_nil),MMC_REFSTRUCTLIT(mmc_nil),MMC_IMMEDIATE(MMC_TAGFIXNUM(0))}};
#define _OMC_LIT38 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT38)
static const MMC_DEFREALLIT(_OMC_LIT_STRUCT39_6,1.76286855e9);
#define _OMC_LIT39_6 MMC_REFREALLIT(_OMC_LIT_STRUCT39_6)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT39,8,3) {&SourceInfo_SOURCEINFO__desc,_OMC_LIT0,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(443)),MMC_IMMEDIATE(MMC_TAGFIXNUM(19)),MMC_IMMEDIATE(MMC_TAGFIXNUM(443)),MMC_IMMEDIATE(MMC_TAGFIXNUM(99)),_OMC_LIT39_6}};
#define _OMC_LIT39 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT39)
static const MMC_DEFREALLIT(_OMC_LIT_STRUCT40_6,1.76286855e9);
#define _OMC_LIT40_6 MMC_REFREALLIT(_OMC_LIT_STRUCT40_6)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT40,8,3) {&SourceInfo_SOURCEINFO__desc,_OMC_LIT0,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(436)),MMC_IMMEDIATE(MMC_TAGFIXNUM(13)),MMC_IMMEDIATE(MMC_TAGFIXNUM(446)),MMC_IMMEDIATE(MMC_TAGFIXNUM(19)),_OMC_LIT40_6}};
#define _OMC_LIT40 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT40)
static const MMC_DEFREALLIT(_OMC_LIT_STRUCT41_6,1.76286855e9);
#define _OMC_LIT41_6 MMC_REFREALLIT(_OMC_LIT_STRUCT41_6)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT41,8,3) {&SourceInfo_SOURCEINFO__desc,_OMC_LIT0,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(452)),MMC_IMMEDIATE(MMC_TAGFIXNUM(15)),MMC_IMMEDIATE(MMC_TAGFIXNUM(452)),MMC_IMMEDIATE(MMC_TAGFIXNUM(134)),_OMC_LIT41_6}};
#define _OMC_LIT41 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT41)
static const MMC_DEFREALLIT(_OMC_LIT_STRUCT42_6,1.76286855e9);
#define _OMC_LIT42_6 MMC_REFREALLIT(_OMC_LIT_STRUCT42_6)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT42,8,3) {&SourceInfo_SOURCEINFO__desc,_OMC_LIT0,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),MMC_IMMEDIATE(MMC_TAGFIXNUM(451)),MMC_IMMEDIATE(MMC_TAGFIXNUM(13)),MMC_IMMEDIATE(MMC_TAGFIXNUM(455)),MMC_IMMEDIATE(MMC_TAGFIXNUM(19)),_OMC_LIT42_6}};
#define _OMC_LIT42 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT42)
#define _OMC_LIT43_data "NBJacobian.SparsityPattern.create failed because of missing strong components."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT43,78,_OMC_LIT43_data);
#define _OMC_LIT43 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT43)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT44,2,1) {_OMC_LIT43,MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT44 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT44)
#define _OMC_LIT45_data "NBJacobian.SparsityPattern.create failed."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT45,41,_OMC_LIT45_data);
#define _OMC_LIT45 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT45)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT46,2,1) {_OMC_LIT45,MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT46 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT46)
#define _OMC_LIT47_data "dumpSparsePattern"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT47,17,_OMC_LIT47_data);
#define _OMC_LIT47 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT47)
#define _OMC_LIT48_data "Dumps sparse pattern with coloring used for simulation."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT48,55,_OMC_LIT48_data);
#define _OMC_LIT48 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT48)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT49,2,3) {&Gettext_TranslatableContent_gettext__desc,_OMC_LIT48}};
#define _OMC_LIT49 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT49)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT50,5,3) {&Flags_DebugFlag_DEBUG__FLAG__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(49)),_OMC_LIT47,MMC_IMMEDIATE(MMC_TAGFIXNUM(0 /* false */)),_OMC_LIT49}};
#define _OMC_LIT50 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT50)
#define _OMC_LIT51_data "Sparsity Pattern (nnz: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT51,23,_OMC_LIT51_data);
#define _OMC_LIT51 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT51)
#define _OMC_LIT52_data ")"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT52,1,_OMC_LIT52_data);
#define _OMC_LIT52 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT52)
#define _OMC_LIT53_data "### Seeds (col vars) ###"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT53,24,_OMC_LIT53_data);
#define _OMC_LIT53 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT53)
#define _OMC_LIT54_data ""
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT54,0,_OMC_LIT54_data);
#define _OMC_LIT54 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT54)
#define _OMC_LIT55_data "{"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT55,1,_OMC_LIT55_data);
#define _OMC_LIT55 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT55)
#define _OMC_LIT56_data ", "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT56,2,_OMC_LIT56_data);
#define _OMC_LIT56 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT56)
#define _OMC_LIT57_data "}"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT57,1,_OMC_LIT57_data);
#define _OMC_LIT57 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT57)
#define _OMC_LIT58_data "### Partials (row vars) ###"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT58,27,_OMC_LIT58_data);
#define _OMC_LIT58 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT58)
#define _OMC_LIT59_data "### Columns ###"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT59,15,_OMC_LIT59_data);
#define _OMC_LIT59 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT59)
#define _OMC_LIT60_data "("
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT60,1,_OMC_LIT60_data);
#define _OMC_LIT60 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT60)
#define _OMC_LIT61_data ")	 affects:	"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT61,12,_OMC_LIT61_data);
#define _OMC_LIT61 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT61)
#define _OMC_LIT62_data "##### Rows #####"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT62,16,_OMC_LIT62_data);
#define _OMC_LIT62 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT62)
#define _OMC_LIT63_data ")	 depends on:	"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT63,15,_OMC_LIT63_data);
#define _OMC_LIT63 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT63)
#define _OMC_LIT64_data "[ODE]"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT64,5,_OMC_LIT64_data);
#define _OMC_LIT64 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT64)
#define _OMC_LIT65_data "[DAE]"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT65,5,_OMC_LIT65_data);
#define _OMC_LIT65 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT65)
#define _OMC_LIT66_data "[LS-]"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT66,5,_OMC_LIT66_data);
#define _OMC_LIT66 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT66)
#define _OMC_LIT67_data "[NLS]"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT67,5,_OMC_LIT67_data);
#define _OMC_LIT67 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT67)
#define _OMC_LIT68_data "[ERR]"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT68,5,_OMC_LIT68_data);
#define _OMC_LIT68 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT68)
#define _OMC_LIT69_data "generateDynamicJacobian"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT69,23,_OMC_LIT69_data);
#define _OMC_LIT69 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT69)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT70,1,4) {&Flags_FlagVisibility_EXTERNAL__desc,}};
#define _OMC_LIT70 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT70)
#define _OMC_LIT71_data "numeric"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT71,7,_OMC_LIT71_data);
#define _OMC_LIT71 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT71)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT72,2,8) {&Flags_FlagData_STRING__FLAG__desc,_OMC_LIT71}};
#define _OMC_LIT72 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT72)
#define _OMC_LIT73_data "none"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT73,4,_OMC_LIT73_data);
#define _OMC_LIT73 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT73)
#define _OMC_LIT74_data "Does not generate Jacobian. For use with explicit solvers."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT74,58,_OMC_LIT74_data);
#define _OMC_LIT74 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT74)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT75,2,3) {&Gettext_TranslatableContent_gettext__desc,_OMC_LIT74}};
#define _OMC_LIT75 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT75)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT76,2,0) {_OMC_LIT73,_OMC_LIT75}};
#define _OMC_LIT76 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT76)
#define _OMC_LIT77_data "Generates sparsity pattern for numeric Jacobian."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT77,48,_OMC_LIT77_data);
#define _OMC_LIT77 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT77)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT78,2,3) {&Gettext_TranslatableContent_gettext__desc,_OMC_LIT77}};
#define _OMC_LIT78 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT78)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT79,2,0) {_OMC_LIT71,_OMC_LIT78}};
#define _OMC_LIT79 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT79)
#define _OMC_LIT80_data "symbolic"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT80,8,_OMC_LIT80_data);
#define _OMC_LIT80 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT80)
#define _OMC_LIT81_data "Generates symbolic Jacobian. Used by dassl or ida solver with simulation flag '-jacobian'."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT81,90,_OMC_LIT81_data);
#define _OMC_LIT81 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT81)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT82,2,3) {&Gettext_TranslatableContent_gettext__desc,_OMC_LIT81}};
#define _OMC_LIT82 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT82)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT83,2,0) {_OMC_LIT80,_OMC_LIT82}};
#define _OMC_LIT83 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT83)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT84,2,1) {_OMC_LIT83,MMC_REFSTRUCTLIT(mmc_nil)}};
#define _OMC_LIT84 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT84)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT85,2,1) {_OMC_LIT79,_OMC_LIT84}};
#define _OMC_LIT85 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT85)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT86,2,1) {_OMC_LIT76,_OMC_LIT85}};
#define _OMC_LIT86 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT86)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT87,2,4) {&Flags_ValidOptions_STRING__DESC__OPTION__desc,_OMC_LIT86}};
#define _OMC_LIT87 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT87)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT88,1,1) {_OMC_LIT87}};
#define _OMC_LIT88 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT88)
#define _OMC_LIT89_data "Select how Jacobian matrix is generated, where der(x) is differentiated w.r.t. x."
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT89,81,_OMC_LIT89_data);
#define _OMC_LIT89 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT89)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT90,2,3) {&Gettext_TranslatableContent_gettext__desc,_OMC_LIT89}};
#define _OMC_LIT90 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT90)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT91,8,3) {&Flags_ConfigFlag_CONFIG__FLAG__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(51)),_OMC_LIT69,MMC_REFSTRUCTLIT(mmc_none),_OMC_LIT70,_OMC_LIT72,_OMC_LIT88,_OMC_LIT90}};
#define _OMC_LIT91 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT91)
#define _OMC_LIT92_data "NBJacobian.combine failed for\n"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT92,30,_OMC_LIT92_data);
#define _OMC_LIT92 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT92)
#define _OMC_LIT93_data "NLSanalyticJacobian"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT93,19,_OMC_LIT93_data);
#define _OMC_LIT93 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT93)
#define _OMC_LIT94_data "Enables analytical jacobian for non-linear strong components without user-defined function calls, for that see forceNLSanalyticJacobian"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT94,135,_OMC_LIT94_data);
#define _OMC_LIT94 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT94)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT95,2,3) {&Gettext_TranslatableContent_gettext__desc,_OMC_LIT94}};
#define _OMC_LIT95 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT95)
static const MMC_DEFSTRUCTLIT(_OMC_LIT_STRUCT96,5,3) {&Flags_DebugFlag_DEBUG__FLAG__desc,MMC_IMMEDIATE(MMC_TAGFIXNUM(83)),_OMC_LIT93,MMC_IMMEDIATE(MMC_TAGFIXNUM(1 /* true */)),_OMC_LIT95}};
#define _OMC_LIT96 MMC_REFSTRUCTLIT(_OMC_LIT_STRUCT96)
#define _OMC_LIT97_data "ODE_JAC"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT97,7,_OMC_LIT97_data);
#define _OMC_LIT97 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT97)
#define _OMC_LIT98_data "DAE_JAC"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT98,7,_OMC_LIT98_data);
#define _OMC_LIT98 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT98)
#define _OMC_LIT99_data "NBJacobian.main failed for: "
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT99,28,_OMC_LIT99_data);
#define _OMC_LIT99 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT99)
#define _OMC_LIT100_data "[symjacdump] Creating symbolic Jacobians:"
static const MMC_DEFSTRINGLIT(_OMC_LIT_STRUCT100,41,_OMC_LIT100_data);
#define _OMC_LIT100 MMC_REFSTRINGLIT(_OMC_LIT_STRUCT100)
#include "util/modelica.h"

#include "NBJacobian_includes.h"


/* default, do not make protected functions static */
#if !defined(PROTECTED_FUNCTION_STATIC)
#define PROTECTED_FUNCTION_STATIC
#endif
PROTECTED_FUNCTION_STATIC void omc_NBJacobian_makeVarTraverse(threadData_t *threadData, modelica_metatype _var_ptr, modelica_string _name, modelica_metatype _vars_ptr, modelica_metatype _map, modelica_fnptr _makeVar, modelica_boolean _init);
PROTECTED_FUNCTION_STATIC void boxptr_NBJacobian_makeVarTraverse(threadData_t *threadData, modelica_metatype _var_ptr, modelica_metatype _name, modelica_metatype _vars_ptr, modelica_metatype _map, modelica_fnptr _makeVar, modelica_metatype _init);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NBJacobian_makeVarTraverse,2,0) {(void*) boxptr_NBJacobian_makeVarTraverse,0}};
#define boxvar_NBJacobian_makeVarTraverse MMC_REFSTRUCTLIT(boxvar_lit_NBJacobian_makeVarTraverse)
PROTECTED_FUNCTION_STATIC modelica_fnptr omc_NBJacobian_getTmpFilterFunction(threadData_t *threadData, modelica_integer _jacType);
PROTECTED_FUNCTION_STATIC modelica_fnptr boxptr_NBJacobian_getTmpFilterFunction(threadData_t *threadData, modelica_metatype _jacType);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NBJacobian_getTmpFilterFunction,2,0) {(void*) boxptr_NBJacobian_getTmpFilterFunction,0}};
#define boxvar_NBJacobian_getTmpFilterFunction MMC_REFSTRUCTLIT(boxvar_lit_NBJacobian_getTmpFilterFunction)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NBJacobian_jacobianNone(threadData_t *threadData, modelica_string _name, modelica_integer _jacType, modelica_metatype _seedCandidates, modelica_metatype _partialCandidates, modelica_metatype _equations, modelica_metatype _knowns, modelica_metatype _strongComponents, modelica_metatype __omcQ_24in_5FfuncTree, modelica_boolean _init, modelica_metatype *out_funcTree);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NBJacobian_jacobianNone(threadData_t *threadData, modelica_metatype _name, modelica_metatype _jacType, modelica_metatype _seedCandidates, modelica_metatype _partialCandidates, modelica_metatype _equations, modelica_metatype _knowns, modelica_metatype _strongComponents, modelica_metatype __omcQ_24in_5FfuncTree, modelica_metatype _init, modelica_metatype *out_funcTree);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NBJacobian_jacobianNone,2,0) {(void*) boxptr_NBJacobian_jacobianNone,0}};
#define boxvar_NBJacobian_jacobianNone MMC_REFSTRUCTLIT(boxvar_lit_NBJacobian_jacobianNone)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NBJacobian_jacobianNumeric(threadData_t *threadData, modelica_string _name, modelica_integer _jacType, modelica_metatype _seedCandidates, modelica_metatype _partialCandidates, modelica_metatype _equations, modelica_metatype _knowns, modelica_metatype _strongComponents, modelica_metatype __omcQ_24in_5FfuncTree, modelica_boolean _init, modelica_metatype *out_funcTree);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NBJacobian_jacobianNumeric(threadData_t *threadData, modelica_metatype _name, modelica_metatype _jacType, modelica_metatype _seedCandidates, modelica_metatype _partialCandidates, modelica_metatype _equations, modelica_metatype _knowns, modelica_metatype _strongComponents, modelica_metatype __omcQ_24in_5FfuncTree, modelica_metatype _init, modelica_metatype *out_funcTree);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NBJacobian_jacobianNumeric,2,0) {(void*) boxptr_NBJacobian_jacobianNumeric,0}};
#define boxvar_NBJacobian_jacobianNumeric MMC_REFSTRUCTLIT(boxvar_lit_NBJacobian_jacobianNumeric)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NBJacobian_jacobianSymbolic(threadData_t *threadData, modelica_string _name, modelica_integer _jacType, modelica_metatype _seedCandidates, modelica_metatype _partialCandidates, modelica_metatype _equations, modelica_metatype _knowns, modelica_metatype _strongComponents, modelica_metatype __omcQ_24in_5FfuncTree, modelica_boolean _init, modelica_metatype *out_funcTree);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NBJacobian_jacobianSymbolic(threadData_t *threadData, modelica_metatype _name, modelica_metatype _jacType, modelica_metatype _seedCandidates, modelica_metatype _partialCandidates, modelica_metatype _equations, modelica_metatype _knowns, modelica_metatype _strongComponents, modelica_metatype __omcQ_24in_5FfuncTree, modelica_metatype _init, modelica_metatype *out_funcTree);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NBJacobian_jacobianSymbolic,2,0) {(void*) boxptr_NBJacobian_jacobianSymbolic,0}};
#define boxvar_NBJacobian_jacobianSymbolic MMC_REFSTRUCTLIT(boxvar_lit_NBJacobian_jacobianSymbolic)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NBJacobian_compJacobian(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fcomp, modelica_metatype __omcQ_24in_5FfuncTree, modelica_integer _kind, modelica_metatype *out_funcTree, modelica_boolean *out_updated);
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NBJacobian_compJacobian(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fcomp, modelica_metatype __omcQ_24in_5FfuncTree, modelica_metatype _kind, modelica_metatype *out_funcTree, modelica_metatype *out_updated);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NBJacobian_compJacobian,2,0) {(void*) boxptr_NBJacobian_compJacobian,0}};
#define boxvar_NBJacobian_compJacobian MMC_REFSTRUCTLIT(boxvar_lit_NBJacobian_compJacobian)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NBJacobian_partJacobian(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fpart, modelica_metatype __omcQ_24in_5FfuncTree, modelica_metatype _knowns, modelica_string _name, modelica_fnptr _func, modelica_metatype *out_funcTree);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NBJacobian_partJacobian,2,0) {(void*) boxptr_NBJacobian_partJacobian,0}};
#define boxvar_NBJacobian_partJacobian MMC_REFSTRUCTLIT(boxvar_lit_NBJacobian_partJacobian)
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NBJacobian_SparsityColoring_PartialD2ColoringAlgC_getIndices(threadData_t *threadData, modelica_metatype _cref, modelica_metatype _seed_indices, modelica_metatype _partial_indices, modelica_metatype _rows);
static const MMC_DEFSTRUCTLIT(boxvar_lit_NBJacobian_SparsityColoring_PartialD2ColoringAlgC_getIndices,2,0) {(void*) boxptr_NBJacobian_SparsityColoring_PartialD2ColoringAlgC_getIndices,0}};
#define boxvar_NBJacobian_SparsityColoring_PartialD2ColoringAlgC_getIndices MMC_REFSTRUCTLIT(boxvar_lit_NBJacobian_SparsityColoring_PartialD2ColoringAlgC_getIndices)

PROTECTED_FUNCTION_STATIC void omc_NBJacobian_makeVarTraverse(threadData_t *threadData, modelica_metatype _var_ptr, modelica_string _name, modelica_metatype _vars_ptr, modelica_metatype _map, modelica_fnptr _makeVar, modelica_boolean _init)
{
  modelica_metatype _var = NULL;
  modelica_metatype _diff = NULL;
  modelica_metatype _parent_name = NULL;
  modelica_metatype _diff_parent_name = NULL;
  modelica_metatype _diff_ptr = NULL;
  modelica_metatype _parent = NULL;
  modelica_metatype _diff_parent = NULL;
  modelica_metatype tmpMeta1;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _var = omc_Pointer_access(threadData, _var_ptr);
  // _diff has no default value.
  // _parent_name has no default value.
  // _diff_parent_name has no default value.
  // _diff_ptr has no default value.
  // _parent has no default value.
  // _diff_parent has no default value.
  if(omc_NBVariable_isContinuous(threadData, _var_ptr, _init))
  {
    _diff = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_makeVar), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_string, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_makeVar), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_makeVar), 2))), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_var), 2))), _name ,&_diff_ptr) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_string, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_makeVar), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_var), 2))), _name ,&_diff_ptr);

    tmpMeta1 = mmc_mk_cons(_diff_ptr, omc_Pointer_access(threadData, _vars_ptr));
    omc_Pointer_update(threadData, _vars_ptr, tmpMeta1);

    omc_UnorderedMap_add(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_var), 2))), _diff, _map);

    { /* match expression */
      modelica_metatype tmp4_1;
      tmp4_1 = omc_NBVariable_getParent(threadData, _var_ptr);
      {
        volatile mmc_switch_type tmp4;
        int tmp5;
        tmp4 = 0;
        for (; tmp4 < 2; tmp4++) {
          switch (MMC_SWITCH_CAST(tmp4)) {
          case 0: {
            modelica_metatype tmpMeta6;
            modelica_metatype tmpMeta7;
            if (optionNone(tmp4_1)) goto tmp3_end;
            tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 1));
            _parent = tmpMeta6;
            /* Pattern matching succeeded */
            _parent_name = omc_NBVariable_getVarName(threadData, _parent);

            { /* match expression */
              modelica_metatype tmp10_1;
              tmp10_1 = omc_UnorderedMap_get(threadData, _parent_name, _map);
              {
                volatile mmc_switch_type tmp10;
                int tmp11;
                tmp10 = 0;
                for (; tmp10 < 2; tmp10++) {
                  switch (MMC_SWITCH_CAST(tmp10)) {
                  case 0: {
                    modelica_metatype tmpMeta12;
                    if (optionNone(tmp10_1)) goto tmp9_end;
                    tmpMeta12 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp10_1), 1));
                    _diff_parent_name = tmpMeta12;
                    /* Pattern matching succeeded */
                    tmpMeta7 = omc_NBVariable_getVarPointer(threadData, _diff_parent_name, _OMC_LIT1);
                    goto tmp9_done;
                  }
                  case 1: {
                    
                    /* Pattern matching succeeded */
                    _diff_parent_name = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_makeVar), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_metatype, modelica_string, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_makeVar), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_makeVar), 2))), _parent_name, _name, NULL) : ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_string, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_makeVar), 1)))) (threadData, _parent_name, _name, NULL);

                    omc_UnorderedMap_add(threadData, _parent_name, _diff_parent_name, _map);
                    tmpMeta7 = omc_NBVariable_getVarPointer(threadData, _diff_parent_name, _OMC_LIT2);
                    goto tmp9_done;
                  }
                  }
                  goto tmp9_end;
                  tmp9_end: ;
                }
                goto goto_8;
                goto_8:;
                goto goto_2;
                goto tmp9_done;
                tmp9_done:;
              }
            }
            _diff_parent = tmpMeta7;

            omc_NBVariable_addRecordChild(threadData, _diff_parent, _diff_ptr);

            _diff_ptr = omc_NBVariable_setParent(threadData, _diff_ptr, _diff_parent);
            goto tmp3_done;
          }
          case 1: {
            
            /* Pattern matching succeeded */
            goto tmp3_done;
          }
          }
          goto tmp3_end;
          tmp3_end: ;
        }
        goto goto_2;
        goto_2:;
        MMC_THROW_INTERNAL();
        goto tmp3_done;
        tmp3_done:;
      }
    }
    ;
  }
  _return: OMC_LABEL_UNUSED
  return;
}
PROTECTED_FUNCTION_STATIC void boxptr_NBJacobian_makeVarTraverse(threadData_t *threadData, modelica_metatype _var_ptr, modelica_metatype _name, modelica_metatype _vars_ptr, modelica_metatype _map, modelica_fnptr _makeVar, modelica_metatype _init)
{
  modelica_integer tmp1;
  tmp1 = mmc_unbox_integer(_init);
  omc_NBJacobian_makeVarTraverse(threadData, _var_ptr, _name, _vars_ptr, _map, _makeVar, tmp1);
  return;
}

PROTECTED_FUNCTION_STATIC modelica_fnptr omc_NBJacobian_getTmpFilterFunction(threadData_t *threadData, modelica_integer _jacType)
{
  modelica_fnptr _func;
  modelica_fnptr tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  { /* match expression */
    modelica_integer tmp4_1;
    tmp4_1 = (modelica_integer)_jacType;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 5; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (1 != tmp4_1) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = boxvar_NBVariable_isStateDerivative;
          goto tmp3_done;
        }
        case 1: {
          if (2 != tmp4_1) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = boxvar_NBVariable_isResidual;
          goto tmp3_done;
        }
        case 2: {
          if (3 != tmp4_1) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = boxvar_NBVariable_isResidual;
          goto tmp3_done;
        }
        case 3: {
          if (4 != tmp4_1) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = boxvar_NBVariable_isResidual;
          goto tmp3_done;
        }
        case 4: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          
          /* Pattern matching succeeded */
          tmpMeta7 = stringAppend(_OMC_LIT8,omc_NBJacobian_jacobianTypeString(threadData, (modelica_integer)_jacType));
          tmpMeta6 = mmc_mk_cons(tmpMeta7, MMC_REFSTRUCTLIT(mmc_nil));
          omc_Error_addMessage(threadData, _OMC_LIT7, tmpMeta6);
          goto goto_2;
          goto tmp3_done;
        }
        }
        goto tmp3_end;
        tmp3_end: ;
      }
      goto goto_2;
      goto_2:;
      MMC_THROW_INTERNAL();
      goto tmp3_done;
      tmp3_done:;
    }
  }
  _func = (modelica_fnptr) tmp1;
  _return: OMC_LABEL_UNUSED
  return _func;
}
PROTECTED_FUNCTION_STATIC modelica_fnptr boxptr_NBJacobian_getTmpFilterFunction(threadData_t *threadData, modelica_metatype _jacType)
{
  modelica_integer tmp1;
  modelica_fnptr _func;
  tmp1 = mmc_unbox_integer(_jacType);
  _func = omc_NBJacobian_getTmpFilterFunction(threadData, tmp1);
  return _func;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_NBJacobian_jacobianNone(threadData_t *threadData, modelica_string _name, modelica_integer _jacType, modelica_metatype _seedCandidates, modelica_metatype _partialCandidates, modelica_metatype _equations, modelica_metatype _knowns, modelica_metatype _strongComponents, modelica_metatype __omcQ_24in_5FfuncTree, modelica_boolean _init, modelica_metatype *out_funcTree)
{
  modelica_metatype _jacobian = NULL;
  modelica_metatype _funcTree = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _jacobian has no default value.
  _funcTree = __omcQ_24in_5FfuncTree;
  _jacobian = mmc_mk_none();
  _return: OMC_LABEL_UNUSED
  if (out_funcTree) { *out_funcTree = _funcTree; }
  return _jacobian;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NBJacobian_jacobianNone(threadData_t *threadData, modelica_metatype _name, modelica_metatype _jacType, modelica_metatype _seedCandidates, modelica_metatype _partialCandidates, modelica_metatype _equations, modelica_metatype _knowns, modelica_metatype _strongComponents, modelica_metatype __omcQ_24in_5FfuncTree, modelica_metatype _init, modelica_metatype *out_funcTree)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_metatype _jacobian = NULL;
  tmp1 = mmc_unbox_integer(_jacType);
  tmp2 = mmc_unbox_integer(_init);
  _jacobian = omc_NBJacobian_jacobianNone(threadData, _name, tmp1, _seedCandidates, _partialCandidates, _equations, _knowns, _strongComponents, __omcQ_24in_5FfuncTree, tmp2, out_funcTree);
  /* skip box _jacobian; Option<NBackendDAE> */
  /* skip box _funcTree; NFFlatten.FunctionTreeImpl.Tree */
  return _jacobian;
}

static modelica_metatype closure0_NBVariable_isContinuous(threadData_t *thData, modelica_metatype closure, modelica_metatype var_ptr)
{
  modelica_metatype init = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  return boxptr_NBVariable_isContinuous(thData, var_ptr, init);
}
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NBJacobian_jacobianNumeric(threadData_t *threadData, modelica_string _name, modelica_integer _jacType, modelica_metatype _seedCandidates, modelica_metatype _partialCandidates, modelica_metatype _equations, modelica_metatype _knowns, modelica_metatype _strongComponents, modelica_metatype __omcQ_24in_5FfuncTree, modelica_boolean _init, modelica_metatype *out_funcTree)
{
  modelica_metatype _jacobian = NULL;
  modelica_metatype _funcTree = NULL;
  modelica_metatype _varDataJac = NULL;
  modelica_metatype _sparsityPattern = NULL;
  modelica_metatype _sparsityColoring = NULL;
  modelica_metatype _res_vars = NULL;
  modelica_metatype _tmp_vars = NULL;
  modelica_fnptr _func;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  modelica_metatype tmpMeta7;
  modelica_metatype tmpMeta8;
  modelica_metatype tmpMeta9;
  modelica_metatype tmpMeta10;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _jacobian has no default value.
  _funcTree = __omcQ_24in_5FfuncTree;
  // _varDataJac has no default value.
  // _sparsityPattern has no default value.
  // _sparsityColoring has no default value.
  // _res_vars has no default value.
  // _tmp_vars has no default value.
  _func = omc_NBJacobian_getTmpFilterFunction(threadData, (modelica_integer)_jacType);
  _res_vars = omc_List_splitOnTrue(threadData, omc_NBVariable_VariablePointers_toList(threadData, _partialCandidates), ((modelica_fnptr) _func) ,&_tmp_vars);

  tmpMeta1 = mmc_mk_box1(0, mmc_mk_boolean(_init));
  _tmp_vars = omc_List_splitOnTrue(threadData, _tmp_vars, (modelica_fnptr) mmc_mk_box2(0,closure0_NBVariable_isContinuous,tmpMeta1), NULL);

  tmpMeta2 = MMC_REFSTRUCTLIT(mmc_nil);
  tmpMeta3 = MMC_REFSTRUCTLIT(mmc_nil);
  tmpMeta4 = MMC_REFSTRUCTLIT(mmc_nil);
  tmpMeta5 = MMC_REFSTRUCTLIT(mmc_nil);
  tmpMeta6 = MMC_REFSTRUCTLIT(mmc_nil);
  tmpMeta7 = MMC_REFSTRUCTLIT(mmc_nil);
  tmpMeta8 = mmc_mk_box11(4, &NBVariable_VarData_VAR__DATA__JAC__desc, omc_NBVariable_VariablePointers_fromList(threadData, tmpMeta2, 0 /* false */), _partialCandidates, omc_NBVariable_VariablePointers_fromList(threadData, tmpMeta3, 0 /* false */), omc_NBVariable_VariablePointers_fromList(threadData, tmpMeta4, 0 /* false */), omc_NBVariable_VariablePointers_fromList(threadData, tmpMeta5, 0 /* false */), omc_NBVariable_VariablePointers_fromList(threadData, tmpMeta6, 0 /* false */), omc_NBVariable_VariablePointers_fromList(threadData, tmpMeta7, 0 /* false */), omc_NBVariable_VariablePointers_fromList(threadData, _res_vars, 0 /* false */), omc_NBVariable_VariablePointers_fromList(threadData, _tmp_vars, 0 /* false */), _seedCandidates);
  _varDataJac = tmpMeta8;

  _sparsityPattern = omc_NBJacobian_SparsityPattern_create(threadData, _seedCandidates, _partialCandidates, _strongComponents, (modelica_integer)_jacType ,&_sparsityColoring);

  tmpMeta9 = MMC_REFSTRUCTLIT(mmc_nil);
  tmpMeta10 = mmc_mk_box7(4, &NBackendDAE_JACOBIAN__desc, _name, mmc_mk_integer((modelica_integer)_jacType), _varDataJac, listArray(tmpMeta9), _sparsityPattern, _sparsityColoring);
  _jacobian = mmc_mk_some(tmpMeta10);
  _return: OMC_LABEL_UNUSED
  if (out_funcTree) { *out_funcTree = _funcTree; }
  return _jacobian;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NBJacobian_jacobianNumeric(threadData_t *threadData, modelica_metatype _name, modelica_metatype _jacType, modelica_metatype _seedCandidates, modelica_metatype _partialCandidates, modelica_metatype _equations, modelica_metatype _knowns, modelica_metatype _strongComponents, modelica_metatype __omcQ_24in_5FfuncTree, modelica_metatype _init, modelica_metatype *out_funcTree)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_metatype _jacobian = NULL;
  tmp1 = mmc_unbox_integer(_jacType);
  tmp2 = mmc_unbox_integer(_init);
  _jacobian = omc_NBJacobian_jacobianNumeric(threadData, _name, tmp1, _seedCandidates, _partialCandidates, _equations, _knowns, _strongComponents, __omcQ_24in_5FfuncTree, tmp2, out_funcTree);
  /* skip box _jacobian; Option<NBackendDAE> */
  /* skip box _funcTree; NFFlatten.FunctionTreeImpl.Tree */
  return _jacobian;
}

static void closure1_NBJacobian_makeVarTraverse(threadData_t *thData, modelica_metatype closure, modelica_metatype var_ptr)
{
  modelica_string name = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  modelica_metatype vars_ptr = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),2));
  modelica_metatype map = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),3));
  modelica_fnptr makeVar = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),4));
  modelica_metatype init = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),5));
  boxptr_NBJacobian_makeVarTraverse(thData, var_ptr, name, vars_ptr, map, makeVar, init);
}static modelica_metatype closure2_NBVariable_isContinuous(threadData_t *thData, modelica_metatype closure, modelica_metatype var_ptr)
{
  modelica_metatype init = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  return boxptr_NBVariable_isContinuous(thData, var_ptr, init);
}static modelica_metatype closure3_NBVariable_makePDerVar(threadData_t *thData, modelica_metatype closure, modelica_metatype $in_cref, modelica_string name, modelica_metatype tmp11)
{
  modelica_metatype isTmp = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  return boxptr_NBVariable_makePDerVar(thData, $in_cref, name, isTmp, tmp11);
}static modelica_metatype closure4_NBVariable_makePDerVar(threadData_t *thData, modelica_metatype closure, modelica_metatype $in_cref, modelica_string name, modelica_metatype tmp16)
{
  modelica_metatype isTmp = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(closure),1));
  return boxptr_NBVariable_makePDerVar(thData, $in_cref, name, isTmp, tmp16);
}
PROTECTED_FUNCTION_STATIC modelica_metatype omc_NBJacobian_jacobianSymbolic(threadData_t *threadData, modelica_string _name, modelica_integer _jacType, modelica_metatype _seedCandidates, modelica_metatype _partialCandidates, modelica_metatype _equations, modelica_metatype _knowns, modelica_metatype _strongComponents, modelica_metatype __omcQ_24in_5FfuncTree, modelica_boolean _init, modelica_metatype *out_funcTree)
{
  modelica_metatype _jacobian = NULL;
  modelica_metatype _funcTree = NULL;
  modelica_metatype _comps = NULL;
  modelica_metatype _diffed_comps = NULL;
  modelica_metatype _seed_vars_ptr = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype _pDer_vars_ptr = NULL;
  modelica_metatype tmpMeta2;
  modelica_metatype _diff_map = NULL;
  modelica_metatype _diffArguments = NULL;
  modelica_metatype _idx = NULL;
  modelica_metatype _all_vars = NULL;
  modelica_metatype _unknown_vars = NULL;
  modelica_metatype _aux_vars = NULL;
  modelica_metatype _alias_vars = NULL;
  modelica_metatype _depend_vars = NULL;
  modelica_metatype _res_vars = NULL;
  modelica_metatype _tmp_vars = NULL;
  modelica_metatype _seed_vars = NULL;
  modelica_metatype _varDataJac = NULL;
  modelica_metatype _sparsityPattern = NULL;
  modelica_metatype _sparsityColoring = NULL;
  modelica_fnptr _func;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta8;
  modelica_metatype tmpMeta9;
  modelica_metatype tmpMeta10;
  modelica_metatype tmpMeta12;
  modelica_metatype tmpMeta13;
  modelica_metatype tmpMeta14;
  modelica_metatype tmpMeta15;
  modelica_metatype tmpMeta17;
  modelica_metatype tmpMeta18;
  modelica_metatype tmpMeta19;
  modelica_metatype tmpMeta20;
  modelica_metatype tmpMeta21;
  modelica_metatype tmpMeta22;
  modelica_metatype tmpMeta23;
  modelica_metatype tmpMeta24;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _jacobian has no default value.
  _funcTree = __omcQ_24in_5FfuncTree;
  // _comps has no default value.
  // _diffed_comps has no default value.
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _seed_vars_ptr = omc_Pointer_create(threadData, tmpMeta1);
  tmpMeta2 = MMC_REFSTRUCTLIT(mmc_nil);
  _pDer_vars_ptr = omc_Pointer_create(threadData, tmpMeta2);
  _diff_map = omc_UnorderedMap_new(threadData, boxvar_NFComponentRef_hash, boxvar_NFComponentRef_isEqual, ((modelica_integer) 1));
  // _diffArguments has no default value.
  _idx = omc_Pointer_create(threadData, mmc_mk_integer(((modelica_integer) 0)));
  // _all_vars has no default value.
  // _unknown_vars has no default value.
  // _aux_vars has no default value.
  // _alias_vars has no default value.
  // _depend_vars has no default value.
  // _res_vars has no default value.
  // _tmp_vars has no default value.
  // _seed_vars has no default value.
  // _varDataJac has no default value.
  // _sparsityPattern has no default value.
  // _sparsityColoring has no default value.
  _func = omc_NBJacobian_getTmpFilterFunction(threadData, (modelica_integer)_jacType);
  if(isSome(_strongComponents))
  {
    {
      modelica_metatype __omcQ_24tmpVar3;
      modelica_metatype* tmp4;
      modelica_metatype tmpMeta5;
      modelica_metatype __omcQ_24tmpVar2;
      modelica_integer tmp6;
      modelica_metatype _comp_loopVar = 0;
      modelica_integer tmp7;
      modelica_metatype _comp;
      _comp_loopVar = omc_Util_getOption(threadData, _strongComponents);
      tmp7 = 1;
      tmpMeta5 = MMC_REFSTRUCTLIT(mmc_nil);
      __omcQ_24tmpVar3 = tmpMeta5; /* defaultValue */
      tmp4 = &__omcQ_24tmpVar3;
      while(1) {
        tmp6 = 1;
        while (tmp7 <= arrayLength(_comp_loopVar)) {
          _comp = arrayGet(_comp_loopVar, tmp7++);
          if ((!omc_NBStrongComponent_isDiscrete(threadData, _comp))) {
            tmp6--;
            break;
          }
        }
        if (tmp6 == 0) {
          __omcQ_24tmpVar2 = _comp;
          *tmp4 = mmc_mk_cons(__omcQ_24tmpVar2,0);
          tmp4 = &MMC_CDR(*tmp4);
        } else if (tmp6 == 1) {
          break;
        } else {
          MMC_THROW_INTERNAL();
        }
      }
      *tmp4 = mmc_mk_nil();
      tmpMeta3 = __omcQ_24tmpVar3;
    }
    _comps = tmpMeta3;
  }
  else
  {
    omc_Error_addMessage(threadData, _OMC_LIT7, _OMC_LIT10);
  }

  tmpMeta8 = mmc_mk_box5(0, _name, _seed_vars_ptr, _diff_map, boxvar_NBVariable_makeSeedVar, mmc_mk_boolean(_init));
  omc_NBVariable_VariablePointers_mapPtr(threadData, _seedCandidates, (modelica_fnptr) mmc_mk_box2(0,closure1_NBJacobian_makeVarTraverse,tmpMeta8));

  _res_vars = omc_List_splitOnTrue(threadData, omc_NBVariable_VariablePointers_toList(threadData, _partialCandidates), ((modelica_fnptr) _func) ,&_tmp_vars);

  tmpMeta9 = mmc_mk_box1(0, mmc_mk_boolean(_init));
  _tmp_vars = omc_List_splitOnTrue(threadData, _tmp_vars, (modelica_fnptr) mmc_mk_box2(0,closure2_NBVariable_isContinuous,tmpMeta9), NULL);

  {
    modelica_metatype _v;
    for (tmpMeta10 = _res_vars; !listEmpty(tmpMeta10); tmpMeta10=MMC_CDR(tmpMeta10))
    {
      _v = MMC_CAR(tmpMeta10);
      tmpMeta12 = mmc_mk_box1(0, mmc_mk_boolean(0 /* false */));
      omc_NBJacobian_makeVarTraverse(threadData, _v, _name, _pDer_vars_ptr, _diff_map, (modelica_fnptr) mmc_mk_box2(0,closure3_NBVariable_makePDerVar,tmpMeta12), _init);
    }
  }

  _res_vars = omc_Pointer_access(threadData, _pDer_vars_ptr);

  tmpMeta14 = MMC_REFSTRUCTLIT(mmc_nil);
  _pDer_vars_ptr = omc_Pointer_create(threadData, tmpMeta14);

  {
    modelica_metatype _v;
    for (tmpMeta15 = _tmp_vars; !listEmpty(tmpMeta15); tmpMeta15=MMC_CDR(tmpMeta15))
    {
      _v = MMC_CAR(tmpMeta15);
      tmpMeta17 = mmc_mk_box1(0, mmc_mk_boolean(1 /* true */));
      omc_NBJacobian_makeVarTraverse(threadData, _v, _name, _pDer_vars_ptr, _diff_map, (modelica_fnptr) mmc_mk_box2(0,closure4_NBVariable_makePDerVar,tmpMeta17), _init);
    }
  }

  _tmp_vars = omc_Pointer_access(threadData, _pDer_vars_ptr);

  tmpMeta19 = MMC_REFSTRUCTLIT(mmc_nil);
  tmpMeta20 = mmc_mk_box7(3, &NBDifferentiate_DifferentiationArguments_DIFFERENTIATION__ARGUMENTS__desc, _OMC_LIT11, tmpMeta19, mmc_mk_some(_diff_map), mmc_mk_integer(4), _funcTree, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_seedCandidates), 4))));
  _diffArguments = tmpMeta20;

  _diffed_comps = omc_NBDifferentiate_differentiateStrongComponentList(threadData, _comps, _diffArguments, _idx, _name, _OMC_LIT12 ,&_diffArguments);

  _funcTree = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_diffArguments), 6)));

  _unknown_vars = listAppend(_res_vars, _tmp_vars);

  _all_vars = _unknown_vars;

  _seed_vars = omc_Pointer_access(threadData, _seed_vars_ptr);

  _aux_vars = _seed_vars;

  tmpMeta21 = MMC_REFSTRUCTLIT(mmc_nil);
  _alias_vars = tmpMeta21;

  tmpMeta22 = MMC_REFSTRUCTLIT(mmc_nil);
  _depend_vars = tmpMeta22;

  tmpMeta23 = mmc_mk_box11(4, &NBVariable_VarData_VAR__DATA__JAC__desc, omc_NBVariable_VariablePointers_fromList(threadData, _all_vars, 0 /* false */), omc_NBVariable_VariablePointers_fromList(threadData, _unknown_vars, 0 /* false */), _knowns, omc_NBVariable_VariablePointers_fromList(threadData, _aux_vars, 0 /* false */), omc_NBVariable_VariablePointers_fromList(threadData, _alias_vars, 0 /* false */), _partialCandidates, omc_NBVariable_VariablePointers_fromList(threadData, _depend_vars, 0 /* false */), omc_NBVariable_VariablePointers_fromList(threadData, _res_vars, 0 /* false */), omc_NBVariable_VariablePointers_fromList(threadData, _tmp_vars, 0 /* false */), omc_NBVariable_VariablePointers_fromList(threadData, _seed_vars, 0 /* false */));
  _varDataJac = tmpMeta23;

  _sparsityPattern = omc_NBJacobian_SparsityPattern_create(threadData, _seedCandidates, _partialCandidates, _strongComponents, (modelica_integer)_jacType ,&_sparsityColoring);

  tmpMeta24 = mmc_mk_box7(4, &NBackendDAE_JACOBIAN__desc, _name, mmc_mk_integer((modelica_integer)_jacType), _varDataJac, listArray(_diffed_comps), _sparsityPattern, _sparsityColoring);
  _jacobian = mmc_mk_some(tmpMeta24);
  _return: OMC_LABEL_UNUSED
  if (out_funcTree) { *out_funcTree = _funcTree; }
  return _jacobian;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NBJacobian_jacobianSymbolic(threadData_t *threadData, modelica_metatype _name, modelica_metatype _jacType, modelica_metatype _seedCandidates, modelica_metatype _partialCandidates, modelica_metatype _equations, modelica_metatype _knowns, modelica_metatype _strongComponents, modelica_metatype __omcQ_24in_5FfuncTree, modelica_metatype _init, modelica_metatype *out_funcTree)
{
  modelica_integer tmp1;
  modelica_integer tmp2;
  modelica_metatype _jacobian = NULL;
  tmp1 = mmc_unbox_integer(_jacType);
  tmp2 = mmc_unbox_integer(_init);
  _jacobian = omc_NBJacobian_jacobianSymbolic(threadData, _name, tmp1, _seedCandidates, _partialCandidates, _equations, _knowns, _strongComponents, __omcQ_24in_5FfuncTree, tmp2, out_funcTree);
  /* skip box _jacobian; Option<NBackendDAE> */
  /* skip box _funcTree; NFFlatten.FunctionTreeImpl.Tree */
  return _jacobian;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_NBJacobian_compJacobian(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fcomp, modelica_metatype __omcQ_24in_5FfuncTree, modelica_integer _kind, modelica_metatype *out_funcTree, modelica_boolean *out_updated)
{
  modelica_metatype _comp = NULL;
  modelica_metatype _funcTree = NULL;
  modelica_boolean _updated;
  modelica_metatype _strict = NULL;
  modelica_metatype _residual_comps = NULL;
  modelica_metatype _seed_candidates = NULL;
  modelica_metatype _residual_vars = NULL;
  modelica_metatype _inner_vars = NULL;
  modelica_metatype _jacobian = NULL;
  modelica_boolean _init;
  modelica_boolean tmp1_c1 __attribute__((unused)) = 0;
  modelica_metatype tmpMeta[2] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _comp = __omcQ_24in_5Fcomp;
  _funcTree = __omcQ_24in_5FfuncTree;
  // _updated has no default value.
  // _strict has no default value.
  // _residual_comps has no default value.
  // _seed_candidates has no default value.
  // _residual_vars has no default value.
  // _inner_vars has no default value.
  // _jacobian has no default value.
  _init = ((modelica_integer)_kind == 5);
  
  
  { /* match expression */
    modelica_metatype tmp4_1;
    tmp4_1 = _comp;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 2; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          modelica_metatype tmpMeta6;
          modelica_metatype tmpMeta7;
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta15;
          modelica_metatype tmpMeta19;
          modelica_metatype tmpMeta27;
          modelica_metatype tmpMeta31;
          modelica_metatype tmpMeta32;
          modelica_metatype tmpMeta33;
          modelica_metatype tmpMeta34;
          modelica_metatype tmpMeta35;
          if (mmc__uniontype__metarecord__typedef__equal(tmp4_1,6,7) == 0) goto tmp3_end;
          tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp4_1), 3));
          
          _strict = tmpMeta6;
          /* Pattern matching succeeded */
          {
            modelica_metatype __omcQ_24tmpVar5;
            modelica_metatype* tmp8;
            modelica_metatype tmpMeta9;
            modelica_metatype __omcQ_24tmpVar4;
            modelica_integer tmp10;
            modelica_metatype _eqn_loopVar = 0;
            modelica_metatype _eqn;
            _eqn_loopVar = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_strict), 3)));
            tmpMeta9 = MMC_REFSTRUCTLIT(mmc_nil);
            __omcQ_24tmpVar5 = tmpMeta9; /* defaultValue */
            tmp8 = &__omcQ_24tmpVar5;
            while(1) {
              tmp10 = 1;
              if (!listEmpty(_eqn_loopVar)) {
                _eqn = MMC_CAR(_eqn_loopVar);
                _eqn_loopVar = MMC_CDR(_eqn_loopVar);
                tmp10--;
              }
              if (tmp10 == 0) {
                __omcQ_24tmpVar4 = omc_NBStrongComponent_fromSolvedEquationSlice(threadData, _eqn);
                *tmp8 = mmc_mk_cons(__omcQ_24tmpVar4,0);
                tmp8 = &MMC_CDR(*tmp8);
              } else if (tmp10 == 1) {
                break;
              } else {
                goto goto_2;
              }
            }
            *tmp8 = mmc_mk_nil();
            tmpMeta7 = __omcQ_24tmpVar5;
          }
          _residual_comps = tmpMeta7;

          {
            modelica_metatype __omcQ_24tmpVar7;
            modelica_metatype* tmp12;
            modelica_metatype tmpMeta13;
            modelica_metatype __omcQ_24tmpVar6;
            modelica_integer tmp14;
            modelica_metatype _var_loopVar = 0;
            modelica_metatype _var;
            _var_loopVar = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_strict), 2)));
            tmpMeta13 = MMC_REFSTRUCTLIT(mmc_nil);
            __omcQ_24tmpVar7 = tmpMeta13; /* defaultValue */
            tmp12 = &__omcQ_24tmpVar7;
            while(1) {
              tmp14 = 1;
              if (!listEmpty(_var_loopVar)) {
                _var = MMC_CAR(_var_loopVar);
                _var_loopVar = MMC_CDR(_var_loopVar);
                tmp14--;
              }
              if (tmp14 == 0) {
                __omcQ_24tmpVar6 = omc_NBSlice_getT(threadData, _var);
                *tmp12 = mmc_mk_cons(__omcQ_24tmpVar6,0);
                tmp12 = &MMC_CDR(*tmp12);
              } else if (tmp14 == 1) {
                break;
              } else {
                goto goto_2;
              }
            }
            *tmp12 = mmc_mk_nil();
            tmpMeta11 = __omcQ_24tmpVar7;
          }
          _seed_candidates = tmpMeta11;

          {
            modelica_metatype __omcQ_24tmpVar9;
            modelica_metatype* tmp16;
            modelica_metatype tmpMeta17;
            modelica_metatype __omcQ_24tmpVar8;
            modelica_integer tmp18;
            modelica_metatype _eqn_loopVar = 0;
            modelica_metatype _eqn;
            _eqn_loopVar = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_strict), 3)));
            tmpMeta17 = MMC_REFSTRUCTLIT(mmc_nil);
            __omcQ_24tmpVar9 = tmpMeta17; /* defaultValue */
            tmp16 = &__omcQ_24tmpVar9;
            while(1) {
              tmp18 = 1;
              if (!listEmpty(_eqn_loopVar)) {
                _eqn = MMC_CAR(_eqn_loopVar);
                _eqn_loopVar = MMC_CDR(_eqn_loopVar);
                tmp18--;
              }
              if (tmp18 == 0) {
                __omcQ_24tmpVar8 = omc_NBEquation_Equation_getResidualVar(threadData, omc_NBSlice_getT(threadData, _eqn));
                *tmp16 = mmc_mk_cons(__omcQ_24tmpVar8,0);
                tmp16 = &MMC_CDR(*tmp16);
              } else if (tmp18 == 1) {
                break;
              } else {
                goto goto_2;
              }
            }
            *tmp16 = mmc_mk_nil();
            tmpMeta15 = __omcQ_24tmpVar9;
          }
          _residual_vars = tmpMeta15;

          {
            modelica_metatype __omcQ_24tmpVar13;
            modelica_metatype tmpMeta20;
            modelica_metatype tmpMeta21;
            modelica_metatype __omcQ_24tmpVar12;
            modelica_integer tmp25;
            modelica_metatype _comp_loopVar = 0;
            modelica_integer tmp26;
            modelica_metatype _comp;
            _comp_loopVar = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_strict), 4)));
            tmp26 = 1;
            tmpMeta20 = MMC_REFSTRUCTLIT(mmc_nil);
            __omcQ_24tmpVar13 = tmpMeta20; /* defaultValue */
            while(1) {
              tmp25 = 1;
              if (tmp26 <= arrayLength(_comp_loopVar)) {
                _comp = arrayGet(_comp_loopVar, tmp26++);
                tmp25--;
              }
              if (tmp25 == 0) {
                {
                  modelica_metatype __omcQ_24tmpVar11;
                  modelica_metatype* tmp22;
                  modelica_metatype tmpMeta23;
                  modelica_metatype __omcQ_24tmpVar10;
                  modelica_integer tmp24;
                  modelica_metatype _var_loopVar = 0;
                  modelica_metatype _var;
                  _var_loopVar = omc_NBStrongComponent_getVariables(threadData, _comp);
                  tmpMeta23 = MMC_REFSTRUCTLIT(mmc_nil);
                  __omcQ_24tmpVar11 = tmpMeta23; /* defaultValue */
                  tmp22 = &__omcQ_24tmpVar11;
                  while(1) {
                    tmp24 = 1;
                    while (!listEmpty(_var_loopVar)) {
                      _var = MMC_CAR(_var_loopVar);
                      _var_loopVar = MMC_CDR(_var_loopVar);
                      if (omc_NBVariable_isContinuous(threadData, _var, ((modelica_integer)_kind == 5))) {
                        tmp24--;
                        break;
                      }
                    }
                    if (tmp24 == 0) {
                      __omcQ_24tmpVar10 = _var;
                      *tmp22 = mmc_mk_cons(__omcQ_24tmpVar10,0);
                      tmp22 = &MMC_CDR(*tmp22);
                    } else if (tmp24 == 1) {
                      break;
                    } else {
                      goto goto_2;
                    }
                  }
                  *tmp22 = mmc_mk_nil();
                  tmpMeta21 = __omcQ_24tmpVar11;
                }
                __omcQ_24tmpVar12 = tmpMeta21;
                __omcQ_24tmpVar13 = listAppend(__omcQ_24tmpVar12, __omcQ_24tmpVar13);
              } else if (tmp25 == 1) {
                break;
              } else {
                goto goto_2;
              }
            }
            tmpMeta19 = __omcQ_24tmpVar13;
          }
          _inner_vars = tmpMeta19;

          {
            modelica_metatype __omcQ_24tmpVar15;
            modelica_metatype* tmp28;
            modelica_metatype tmpMeta29;
            modelica_metatype __omcQ_24tmpVar14;
            modelica_integer tmp30;
            modelica_metatype _eqn_loopVar = 0;
            modelica_metatype _eqn;
            _eqn_loopVar = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_strict), 3)));
            tmpMeta29 = MMC_REFSTRUCTLIT(mmc_nil);
            __omcQ_24tmpVar15 = tmpMeta29; /* defaultValue */
            tmp28 = &__omcQ_24tmpVar15;
            while(1) {
              tmp30 = 1;
              if (!listEmpty(_eqn_loopVar)) {
                _eqn = MMC_CAR(_eqn_loopVar);
                _eqn_loopVar = MMC_CDR(_eqn_loopVar);
                tmp30--;
              }
              if (tmp30 == 0) {
                __omcQ_24tmpVar14 = omc_NBSlice_getT(threadData, _eqn);
                *tmp28 = mmc_mk_cons(__omcQ_24tmpVar14,0);
                tmp28 = &MMC_CDR(*tmp28);
              } else if (tmp30 == 1) {
                break;
              } else {
                goto goto_2;
              }
            }
            *tmp28 = mmc_mk_nil();
            tmpMeta27 = __omcQ_24tmpVar15;
          }
          tmpMeta31 = stringAppend(omc_NBPartition_Partition_kindToString(threadData, (modelica_integer)_kind),(mmc_unbox_boolean((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_comp), 5))))?_OMC_LIT13:_OMC_LIT14));
          tmpMeta32 = stringAppend(tmpMeta31,intString(mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_comp), 2))))));
          _jacobian = omc_NBJacobian_nonlinear(threadData, omc_NBVariable_VariablePointers_fromList(threadData, _seed_candidates, 0 /* false */), omc_NBVariable_VariablePointers_fromList(threadData, listAppend(_residual_vars, _inner_vars), 0 /* false */), omc_NBEquation_EquationPointers_fromList(threadData, tmpMeta27), omc_Array_appendList(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_strict), 4))), _residual_comps), _funcTree, tmpMeta32, ((modelica_integer)_kind == 5) ,&_funcTree);

          tmpMeta33 = MMC_TAGPTR(mmc_alloc_words(6));
          memcpy(MMC_UNTAGPTR(tmpMeta33), MMC_UNTAGPTR(_strict), 6*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta33))[5] = _jacobian;
          _strict = tmpMeta33;

          tmpMeta34 = MMC_TAGPTR(mmc_alloc_words(9));
          memcpy(MMC_UNTAGPTR(tmpMeta34), MMC_UNTAGPTR(_comp), 9*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta34))[3] = _strict;
          _comp = tmpMeta34;

          if(omc_Flags_isSet(threadData, _OMC_LIT19))
          {
            tmpMeta35 = stringAppend(omc_NBStrongComponent_toString(threadData, _comp, ((modelica_integer) -1)),_OMC_LIT15);
            fputs(MMC_STRINGDATA(tmpMeta35),stdout);
          }
          tmpMeta[0+0] = _comp;
          tmp1_c1 = 1 /* true */;
          goto tmp3_done;
        }
        case 1: {
          
          /* Pattern matching succeeded */
          tmpMeta[0+0] = _comp;
          tmp1_c1 = 0 /* false */;
          goto tmp3_done;
        }
        }
        goto tmp3_end;
        tmp3_end: ;
      }
      goto goto_2;
      goto_2:;
      MMC_THROW_INTERNAL();
      goto tmp3_done;
      tmp3_done:;
    }
  }
  _comp = tmpMeta[0+0];
  _updated = tmp1_c1;
  _return: OMC_LABEL_UNUSED
  if (out_funcTree) { *out_funcTree = _funcTree; }
  if (out_updated) { *out_updated = _updated; }
  return _comp;
}
PROTECTED_FUNCTION_STATIC modelica_metatype boxptr_NBJacobian_compJacobian(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fcomp, modelica_metatype __omcQ_24in_5FfuncTree, modelica_metatype _kind, modelica_metatype *out_funcTree, modelica_metatype *out_updated)
{
  modelica_integer tmp1;
  modelica_boolean _updated;
  modelica_metatype _comp = NULL;
  tmp1 = mmc_unbox_integer(_kind);
  _comp = omc_NBJacobian_compJacobian(threadData, __omcQ_24in_5Fcomp, __omcQ_24in_5FfuncTree, tmp1, out_funcTree, &_updated);
  /* skip box _comp; NBStrongComponent */
  /* skip box _funcTree; NFFlatten.FunctionTreeImpl.Tree */
  if (out_updated) { *out_updated = mmc_mk_icon(_updated); }
  return _comp;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_NBJacobian_partJacobian(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fpart, modelica_metatype __omcQ_24in_5FfuncTree, modelica_metatype _knowns, modelica_string _name, modelica_fnptr _func, modelica_metatype *out_funcTree)
{
  modelica_metatype _part = NULL;
  modelica_metatype _funcTree = NULL;
  modelica_integer _jacType;
  modelica_metatype _unknowns = NULL;
  modelica_metatype _derivative_vars = NULL;
  modelica_metatype _state_vars = NULL;
  modelica_metatype _seedCandidates = NULL;
  modelica_metatype _partialCandidates = NULL;
  modelica_metatype _jacobian = NULL;
  modelica_integer _kind;
  modelica_boolean _updated;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta11;
  modelica_metatype tmpMeta15;
  modelica_metatype tmpMeta19;
  modelica_metatype tmpMeta20;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _part = __omcQ_24in_5Fpart;
  _funcTree = __omcQ_24in_5FfuncTree;
  // _jacType has no default value.
  // _unknowns has no default value.
  // _derivative_vars has no default value.
  // _state_vars has no default value.
  // _seedCandidates has no default value.
  // _partialCandidates has no default value.
  // _jacobian has no default value.
  _kind = omc_NBPartition_Partition_getKind(threadData, _part);
  // _updated has no default value.
  { /* match expression */
    modelica_metatype tmp5_1;
    tmp5_1 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_part), 9)));
    {
      modelica_metatype _comps = NULL;
      modelica_metatype _tmp = NULL;
      volatile mmc_switch_type tmp5;
      int tmp6;
      // _comps has no default value.
      // _tmp has no default value.
      tmp5 = 0;
      for (; tmp5 < 2; tmp5++) {
        switch (MMC_SWITCH_CAST(tmp5)) {
        case 0: {
          modelica_metatype tmpMeta7;
          modelica_integer tmp8;
          modelica_integer tmp9;
          modelica_integer tmp10;
          if (optionNone(tmp5_1)) goto tmp4_end;
          tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp5_1), 1));
          _comps = tmpMeta7;
          /* Pattern matching succeeded */
          tmp8 = ((modelica_integer) 1); tmp9 = 1; tmp10 = arrayLength(_comps);
          if(!(((tmp9 > 0) && (tmp8 > tmp10)) || ((tmp9 < 0) && (tmp8 < tmp10))))
          {
            modelica_integer _i;
            for(_i = ((modelica_integer) 1); in_range_integer(_i, tmp8, tmp10); _i += tmp9)
            {
              _tmp = omc_NBJacobian_compJacobian(threadData, arrayGet(_comps,_i) /* DAE.ASUB */, _funcTree, (modelica_integer)_kind ,&_funcTree ,&_updated);

              if(_updated)
              {
                arrayUpdate(_comps, _i, _tmp);
              }
            }
          }
          tmpMeta2 = mmc_mk_some(_comps);
          goto tmp4_done;
        }
        case 1: {
          
          /* Pattern matching succeeded */
          tmpMeta2 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_part), 9)));
          goto tmp4_done;
        }
        }
        goto tmp4_end;
        tmp4_end: ;
      }
      goto goto_3;
      goto_3:;
      MMC_THROW_INTERNAL();
      goto tmp4_done;
      tmp4_done:;
    }
  }
  tmpMeta1 = MMC_TAGPTR(mmc_alloc_words(10));
  memcpy(MMC_UNTAGPTR(tmpMeta1), MMC_UNTAGPTR(_part), 10*sizeof(modelica_metatype));
  ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta1))[9] = tmpMeta2;
  _part = tmpMeta1;

  if(omc_NBPartition_Partition_isODEorDAE(threadData, _part))
  {
    _partialCandidates = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_part), 4)));

    _unknowns = ((omc_NBPartition_Partition_getKind(threadData, _part) == 6)?omc_Util_getOption(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_part), 5)))):(MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_part), 4))));

    _jacType = ((omc_NBPartition_Partition_getKind(threadData, _part) == 6)?2:1);

    {
      modelica_metatype __omcQ_24tmpVar17;
      modelica_metatype* tmp12;
      modelica_metatype tmpMeta13;
      modelica_metatype __omcQ_24tmpVar16;
      modelica_integer tmp14;
      modelica_metatype _var_loopVar = 0;
      modelica_metatype _var;
      _var_loopVar = omc_NBVariable_VariablePointers_toList(threadData, _unknowns);
      tmpMeta13 = MMC_REFSTRUCTLIT(mmc_nil);
      __omcQ_24tmpVar17 = tmpMeta13; /* defaultValue */
      tmp12 = &__omcQ_24tmpVar17;
      while(1) {
        tmp14 = 1;
        while (!listEmpty(_var_loopVar)) {
          _var = MMC_CAR(_var_loopVar);
          _var_loopVar = MMC_CDR(_var_loopVar);
          if (omc_NBVariable_isStateDerivative(threadData, _var)) {
            tmp14--;
            break;
          }
        }
        if (tmp14 == 0) {
          __omcQ_24tmpVar16 = _var;
          *tmp12 = mmc_mk_cons(__omcQ_24tmpVar16,0);
          tmp12 = &MMC_CDR(*tmp12);
        } else if (tmp14 == 1) {
          break;
        } else {
          MMC_THROW_INTERNAL();
        }
      }
      *tmp12 = mmc_mk_nil();
      tmpMeta11 = __omcQ_24tmpVar17;
    }
    _derivative_vars = tmpMeta11;

    {
      modelica_metatype __omcQ_24tmpVar19;
      modelica_metatype* tmp16;
      modelica_metatype tmpMeta17;
      modelica_metatype __omcQ_24tmpVar18;
      modelica_integer tmp18;
      modelica_metatype _var_loopVar = 0;
      modelica_metatype _var;
      _var_loopVar = _derivative_vars;
      tmpMeta17 = MMC_REFSTRUCTLIT(mmc_nil);
      __omcQ_24tmpVar19 = tmpMeta17; /* defaultValue */
      tmp16 = &__omcQ_24tmpVar19;
      while(1) {
        tmp18 = 1;
        if (!listEmpty(_var_loopVar)) {
          _var = MMC_CAR(_var_loopVar);
          _var_loopVar = MMC_CDR(_var_loopVar);
          tmp18--;
        }
        if (tmp18 == 0) {
          __omcQ_24tmpVar18 = omc_Util_getOption(threadData, omc_NBVariable_getVarState(threadData, _var, NULL));
          *tmp16 = mmc_mk_cons(__omcQ_24tmpVar18,0);
          tmp16 = &MMC_CDR(*tmp16);
        } else if (tmp18 == 1) {
          break;
        } else {
          MMC_THROW_INTERNAL();
        }
      }
      *tmp16 = mmc_mk_nil();
      tmpMeta15 = __omcQ_24tmpVar19;
    }
    _state_vars = tmpMeta15;

    _seedCandidates = omc_NBVariable_VariablePointers_fromList(threadData, _state_vars, mmc_unbox_boolean((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_partialCandidates), 4)))));

    _jacobian = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_string, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))), _name, mmc_mk_integer((modelica_integer)_jacType), _seedCandidates, _partialCandidates, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_part), 6))), _knowns, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_part), 9))), _funcTree, mmc_mk_boolean(((modelica_integer)_kind == 5)) ,&_funcTree) : ((modelica_metatype(*)(threadData_t*, modelica_string, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, _name, mmc_mk_integer((modelica_integer)_jacType), _seedCandidates, _partialCandidates, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_part), 6))), _knowns, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_part), 9))), _funcTree, mmc_mk_boolean(((modelica_integer)_kind == 5)) ,&_funcTree);

    tmpMeta20 = mmc_mk_box3(3, &NBPartition_Association_CONTINUOUS__desc, mmc_mk_integer((modelica_integer)_kind), _jacobian);
    tmpMeta19 = MMC_TAGPTR(mmc_alloc_words(10));
    memcpy(MMC_UNTAGPTR(tmpMeta19), MMC_UNTAGPTR(_part), 10*sizeof(modelica_metatype));
    ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta19))[3] = tmpMeta20;
    _part = tmpMeta19;

    if(omc_Flags_isSet(threadData, _OMC_LIT19))
    {
      fputs(MMC_STRINGDATA(omc_NBPartition_Partition_toString(threadData, _part, ((modelica_integer) 2))),stdout);
    }
  }
  _return: OMC_LABEL_UNUSED
  if (out_funcTree) { *out_funcTree = _funcTree; }
  return _part;
}

DLLDirection
modelica_metatype omc_NBJacobian_SparsityColoring_combine(threadData_t *threadData, modelica_metatype _coloring1, modelica_metatype _coloring2)
{
  modelica_metatype _coloring_out = NULL;
  modelica_metatype _smaller_coloring = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_boolean tmp3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  modelica_metatype tmpMeta7;
  modelica_integer tmp8;
  modelica_integer tmp9;
  modelica_integer tmp10;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _coloring_out has no default value.
  // _smaller_coloring has no default value.
  /* Pattern-matching assignment */
  tmp3 = (modelica_boolean)(arrayLength((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_coloring2), 2)))) > arrayLength((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_coloring1), 2)))));
  if(tmp3)
  {
    tmpMeta1 = mmc_mk_box2(0, _coloring2, _coloring1);
    tmpMeta4 = tmpMeta1;
  }
  else
  {
    tmpMeta2 = mmc_mk_box2(0, _coloring1, _coloring2);
    tmpMeta4 = tmpMeta2;
  }
  tmpMeta5 = tmpMeta4;
  tmpMeta6 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta5), 1));
  tmpMeta7 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta5), 2));
  _coloring_out = tmpMeta6;
  _smaller_coloring = tmpMeta7;

  tmp8 = ((modelica_integer) 1); tmp9 = 1; tmp10 = arrayLength((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_smaller_coloring), 2))));
  if(!(((tmp9 > 0) && (tmp8 > tmp10)) || ((tmp9 < 0) && (tmp8 < tmp10))))
  {
    modelica_integer _i;
    for(_i = ((modelica_integer) 1); in_range_integer(_i, tmp8, tmp10); _i += tmp9)
    {
      arrayUpdate((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_coloring_out), 2))),_i,listAppend(arrayGet((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_coloring_out), 2))),_i) /* DAE.ASUB */, arrayGet((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_smaller_coloring), 2))),_i) /* DAE.ASUB */));

      arrayUpdate((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_coloring_out), 3))),_i,listAppend(arrayGet((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_coloring_out), 3))),_i) /* DAE.ASUB */, arrayGet((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_smaller_coloring), 3))),_i) /* DAE.ASUB */));
    }
  }
  _return: OMC_LABEL_UNUSED
  return _coloring_out;
}

DLLDirection
modelica_metatype omc_NBJacobian_SparsityColoring_PartialD2ColoringAlg(threadData_t *threadData, modelica_metatype _sparsityPattern, modelica_metatype _map)
{
  modelica_metatype _sparsityColoring = NULL;
  modelica_metatype _cref_lookup = NULL;
  modelica_metatype _index_lookup = NULL;
  modelica_metatype _color_exists = NULL;
  modelica_metatype _coloring = NULL;
  modelica_metatype _forbidden_colors = NULL;
  modelica_metatype _col_coloring = NULL;
  modelica_metatype _row_coloring = NULL;
  modelica_integer _color;
  modelica_metatype _cols_lst = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype _rows_lst = NULL;
  modelica_metatype tmpMeta2;
  modelica_integer tmp3;
  modelica_integer tmp4;
  modelica_integer tmp5;
  modelica_metatype tmpMeta6;
  modelica_metatype tmpMeta7;
  modelica_metatype tmpMeta8;
  modelica_metatype tmpMeta9;
  modelica_metatype tmpMeta10;
  modelica_metatype tmpMeta11;
  modelica_integer tmp12;
  modelica_integer tmp13;
  modelica_integer tmp14;
  modelica_metatype tmpMeta15;
  modelica_integer tmp16;
  modelica_integer tmp17;
  modelica_integer tmp18;
  modelica_metatype tmpMeta19;
  modelica_metatype tmpMeta20;
  modelica_integer tmp21;
  modelica_integer tmp22;
  modelica_integer tmp23;
  modelica_metatype tmpMeta24;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _sparsityColoring has no default value.
  // _cref_lookup has no default value.
  // _index_lookup has no default value.
  // _color_exists has no default value.
  // _coloring has no default value.
  // _forbidden_colors has no default value.
  // _col_coloring has no default value.
  // _row_coloring has no default value.
  // _color has no default value.
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _cols_lst = tmpMeta1;
  tmpMeta2 = MMC_REFSTRUCTLIT(mmc_nil);
  _rows_lst = tmpMeta2;
  _cref_lookup = listArray((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_sparsityPattern), 4))));

  _index_lookup = omc_UnorderedMap_new(threadData, boxvar_NFComponentRef_hash, boxvar_NFComponentRef_isEqual, omc_Util_nextPrime(threadData, listLength((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_sparsityPattern), 4))))));

  tmp3 = ((modelica_integer) 1); tmp4 = 1; tmp5 = arrayLength(_cref_lookup);
  if(!(((tmp4 > 0) && (tmp3 > tmp5)) || ((tmp4 < 0) && (tmp3 < tmp5))))
  {
    modelica_integer _i;
    for(_i = ((modelica_integer) 1); in_range_integer(_i, tmp3, tmp5); _i += tmp4)
    {
      omc_UnorderedMap_add(threadData, arrayGet(_cref_lookup,_i) /* DAE.ASUB */, mmc_mk_integer(_i), _index_lookup);
    }
  }

  _coloring = arrayCreate(arrayLength(_cref_lookup), mmc_mk_integer(((modelica_integer) 0)));

  _forbidden_colors = arrayCreate(arrayLength(_cref_lookup), mmc_mk_integer(((modelica_integer) 0)));

  _color_exists = arrayCreate(arrayLength(_cref_lookup), mmc_mk_boolean(0 /* false */));

  tmpMeta6 = MMC_REFSTRUCTLIT(mmc_nil);
  _col_coloring = arrayCreate(arrayLength(_cref_lookup), tmpMeta6);

  tmpMeta7 = MMC_REFSTRUCTLIT(mmc_nil);
  _row_coloring = arrayCreate(arrayLength(_cref_lookup), tmpMeta7);

  tmp12 = ((modelica_integer) 1); tmp13 = 1; tmp14 = arrayLength(_cref_lookup);
  if(!(((tmp13 > 0) && (tmp12 > tmp14)) || ((tmp13 < 0) && (tmp12 < tmp14))))
  {
    modelica_integer _i;
    for(_i = ((modelica_integer) 1); in_range_integer(_i, tmp12, tmp14); _i += tmp13)
    {
      {
        modelica_metatype _row_var;
        for (tmpMeta8 = omc_UnorderedMap_getSafe(threadData, arrayGet(_cref_lookup,_i) /* DAE.ASUB */, _map, _OMC_LIT22); !listEmpty(tmpMeta8); tmpMeta8=MMC_CDR(tmpMeta8))
        {
          _row_var = MMC_CAR(tmpMeta8);
          {
            modelica_metatype _col_var;
            for (tmpMeta9 = omc_UnorderedMap_getSafe(threadData, _row_var, _map, _OMC_LIT21); !listEmpty(tmpMeta9); tmpMeta9=MMC_CDR(tmpMeta9))
            {
              _col_var = MMC_CAR(tmpMeta9);
              _color = mmc_unbox_integer(arrayGet(_coloring,mmc_unbox_integer(omc_UnorderedMap_getSafe(threadData, _col_var, _index_lookup, _OMC_LIT20))) /* DAE.ASUB */);

              if((_color > ((modelica_integer) 0)))
              {
                arrayUpdate(_forbidden_colors,_color,mmc_mk_integer(_i));
              }
            }
          }
        }
      }

      _color = ((modelica_integer) 1);

      while(1)
      {
        if(!(mmc_unbox_integer(arrayGet(_forbidden_colors,_color) /* DAE.ASUB */) == _i)) break;
        _color = ((modelica_integer) 1) + _color;
      }

      arrayUpdate(_coloring,_i,mmc_mk_integer(_color));

      arrayUpdate(_row_coloring,_color,listAppend(arrayGet(_row_coloring,_color) /* DAE.ASUB */, omc_UnorderedMap_getSafe(threadData, arrayGet(_cref_lookup,_i) /* DAE.ASUB */, _map, _OMC_LIT23)));

      arrayUpdate(_color_exists,_color,mmc_mk_boolean(1 /* true */));
    }
  }

  tmp16 = ((modelica_integer) 1); tmp17 = 1; tmp18 = arrayLength(_coloring);
  if(!(((tmp17 > 0) && (tmp16 > tmp18)) || ((tmp17 < 0) && (tmp16 < tmp18))))
  {
    modelica_integer _i;
    for(_i = ((modelica_integer) 1); in_range_integer(_i, tmp16, tmp18); _i += tmp17)
    {
      tmpMeta15 = mmc_mk_cons(arrayGet(_cref_lookup,_i) /* DAE.ASUB */, arrayGet(_col_coloring,mmc_unbox_integer(arrayGet(_coloring,_i) /* DAE.ASUB */)) /* DAE.ASUB */);
      arrayUpdate(_col_coloring,mmc_unbox_integer(arrayGet(_coloring,_i) /* DAE.ASUB */),tmpMeta15);
    }
  }

  tmp21 = arrayLength(_color_exists); tmp22 = ((modelica_integer) -1); tmp23 = ((modelica_integer) 1);
  if(!(((tmp22 > 0) && (tmp21 > tmp23)) || ((tmp22 < 0) && (tmp21 < tmp23))))
  {
    modelica_integer _i;
    for(_i = arrayLength(_color_exists); in_range_integer(_i, tmp21, tmp23); _i += tmp22)
    {
      if(mmc_unbox_boolean(arrayGet(_color_exists,_i) /* DAE.ASUB */))
      {
        tmpMeta19 = mmc_mk_cons(arrayGet(_col_coloring,_i) /* DAE.ASUB */, _cols_lst);
        _cols_lst = tmpMeta19;

        tmpMeta20 = mmc_mk_cons(arrayGet(_row_coloring,_i) /* DAE.ASUB */, _rows_lst);
        _rows_lst = tmpMeta20;
      }
    }
  }

  tmpMeta24 = mmc_mk_box3(3, &NBJacobian_SparsityColoring_SPARSITY__COLORING__desc, listArray(_cols_lst), listArray(_rows_lst));
  _sparsityColoring = tmpMeta24;
  _return: OMC_LABEL_UNUSED
  return _sparsityColoring;
}

PROTECTED_FUNCTION_STATIC modelica_metatype omc_NBJacobian_SparsityColoring_PartialD2ColoringAlgC_getIndices(threadData_t *threadData, modelica_metatype _cref, modelica_metatype _seed_indices, modelica_metatype _partial_indices, modelica_metatype _rows)
{
  modelica_metatype _indices = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _indices has no default value.
  if(omc_UnorderedMap_contains(threadData, _cref, _seed_indices))
  {
    tmpMeta1 = mmc_mk_cons(omc_UnorderedMap_getSafe(threadData, _cref, _seed_indices, _OMC_LIT27), MMC_REFSTRUCTLIT(mmc_nil));
    _indices = tmpMeta1;
  }
  else
  {
    if(omc_UnorderedMap_contains(threadData, _cref, _partial_indices))
    {
      _indices = arrayGet(_rows,mmc_unbox_integer(omc_UnorderedMap_getSafe(threadData, _cref, _partial_indices, _OMC_LIT26))) /* DAE.ASUB */;
    }
    else
    {
      tmpMeta3 = stringAppend(_OMC_LIT24,omc_NFComponentRef_toString(threadData, _cref));
      tmpMeta4 = stringAppend(tmpMeta3,_OMC_LIT25);
      tmpMeta2 = mmc_mk_cons(tmpMeta4, MMC_REFSTRUCTLIT(mmc_nil));
      omc_Error_addMessage(threadData, _OMC_LIT7, tmpMeta2);

      MMC_THROW_INTERNAL();
    }
  }
  _return: OMC_LABEL_UNUSED
  return _indices;
}

DLLDirection
modelica_metatype omc_NBJacobian_SparsityColoring_PartialD2ColoringAlgC(threadData_t *threadData, modelica_metatype _sparsityPattern, modelica_integer _jacType)
{
  modelica_metatype _sparsityColoring = NULL;
  modelica_metatype _seeds = NULL;
  modelica_metatype _partials = NULL;
  modelica_metatype _seed_indices = NULL;
  modelica_metatype _partial_indices = NULL;
  modelica_integer _sizeCols;
  modelica_integer _sizeRows;
  modelica_metatype _idx_cref = NULL;
  modelica_metatype _deps = NULL;
  modelica_metatype _cols = NULL;
  modelica_metatype _rows = NULL;
  modelica_metatype _colored_cols = NULL;
  modelica_metatype _cref_colored_cols = NULL;
  modelica_metatype tmpMeta1;
  modelica_integer tmp5;
  modelica_integer tmp6;
  modelica_integer tmp7;
  modelica_integer tmp8;
  modelica_integer tmp9;
  modelica_integer tmp10;
  modelica_metatype tmpMeta11;
  modelica_metatype tmpMeta12;
  modelica_metatype tmpMeta13;
  modelica_metatype tmpMeta14;
  modelica_metatype tmpMeta15;
  modelica_metatype tmpMeta16;
  modelica_metatype tmpMeta17;
  modelica_metatype tmpMeta21;
  modelica_metatype tmpMeta22;
  modelica_metatype tmpMeta23;
  modelica_metatype tmpMeta24;
  modelica_metatype tmpMeta25;
  modelica_metatype tmpMeta26;
  modelica_metatype tmpMeta29;
  modelica_metatype tmpMeta30;
  modelica_metatype tmpMeta31;
  modelica_integer tmp35;
  modelica_integer tmp36;
  modelica_integer tmp37;
  modelica_metatype tmpMeta38;
  modelica_metatype tmpMeta39;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _sparsityColoring has no default value.
  // _seeds has no default value.
  // _partials has no default value.
  // _seed_indices has no default value.
  // _partial_indices has no default value.
  // _sizeCols has no default value.
  // _sizeRows has no default value.
  // _idx_cref has no default value.
  // _deps has no default value.
  // _cols has no default value.
  // _rows has no default value.
  // _colored_cols has no default value.
  // _cref_colored_cols has no default value.
  _seeds = listArray((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_sparsityPattern), 4))));

  if(((modelica_integer)_jacType == 4))
  {
    _partials = listArray((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_sparsityPattern), 5))));
  }
  else
  {
    {
      modelica_metatype __omcQ_24tmpVar21;
      modelica_metatype* tmp2;
      modelica_metatype tmpMeta3;
      modelica_metatype __omcQ_24tmpVar20;
      modelica_integer tmp4;
      modelica_metatype _cref_loopVar = 0;
      modelica_metatype _cref;
      _cref_loopVar = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_sparsityPattern), 5)));
      tmpMeta3 = MMC_REFSTRUCTLIT(mmc_nil);
      __omcQ_24tmpVar21 = tmpMeta3; /* defaultValue */
      tmp2 = &__omcQ_24tmpVar21;
      while(1) {
        tmp4 = 1;
        while (!listEmpty(_cref_loopVar)) {
          _cref = MMC_CAR(_cref_loopVar);
          _cref_loopVar = MMC_CDR(_cref_loopVar);
          if ((omc_NBVariable_checkCref(threadData, _cref, boxvar_NBVariable_isStateDerivative, _OMC_LIT28) || omc_NBVariable_checkCref(threadData, _cref, boxvar_NBVariable_isResidual, _OMC_LIT28))) {
            tmp4--;
            break;
          }
        }
        if (tmp4 == 0) {
          __omcQ_24tmpVar20 = _cref;
          *tmp2 = mmc_mk_cons(__omcQ_24tmpVar20,0);
          tmp2 = &MMC_CDR(*tmp2);
        } else if (tmp4 == 1) {
          break;
        } else {
          MMC_THROW_INTERNAL();
        }
      }
      *tmp2 = mmc_mk_nil();
      tmpMeta1 = __omcQ_24tmpVar21;
    }
    _partials = listArray(tmpMeta1);
  }

  _sizeCols = arrayLength(_seeds);

  _sizeRows = arrayLength(_partials);

  _seed_indices = omc_UnorderedMap_new(threadData, boxvar_NFComponentRef_hash, boxvar_NFComponentRef_isEqual, omc_Util_nextPrime(threadData, _sizeCols));

  _partial_indices = omc_UnorderedMap_new(threadData, boxvar_NFComponentRef_hash, boxvar_NFComponentRef_isEqual, omc_Util_nextPrime(threadData, _sizeRows));

  tmp5 = ((modelica_integer) 1); tmp6 = 1; tmp7 = _sizeCols;
  if(!(((tmp6 > 0) && (tmp5 > tmp7)) || ((tmp6 < 0) && (tmp5 < tmp7))))
  {
    modelica_integer _i;
    for(_i = ((modelica_integer) 1); in_range_integer(_i, tmp5, tmp7); _i += tmp6)
    {
      omc_UnorderedMap_add(threadData, arrayGet(_seeds,_i) /* DAE.ASUB */, mmc_mk_integer(_i), _seed_indices);
    }
  }

  tmp8 = ((modelica_integer) 1); tmp9 = 1; tmp10 = _sizeRows;
  if(!(((tmp9 > 0) && (tmp8 > tmp10)) || ((tmp9 < 0) && (tmp8 < tmp10))))
  {
    modelica_integer _i;
    for(_i = ((modelica_integer) 1); in_range_integer(_i, tmp8, tmp10); _i += tmp9)
    {
      omc_UnorderedMap_add(threadData, arrayGet(_partials,_i) /* DAE.ASUB */, mmc_mk_integer(_i), _partial_indices);
    }
  }

  tmpMeta11 = MMC_REFSTRUCTLIT(mmc_nil);
  _cols = arrayCreate(_sizeCols, tmpMeta11);

  tmpMeta12 = MMC_REFSTRUCTLIT(mmc_nil);
  _rows = arrayCreate(_sizeRows, tmpMeta12);

  {
    modelica_metatype _tpl;
    for (tmpMeta13 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_sparsityPattern), 2))); !listEmpty(tmpMeta13); tmpMeta13=MMC_CDR(tmpMeta13))
    {
      _tpl = MMC_CAR(tmpMeta13);
      /* Pattern-matching assignment */
      tmpMeta14 = _tpl;
      tmpMeta15 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta14), 1));
      tmpMeta16 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta14), 2));
      _idx_cref = tmpMeta15;
      _deps = tmpMeta16;

      {
        modelica_metatype __omcQ_24tmpVar23;
        modelica_metatype* tmp18;
        modelica_metatype tmpMeta19;
        modelica_metatype __omcQ_24tmpVar22;
        modelica_integer tmp20;
        modelica_metatype _dep_loopVar = 0;
        modelica_metatype _dep;
        _dep_loopVar = _deps;
        tmpMeta19 = MMC_REFSTRUCTLIT(mmc_nil);
        __omcQ_24tmpVar23 = tmpMeta19; /* defaultValue */
        tmp18 = &__omcQ_24tmpVar23;
        while(1) {
          tmp20 = 1;
          if (!listEmpty(_dep_loopVar)) {
            _dep = MMC_CAR(_dep_loopVar);
            _dep_loopVar = MMC_CDR(_dep_loopVar);
            tmp20--;
          }
          if (tmp20 == 0) {
            __omcQ_24tmpVar22 = omc_UnorderedMap_getSafe(threadData, _dep, _partial_indices, _OMC_LIT29);
            *tmp18 = mmc_mk_cons(__omcQ_24tmpVar22,0);
            tmp18 = &MMC_CDR(*tmp18);
          } else if (tmp20 == 1) {
            break;
          } else {
            MMC_THROW_INTERNAL();
          }
        }
        *tmp18 = mmc_mk_nil();
        tmpMeta17 = __omcQ_24tmpVar23;
      }
      arrayUpdate(_cols,mmc_unbox_integer(omc_UnorderedMap_getSafe(threadData, _idx_cref, _seed_indices, _OMC_LIT29)),tmpMeta17);
    }
  }

  {
    modelica_metatype _tpl;
    for (tmpMeta22 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_sparsityPattern), 3))); !listEmpty(tmpMeta22); tmpMeta22=MMC_CDR(tmpMeta22))
    {
      _tpl = MMC_CAR(tmpMeta22);
      /* Pattern-matching assignment */
      tmpMeta23 = _tpl;
      tmpMeta24 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta23), 1));
      tmpMeta25 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta23), 2));
      _idx_cref = tmpMeta24;
      _deps = tmpMeta25;

      {
        modelica_metatype __omcQ_24tmpVar25;
        modelica_metatype tmpMeta27;
        modelica_metatype __omcQ_24tmpVar24;
        modelica_integer tmp28;
        modelica_metatype _dep_loopVar = 0;
        modelica_metatype _dep;
        _dep_loopVar = _deps;
        tmpMeta27 = MMC_REFSTRUCTLIT(mmc_nil);
        __omcQ_24tmpVar25 = tmpMeta27; /* defaultValue */
        while(1) {
          tmp28 = 1;
          if (!listEmpty(_dep_loopVar)) {
            _dep = MMC_CAR(_dep_loopVar);
            _dep_loopVar = MMC_CDR(_dep_loopVar);
            tmp28--;
          }
          if (tmp28 == 0) {
            __omcQ_24tmpVar24 = omc_NBJacobian_SparsityColoring_PartialD2ColoringAlgC_getIndices(threadData, _dep, _seed_indices, _partial_indices, _rows);
            __omcQ_24tmpVar25 = listAppend(__omcQ_24tmpVar24, __omcQ_24tmpVar25);
          } else if (tmp28 == 1) {
            break;
          } else {
            MMC_THROW_INTERNAL();
          }
        }
        tmpMeta26 = __omcQ_24tmpVar25;
      }
      arrayUpdate(_rows,mmc_unbox_integer(omc_UnorderedMap_getSafe(threadData, _idx_cref, _partial_indices, _OMC_LIT30)),tmpMeta26);
    }
  }

  _colored_cols = omc_SymbolicJacobian_createColoring(threadData, _rows, _cols, _sizeCols, _sizeRows);

  tmpMeta30 = MMC_REFSTRUCTLIT(mmc_nil);
  _cref_colored_cols = arrayCreate(arrayLength(_colored_cols), tmpMeta30);

  tmp35 = ((modelica_integer) 1); tmp36 = 1; tmp37 = arrayLength(_colored_cols);
  if(!(((tmp36 > 0) && (tmp35 > tmp37)) || ((tmp36 < 0) && (tmp35 < tmp37))))
  {
    modelica_integer _i;
    for(_i = ((modelica_integer) 1); in_range_integer(_i, tmp35, tmp37); _i += tmp36)
    {
      {
        modelica_metatype __omcQ_24tmpVar27;
        modelica_metatype* tmp32;
        modelica_metatype tmpMeta33;
        modelica_metatype __omcQ_24tmpVar26;
        modelica_integer tmp34;
        modelica_metatype _idx_loopVar = 0;
        modelica_metatype _idx;
        _idx_loopVar = arrayGet(_colored_cols,_i) /* DAE.ASUB */;
        tmpMeta33 = MMC_REFSTRUCTLIT(mmc_nil);
        __omcQ_24tmpVar27 = tmpMeta33; /* defaultValue */
        tmp32 = &__omcQ_24tmpVar27;
        while(1) {
          tmp34 = 1;
          if (!listEmpty(_idx_loopVar)) {
            _idx = MMC_CAR(_idx_loopVar);
            _idx_loopVar = MMC_CDR(_idx_loopVar);
            tmp34--;
          }
          if (tmp34 == 0) {
            __omcQ_24tmpVar26 = arrayGet(_seeds,mmc_unbox_integer(_idx)) /* DAE.ASUB */;
            *tmp32 = mmc_mk_cons(__omcQ_24tmpVar26,0);
            tmp32 = &MMC_CDR(*tmp32);
          } else if (tmp34 == 1) {
            break;
          } else {
            MMC_THROW_INTERNAL();
          }
        }
        *tmp32 = mmc_mk_nil();
        tmpMeta31 = __omcQ_24tmpVar27;
      }
      arrayUpdate(_cref_colored_cols,_i,tmpMeta31);
    }
  }

  tmpMeta38 = MMC_REFSTRUCTLIT(mmc_nil);
  tmpMeta39 = mmc_mk_box3(3, &NBJacobian_SparsityColoring_SPARSITY__COLORING__desc, _cref_colored_cols, arrayCreate(_sizeRows, tmpMeta38));
  _sparsityColoring = tmpMeta39;
  _return: OMC_LABEL_UNUSED
  return _sparsityColoring;
}
modelica_metatype boxptr_NBJacobian_SparsityColoring_PartialD2ColoringAlgC(threadData_t *threadData, modelica_metatype _sparsityPattern, modelica_metatype _jacType)
{
  modelica_integer tmp1;
  modelica_metatype _sparsityColoring = NULL;
  tmp1 = mmc_unbox_integer(_jacType);
  _sparsityColoring = omc_NBJacobian_SparsityColoring_PartialD2ColoringAlgC(threadData, _sparsityPattern, tmp1);
  /* skip box _sparsityColoring; NBJacobian.SparsityColoring */
  return _sparsityColoring;
}

DLLDirection
modelica_metatype omc_NBJacobian_SparsityColoring_lazy(threadData_t *threadData, modelica_metatype _sparsityPattern)
{
  modelica_metatype _sparsityColoring = NULL;
  modelica_metatype _cols = NULL;
  modelica_metatype _rows = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta6;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _sparsityColoring has no default value.
  // _cols has no default value.
  // _rows has no default value.
  {
    modelica_metatype __omcQ_24tmpVar29;
    modelica_metatype* tmp2;
    modelica_metatype tmpMeta3;
    modelica_metatype tmpMeta4;
    modelica_metatype __omcQ_24tmpVar28;
    modelica_integer tmp5;
    modelica_metatype _cref_loopVar = 0;
    modelica_metatype _cref;
    _cref_loopVar = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_sparsityPattern), 4)));
    tmpMeta3 = MMC_REFSTRUCTLIT(mmc_nil);
    __omcQ_24tmpVar29 = tmpMeta3; /* defaultValue */
    tmp2 = &__omcQ_24tmpVar29;
    while(1) {
      tmp5 = 1;
      if (!listEmpty(_cref_loopVar)) {
        _cref = MMC_CAR(_cref_loopVar);
        _cref_loopVar = MMC_CDR(_cref_loopVar);
        tmp5--;
      }
      if (tmp5 == 0) {
        tmpMeta4 = mmc_mk_cons(_cref, MMC_REFSTRUCTLIT(mmc_nil));
        __omcQ_24tmpVar28 = tmpMeta4;
        *tmp2 = mmc_mk_cons(__omcQ_24tmpVar28,0);
        tmp2 = &MMC_CDR(*tmp2);
      } else if (tmp5 == 1) {
        break;
      } else {
        MMC_THROW_INTERNAL();
      }
    }
    *tmp2 = mmc_mk_nil();
    tmpMeta1 = __omcQ_24tmpVar29;
  }
  _cols = listArray(tmpMeta1);

  _rows = arrayCreate(arrayLength(_cols), (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_sparsityPattern), 5))));

  tmpMeta6 = mmc_mk_box3(3, &NBJacobian_SparsityColoring_SPARSITY__COLORING__desc, _cols, _rows);
  _sparsityColoring = tmpMeta6;
  _return: OMC_LABEL_UNUSED
  return _sparsityColoring;
}

DLLDirection
modelica_string omc_NBJacobian_SparsityColoring_toString(threadData_t *threadData, modelica_metatype _sparsityColoring)
{
  modelica_string _str = NULL;
  modelica_boolean _empty;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  modelica_metatype tmpMeta7;
  modelica_metatype tmpMeta8;
  modelica_metatype tmpMeta9;
  modelica_metatype tmpMeta10;
  modelica_integer tmp11;
  modelica_integer tmp12;
  modelica_integer tmp13;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _str = omc_StringUtil_headline__2(threadData, _OMC_LIT31);
  _empty = (arrayLength((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_sparsityColoring), 2)))) == ((modelica_integer) 0));
  if(_empty)
  {
    tmpMeta1 = stringAppend(_str,_OMC_LIT32);
    _str = tmpMeta1;
  }

  tmp11 = ((modelica_integer) 1); tmp12 = 1; tmp13 = arrayLength((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_sparsityColoring), 2))));
  if(!(((tmp12 > 0) && (tmp11 > tmp13)) || ((tmp12 < 0) && (tmp11 < tmp13))))
  {
    modelica_integer _i;
    for(_i = ((modelica_integer) 1); in_range_integer(_i, tmp11, tmp13); _i += tmp12)
    {
      tmpMeta2 = stringAppend(_str,_OMC_LIT33);
      tmpMeta3 = stringAppend(tmpMeta2,intString(_i));
      tmpMeta4 = stringAppend(tmpMeta3,_OMC_LIT34);
      tmpMeta5 = stringAppend(tmpMeta4,_OMC_LIT35);
      tmpMeta6 = stringAppend(tmpMeta5,omc_NFComponentRef_listToString(threadData, arrayGet((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_sparsityColoring), 2))),_i) /* DAE.ASUB */));
      tmpMeta7 = stringAppend(tmpMeta6,_OMC_LIT15);
      tmpMeta8 = stringAppend(tmpMeta7,_OMC_LIT36);
      tmpMeta9 = stringAppend(tmpMeta8,omc_NFComponentRef_listToString(threadData, arrayGet((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_sparsityColoring), 3))),_i) /* DAE.ASUB */));
      tmpMeta10 = stringAppend(tmpMeta9,_OMC_LIT37);
      _str = tmpMeta10;
    }
  }
  _return: OMC_LABEL_UNUSED
  return _str;
}

DLLDirection
modelica_metatype omc_NBJacobian_SparsityPattern_createEmpty(threadData_t *threadData, modelica_metatype *out_sparsityColoring)
{
  modelica_metatype _sparsityPattern = NULL;
  modelica_metatype _sparsityColoring = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype tmpMeta3;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _sparsityPattern = _OMC_LIT38;
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  tmpMeta2 = MMC_REFSTRUCTLIT(mmc_nil);
  tmpMeta3 = mmc_mk_box3(3, &NBJacobian_SparsityColoring_SPARSITY__COLORING__desc, listArray(tmpMeta1), listArray(tmpMeta2));
  _sparsityColoring = tmpMeta3;
  _return: OMC_LABEL_UNUSED
  if (out_sparsityColoring) { *out_sparsityColoring = _sparsityColoring; }
  return _sparsityPattern;
}

DLLDirection
modelica_metatype omc_NBJacobian_SparsityPattern_create(threadData_t *threadData, modelica_metatype _seedCandidates, modelica_metatype _partialCandidates, modelica_metatype _strongComponents, modelica_integer _jacType, modelica_metatype *out_sparsityColoring)
{
  modelica_metatype _sparsityPattern = NULL;
  modelica_metatype _sparsityColoring = NULL;
  modelica_metatype _map = NULL;
  modelica_metatype tmpMeta43;
  modelica_metatype tmpMeta44;
  modelica_metatype tmpMeta45;
  modelica_metatype tmpMeta[2] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _sparsityPattern has no default value.
  // _sparsityColoring has no default value.
  // _map has no default value.
  
  
  { /* match expression */
    modelica_metatype tmp8_1;
    tmp8_1 = _strongComponents;
    {
      modelica_metatype _seed_mapping = NULL;
      modelica_metatype _partial_mapping = NULL;
      modelica_metatype _comps = NULL;
      modelica_metatype _seed_vars = NULL;
      modelica_metatype _seed_vars_array = NULL;
      modelica_metatype _partial_vars = NULL;
      modelica_metatype _partial_vars_array = NULL;
      modelica_metatype _tmp = NULL;
      modelica_metatype _row_vars = NULL;
      modelica_metatype tmpMeta3;
      modelica_metatype _col_vars = NULL;
      modelica_metatype tmpMeta4;
      modelica_metatype _set = NULL;
      modelica_metatype _cols = NULL;
      modelica_metatype tmpMeta5;
      modelica_metatype _rows = NULL;
      modelica_metatype tmpMeta6;
      modelica_integer _nnz;
      volatile mmc_switch_type tmp8;
      int tmp9;
      // _seed_mapping has no default value.
      // _partial_mapping has no default value.
      // _comps has no default value.
      // _seed_vars has no default value.
      // _seed_vars_array has no default value.
      // _partial_vars has no default value.
      // _partial_vars_array has no default value.
      // _tmp has no default value.
      tmpMeta3 = MMC_REFSTRUCTLIT(mmc_nil);
      _row_vars = tmpMeta3;
      tmpMeta4 = MMC_REFSTRUCTLIT(mmc_nil);
      _col_vars = tmpMeta4;
      // _set has no default value.
      tmpMeta5 = MMC_REFSTRUCTLIT(mmc_nil);
      _cols = tmpMeta5;
      tmpMeta6 = MMC_REFSTRUCTLIT(mmc_nil);
      _rows = tmpMeta6;
      _nnz = ((modelica_integer) 0);
      tmp8 = 0;
      for (; tmp8 < 4; tmp8++) {
        switch (MMC_SWITCH_CAST(tmp8)) {
        case 0: {
          modelica_metatype tmpMeta10;
          if (optionNone(tmp8_1)) goto tmp7_end;
          tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp8_1), 1));
          _comps = tmpMeta10;
          /* Pattern matching succeeded */
          /* Check guard condition after assignments */
          if (!(arrayLength(_comps) == ((modelica_integer) 0))) goto tmp7_end;
          tmpMeta[0+0] = _OMC_LIT38;
          tmpMeta[0+1] = omc_UnorderedMap_new(threadData, boxvar_NFComponentRef_hash, boxvar_NFComponentRef_isEqual, ((modelica_integer) 1));
          goto tmp7_done;
        }
        case 1: {
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          modelica_metatype tmpMeta13;
          modelica_metatype tmpMeta14;
          modelica_metatype tmpMeta15;
          modelica_metatype tmpMeta16;
          modelica_metatype tmpMeta17;
          modelica_metatype tmpMeta18;
          modelica_metatype tmpMeta19;
          modelica_metatype tmpMeta20;
          modelica_metatype tmpMeta21;
          modelica_integer tmp22;
          modelica_integer tmp23;
          modelica_integer tmp24;
          modelica_metatype tmpMeta25;
          modelica_metatype tmpMeta26;
          modelica_metatype tmpMeta27;
          modelica_metatype tmpMeta28;
          modelica_metatype tmpMeta29;
          modelica_metatype tmpMeta30;
          modelica_metatype tmpMeta31;
          modelica_metatype tmpMeta32;
          modelica_metatype tmpMeta33;
          modelica_metatype tmpMeta34;
          modelica_metatype tmpMeta35;
          modelica_metatype tmpMeta36;
          modelica_metatype tmpMeta37;
          modelica_metatype tmpMeta38;
          modelica_metatype tmpMeta39;
          modelica_metatype tmpMeta40;
          modelica_metatype tmpMeta41;
          modelica_metatype tmpMeta42;
          if (optionNone(tmp8_1)) goto tmp7_end;
          tmpMeta11 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp8_1), 1));
          _comps = tmpMeta11;
          /* Pattern matching succeeded */
          _seed_mapping = omc_NBAdjacency_Mapping_create(threadData, omc_NBEquation_EquationPointers_empty(threadData, ((modelica_integer) 4013)), _seedCandidates);

          _partial_mapping = omc_NBAdjacency_Mapping_create(threadData, omc_NBEquation_EquationPointers_empty(threadData, ((modelica_integer) 4013)), _partialCandidates);

          _partial_vars = omc_NBVariable_VariablePointers_getScalarVarNames(threadData, _partialCandidates);

          _seed_vars = omc_NBVariable_VariablePointers_getScalarVarNames(threadData, _seedCandidates);

          _seed_vars_array = omc_NBVariable_VariablePointers_getVarNames(threadData, _seedCandidates);

          _partial_vars_array = omc_NBVariable_VariablePointers_getVarNames(threadData, _partialCandidates);

          _map = omc_UnorderedMap_new(threadData, boxvar_NFComponentRef_hash, boxvar_NFComponentRef_isEqual, omc_Util_nextPrime(threadData, listLength(_seed_vars) + listLength(_partial_vars)));

          _set = omc_UnorderedSet_new(threadData, boxvar_NFComponentRef_hash, boxvar_NFComponentRef_isEqual, omc_Util_nextPrime(threadData, listLength(_seed_vars_array)));

          {
            modelica_metatype _cref;
            for (tmpMeta12 = _seed_vars; !listEmpty(tmpMeta12); tmpMeta12=MMC_CDR(tmpMeta12))
            {
              _cref = MMC_CAR(tmpMeta12);
              tmpMeta13 = MMC_REFSTRUCTLIT(mmc_nil);
              omc_UnorderedMap_add(threadData, _cref, tmpMeta13, _map);
            }
          }

          {
            modelica_metatype _cref;
            for (tmpMeta15 = _partial_vars; !listEmpty(tmpMeta15); tmpMeta15=MMC_CDR(tmpMeta15))
            {
              _cref = MMC_CAR(tmpMeta15);
              tmpMeta16 = MMC_REFSTRUCTLIT(mmc_nil);
              omc_UnorderedMap_add(threadData, _cref, tmpMeta16, _map);
            }
          }

          {
            modelica_metatype _cref;
            for (tmpMeta18 = _seed_vars_array; !listEmpty(tmpMeta18); tmpMeta18=MMC_CDR(tmpMeta18))
            {
              _cref = MMC_CAR(tmpMeta18);
              omc_UnorderedSet_add(threadData, _cref, _set);
            }
          }

          {
            modelica_metatype _cref;
            for (tmpMeta20 = _partial_vars_array; !listEmpty(tmpMeta20); tmpMeta20=MMC_CDR(tmpMeta20))
            {
              _cref = MMC_CAR(tmpMeta20);
              omc_UnorderedSet_add(threadData, _cref, _set);
            }
          }

          tmp22 = ((modelica_integer) 1); tmp23 = 1; tmp24 = arrayLength(_comps);
          if(!(((tmp23 > 0) && (tmp22 > tmp24)) || ((tmp23 < 0) && (tmp22 < tmp24))))
          {
            modelica_integer _i;
            for(_i = ((modelica_integer) 1); in_range_integer(_i, tmp22, tmp24); _i += tmp23)
            {
              omc_NBStrongComponent_collectCrefs(threadData, arrayGet(_comps,_i) /* DAE.ASUB */, _seedCandidates, _partialCandidates, _seed_mapping, _partial_mapping, _map, _set, (modelica_integer)_jacType);
            }
          }

          {
            modelica_metatype _cref;
            for (tmpMeta25 = listReverse(_partial_vars); !listEmpty(tmpMeta25); tmpMeta25=MMC_CDR(tmpMeta25))
            {
              _cref = MMC_CAR(tmpMeta25);
              if(((((modelica_integer)_jacType == 4) || omc_NBVariable_checkCref(threadData, _cref, boxvar_NBVariable_isStateDerivative, _OMC_LIT40)) || omc_NBVariable_checkCref(threadData, _cref, boxvar_NBVariable_isResidual, _OMC_LIT40)))
              {
                if(omc_UnorderedMap_contains(threadData, _cref, _map))
                {
                  _tmp = omc_UnorderedSet_unique__list(threadData, omc_UnorderedMap_getOrFail(threadData, _cref, _map), boxvar_NFComponentRef_hash, boxvar_NFComponentRef_isEqual);

                  tmpMeta27 = mmc_mk_box2(0, _cref, _tmp);
                  tmpMeta26 = mmc_mk_cons(tmpMeta27, _rows);
                  _rows = tmpMeta26;

                  tmpMeta28 = mmc_mk_cons(_cref, _row_vars);
                  _row_vars = tmpMeta28;

                  {
                    modelica_metatype _dep;
                    for (tmpMeta29 = _tmp; !listEmpty(tmpMeta29); tmpMeta29=MMC_CDR(tmpMeta29))
                    {
                      _dep = MMC_CAR(tmpMeta29);
                      tmpMeta30 = mmc_mk_cons(_cref, omc_UnorderedMap_getSafe(threadData, _dep, _map, _OMC_LIT39));
                      omc_UnorderedMap_add(threadData, _dep, tmpMeta30, _map);
                    }
                  }
                }
              }
            }
          }

          {
            modelica_metatype _cref;
            for (tmpMeta33 = listReverse(_seed_vars); !listEmpty(tmpMeta33); tmpMeta33=MMC_CDR(tmpMeta33))
            {
              _cref = MMC_CAR(tmpMeta33);
              if((((modelica_integer)_jacType == 4) || omc_NBVariable_checkCref(threadData, _cref, boxvar_NBVariable_isState, _OMC_LIT42)))
              {
                _tmp = omc_UnorderedSet_unique__list(threadData, omc_UnorderedMap_getSafe(threadData, _cref, _map, _OMC_LIT41), boxvar_NFComponentRef_hash, boxvar_NFComponentRef_isEqual);

                tmpMeta35 = mmc_mk_box2(0, _cref, _tmp);
                tmpMeta34 = mmc_mk_cons(tmpMeta35, _cols);
                _cols = tmpMeta34;

                tmpMeta36 = mmc_mk_cons(_cref, _col_vars);
                _col_vars = tmpMeta36;
              }
            }
          }

          {
            modelica_metatype _col;
            for (tmpMeta38 = _cols; !listEmpty(tmpMeta38); tmpMeta38=MMC_CDR(tmpMeta38))
            {
              _col = MMC_CAR(tmpMeta38);
              /* Pattern-matching assignment */
              tmpMeta39 = _col;
              tmpMeta40 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta39), 2));
              _tmp = tmpMeta40;

              _nnz = _nnz + listLength(_tmp);
            }
          }
          tmpMeta42 = mmc_mk_box6(3, &NBJacobian_SparsityPattern_SPARSITY__PATTERN__desc, _cols, _rows, listReverse(_col_vars), listReverse(_row_vars), mmc_mk_integer(_nnz));
          tmpMeta[0+0] = tmpMeta42;
          tmpMeta[0+1] = _map;
          goto tmp7_done;
        }
        case 2: {
          if (!optionNone(tmp8_1)) goto tmp7_end;
          /* Pattern matching succeeded */
          omc_Error_addMessage(threadData, _OMC_LIT7, _OMC_LIT44);
          goto goto_2;
          goto tmp7_done;
        }
        case 3: {
          
          /* Pattern matching succeeded */
          omc_Error_addMessage(threadData, _OMC_LIT7, _OMC_LIT46);
          goto goto_2;
          goto tmp7_done;
        }
        }
        goto tmp7_end;
        tmp7_end: ;
      }
      goto goto_2;
      goto_2:;
      MMC_THROW_INTERNAL();
      goto tmp7_done;
      tmp7_done:;
    }
  }
  _sparsityPattern = tmpMeta[0+0];
  _map = tmpMeta[0+1];

  _sparsityColoring = omc_NBJacobian_SparsityColoring_PartialD2ColoringAlgC(threadData, _sparsityPattern, (modelica_integer)_jacType);

  if(omc_Flags_isSet(threadData, _OMC_LIT50))
  {
    tmpMeta43 = stringAppend(omc_NBJacobian_SparsityPattern_toString(threadData, _sparsityPattern),_OMC_LIT15);
    tmpMeta44 = stringAppend(tmpMeta43,omc_NBJacobian_SparsityColoring_toString(threadData, _sparsityColoring));
    tmpMeta45 = stringAppend(tmpMeta44,_OMC_LIT15);
    fputs(MMC_STRINGDATA(tmpMeta45),stdout);
  }
  _return: OMC_LABEL_UNUSED
  if (out_sparsityColoring) { *out_sparsityColoring = _sparsityColoring; }
  return _sparsityPattern;
}
modelica_metatype boxptr_NBJacobian_SparsityPattern_create(threadData_t *threadData, modelica_metatype _seedCandidates, modelica_metatype _partialCandidates, modelica_metatype _strongComponents, modelica_metatype _jacType, modelica_metatype *out_sparsityColoring)
{
  modelica_integer tmp1;
  modelica_metatype _sparsityPattern = NULL;
  tmp1 = mmc_unbox_integer(_jacType);
  _sparsityPattern = omc_NBJacobian_SparsityPattern_create(threadData, _seedCandidates, _partialCandidates, _strongComponents, tmp1, out_sparsityColoring);
  /* skip box _sparsityPattern; NBJacobian.SparsityPattern */
  /* skip box _sparsityColoring; NBJacobian.SparsityColoring */
  return _sparsityPattern;
}

DLLDirection
modelica_metatype omc_NBJacobian_SparsityPattern_lazy(threadData_t *threadData, modelica_metatype _seedCandidates, modelica_metatype _partialCandidates, modelica_metatype _strongComponents, modelica_integer _jacType, modelica_metatype *out_sparsityColoring)
{
  modelica_metatype _sparsityPattern = NULL;
  modelica_metatype _sparsityColoring = NULL;
  modelica_metatype _seed_vars = NULL;
  modelica_metatype _partial_vars = NULL;
  modelica_metatype _cols = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype _rows = NULL;
  modelica_metatype tmpMeta2;
  modelica_integer _nnz;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta8;
  modelica_metatype tmpMeta13;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _sparsityPattern has no default value.
  // _sparsityColoring has no default value.
  // _seed_vars has no default value.
  // _partial_vars has no default value.
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _cols = tmpMeta1;
  tmpMeta2 = MMC_REFSTRUCTLIT(mmc_nil);
  _rows = tmpMeta2;
  // _nnz has no default value.
  _seed_vars = omc_NBVariable_VariablePointers_getScalarVarNames(threadData, _seedCandidates);

  _partial_vars = omc_NBVariable_VariablePointers_getScalarVarNames(threadData, _partialCandidates);

  {
    modelica_metatype __omcQ_24tmpVar31;
    modelica_metatype* tmp4;
    modelica_metatype tmpMeta5;
    modelica_metatype tmpMeta6;
    modelica_metatype __omcQ_24tmpVar30;
    modelica_integer tmp7;
    modelica_metatype _s_loopVar = 0;
    modelica_metatype _s;
    _s_loopVar = _seed_vars;
    tmpMeta5 = MMC_REFSTRUCTLIT(mmc_nil);
    __omcQ_24tmpVar31 = tmpMeta5; /* defaultValue */
    tmp4 = &__omcQ_24tmpVar31;
    while(1) {
      tmp7 = 1;
      if (!listEmpty(_s_loopVar)) {
        _s = MMC_CAR(_s_loopVar);
        _s_loopVar = MMC_CDR(_s_loopVar);
        tmp7--;
      }
      if (tmp7 == 0) {
        tmpMeta6 = mmc_mk_box2(0, _s, _partial_vars);
        __omcQ_24tmpVar30 = tmpMeta6;
        *tmp4 = mmc_mk_cons(__omcQ_24tmpVar30,0);
        tmp4 = &MMC_CDR(*tmp4);
      } else if (tmp7 == 1) {
        break;
      } else {
        MMC_THROW_INTERNAL();
      }
    }
    *tmp4 = mmc_mk_nil();
    tmpMeta3 = __omcQ_24tmpVar31;
  }
  _cols = tmpMeta3;

  {
    modelica_metatype __omcQ_24tmpVar33;
    modelica_metatype* tmp9;
    modelica_metatype tmpMeta10;
    modelica_metatype tmpMeta11;
    modelica_metatype __omcQ_24tmpVar32;
    modelica_integer tmp12;
    modelica_metatype _p_loopVar = 0;
    modelica_metatype _p;
    _p_loopVar = _partial_vars;
    tmpMeta10 = MMC_REFSTRUCTLIT(mmc_nil);
    __omcQ_24tmpVar33 = tmpMeta10; /* defaultValue */
    tmp9 = &__omcQ_24tmpVar33;
    while(1) {
      tmp12 = 1;
      if (!listEmpty(_p_loopVar)) {
        _p = MMC_CAR(_p_loopVar);
        _p_loopVar = MMC_CDR(_p_loopVar);
        tmp12--;
      }
      if (tmp12 == 0) {
        tmpMeta11 = mmc_mk_box2(0, _p, _seed_vars);
        __omcQ_24tmpVar32 = tmpMeta11;
        *tmp9 = mmc_mk_cons(__omcQ_24tmpVar32,0);
        tmp9 = &MMC_CDR(*tmp9);
      } else if (tmp12 == 1) {
        break;
      } else {
        MMC_THROW_INTERNAL();
      }
    }
    *tmp9 = mmc_mk_nil();
    tmpMeta8 = __omcQ_24tmpVar33;
  }
  _rows = tmpMeta8;

  _nnz = (listLength(_partial_vars)) * (listLength(_seed_vars));

  tmpMeta13 = mmc_mk_box6(3, &NBJacobian_SparsityPattern_SPARSITY__PATTERN__desc, _cols, _rows, _seed_vars, _partial_vars, mmc_mk_integer(_nnz));
  _sparsityPattern = tmpMeta13;

  _sparsityColoring = omc_NBJacobian_SparsityColoring_lazy(threadData, _sparsityPattern);
  _return: OMC_LABEL_UNUSED
  if (out_sparsityColoring) { *out_sparsityColoring = _sparsityColoring; }
  return _sparsityPattern;
}
modelica_metatype boxptr_NBJacobian_SparsityPattern_lazy(threadData_t *threadData, modelica_metatype _seedCandidates, modelica_metatype _partialCandidates, modelica_metatype _strongComponents, modelica_metatype _jacType, modelica_metatype *out_sparsityColoring)
{
  modelica_integer tmp1;
  modelica_metatype _sparsityPattern = NULL;
  tmp1 = mmc_unbox_integer(_jacType);
  _sparsityPattern = omc_NBJacobian_SparsityPattern_lazy(threadData, _seedCandidates, _partialCandidates, _strongComponents, tmp1, out_sparsityColoring);
  /* skip box _sparsityPattern; NBJacobian.SparsityPattern */
  /* skip box _sparsityColoring; NBJacobian.SparsityColoring */
  return _sparsityPattern;
}

DLLDirection
modelica_string omc_NBJacobian_SparsityPattern_toString(threadData_t *threadData, modelica_metatype _pattern)
{
  modelica_string _str = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta2;
  modelica_metatype _cref = NULL;
  modelica_metatype _dependencies = NULL;
  modelica_boolean _colEmpty;
  modelica_boolean _rowEmpty;
  modelica_metatype tmpMeta3;
  modelica_metatype tmpMeta4;
  modelica_metatype tmpMeta5;
  modelica_metatype tmpMeta6;
  modelica_metatype tmpMeta7;
  modelica_metatype tmpMeta8;
  modelica_metatype tmpMeta9;
  modelica_metatype tmpMeta10;
  modelica_metatype tmpMeta11;
  modelica_metatype tmpMeta12;
  modelica_metatype tmpMeta13;
  modelica_metatype tmpMeta14;
  modelica_metatype tmpMeta15;
  modelica_metatype tmpMeta16;
  modelica_metatype tmpMeta17;
  modelica_metatype tmpMeta18;
  modelica_metatype tmpMeta19;
  modelica_metatype tmpMeta20;
  modelica_metatype tmpMeta21;
  modelica_metatype tmpMeta22;
  modelica_metatype tmpMeta23;
  modelica_metatype tmpMeta24;
  modelica_metatype tmpMeta25;
  modelica_metatype tmpMeta26;
  modelica_metatype tmpMeta27;
  modelica_metatype tmpMeta28;
  modelica_metatype tmpMeta29;
  modelica_metatype tmpMeta30;
  modelica_metatype tmpMeta31;
  modelica_metatype tmpMeta32;
  modelica_metatype tmpMeta33;
  modelica_metatype tmpMeta34;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  tmpMeta1 = stringAppend(_OMC_LIT51,intString(mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_pattern), 6))))));
  tmpMeta2 = stringAppend(tmpMeta1,_OMC_LIT52);
  _str = omc_StringUtil_headline__2(threadData, tmpMeta2);
  // _cref has no default value.
  // _dependencies has no default value.
  _colEmpty = listEmpty((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_pattern), 2))));
  _rowEmpty = listEmpty((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_pattern), 3))));
  tmpMeta3 = stringAppend(_str,_OMC_LIT15);
  tmpMeta4 = stringAppend(tmpMeta3,omc_StringUtil_headline__3(threadData, _OMC_LIT53));
  _str = tmpMeta4;

  tmpMeta5 = stringAppend(_str,omc_List_toString(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_pattern), 4))), boxvar_NFComponentRef_toString, _OMC_LIT54, _OMC_LIT55, _OMC_LIT56, _OMC_LIT57, 1 /* true */, ((modelica_integer) 0)));
  tmpMeta6 = stringAppend(tmpMeta5,_OMC_LIT15);
  _str = tmpMeta6;

  tmpMeta7 = stringAppend(_str,_OMC_LIT15);
  tmpMeta8 = stringAppend(tmpMeta7,omc_StringUtil_headline__3(threadData, _OMC_LIT58));
  _str = tmpMeta8;

  tmpMeta9 = stringAppend(_str,omc_List_toString(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_pattern), 5))), boxvar_NFComponentRef_toString, _OMC_LIT54, _OMC_LIT55, _OMC_LIT56, _OMC_LIT57, 1 /* true */, ((modelica_integer) 0)));
  tmpMeta10 = stringAppend(tmpMeta9,_OMC_LIT15);
  _str = tmpMeta10;

  if((!_colEmpty))
  {
    tmpMeta11 = stringAppend(_str,_OMC_LIT15);
    tmpMeta12 = stringAppend(tmpMeta11,omc_StringUtil_headline__3(threadData, _OMC_LIT59));
    _str = tmpMeta12;

    {
      modelica_metatype _col;
      for (tmpMeta13 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_pattern), 2))); !listEmpty(tmpMeta13); tmpMeta13=MMC_CDR(tmpMeta13))
      {
        _col = MMC_CAR(tmpMeta13);
        /* Pattern-matching assignment */
        tmpMeta14 = _col;
        tmpMeta15 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta14), 1));
        tmpMeta16 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta14), 2));
        _cref = tmpMeta15;
        _dependencies = tmpMeta16;

        tmpMeta17 = stringAppend(_str,_OMC_LIT60);
        tmpMeta18 = stringAppend(tmpMeta17,omc_NFComponentRef_toString(threadData, _cref));
        tmpMeta19 = stringAppend(tmpMeta18,_OMC_LIT61);
        tmpMeta20 = stringAppend(tmpMeta19,omc_NFComponentRef_listToString(threadData, _dependencies));
        tmpMeta21 = stringAppend(tmpMeta20,_OMC_LIT15);
        _str = tmpMeta21;
      }
    }
  }

  if((!_rowEmpty))
  {
    tmpMeta23 = stringAppend(_str,_OMC_LIT15);
    tmpMeta24 = stringAppend(tmpMeta23,omc_StringUtil_headline__3(threadData, _OMC_LIT62));
    _str = tmpMeta24;

    {
      modelica_metatype _row;
      for (tmpMeta25 = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_pattern), 3))); !listEmpty(tmpMeta25); tmpMeta25=MMC_CDR(tmpMeta25))
      {
        _row = MMC_CAR(tmpMeta25);
        /* Pattern-matching assignment */
        tmpMeta26 = _row;
        tmpMeta27 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta26), 1));
        tmpMeta28 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta26), 2));
        _cref = tmpMeta27;
        _dependencies = tmpMeta28;

        tmpMeta29 = stringAppend(_str,_OMC_LIT60);
        tmpMeta30 = stringAppend(tmpMeta29,omc_NFComponentRef_toString(threadData, _cref));
        tmpMeta31 = stringAppend(tmpMeta30,_OMC_LIT63);
        tmpMeta32 = stringAppend(tmpMeta31,omc_NFComponentRef_listToString(threadData, _dependencies));
        tmpMeta33 = stringAppend(tmpMeta32,_OMC_LIT15);
        _str = tmpMeta33;
      }
    }
  }
  _return: OMC_LABEL_UNUSED
  return _str;
}

DLLDirection
modelica_string omc_NBJacobian_jacobianTypeString(threadData_t *threadData, modelica_integer _jacType)
{
  modelica_string _str = NULL;
  modelica_string tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _str has no default value.
  { /* match expression */
    modelica_integer tmp4_1;
    tmp4_1 = (modelica_integer)_jacType;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 5; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (1 != tmp4_1) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = _OMC_LIT64;
          goto tmp3_done;
        }
        case 1: {
          if (2 != tmp4_1) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = _OMC_LIT65;
          goto tmp3_done;
        }
        case 2: {
          if (3 != tmp4_1) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = _OMC_LIT66;
          goto tmp3_done;
        }
        case 3: {
          if (4 != tmp4_1) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = _OMC_LIT67;
          goto tmp3_done;
        }
        case 4: {
          
          /* Pattern matching succeeded */
          tmp1 = _OMC_LIT68;
          goto tmp3_done;
        }
        }
        goto tmp3_end;
        tmp3_end: ;
      }
      goto goto_2;
      goto_2:;
      MMC_THROW_INTERNAL();
      goto tmp3_done;
      tmp3_done:;
    }
  }
  _str = tmp1;
  _return: OMC_LABEL_UNUSED
  return _str;
}
modelica_metatype boxptr_NBJacobian_jacobianTypeString(threadData_t *threadData, modelica_metatype _jacType)
{
  modelica_integer tmp1;
  modelica_string _str = NULL;
  tmp1 = mmc_unbox_integer(_jacType);
  _str = omc_NBJacobian_jacobianTypeString(threadData, tmp1);
  /* skip box _str; String */
  return _str;
}

DLLDirection
modelica_string omc_NBJacobian_toString(threadData_t *threadData, modelica_metatype _jacobian, modelica_string __omcQ_24in_5Fstr)
{
  modelica_string _str = NULL;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _str = __omcQ_24in_5Fstr;
  _str = omc_NBackendDAE_toString(threadData, _jacobian, _str);
  _return: OMC_LABEL_UNUSED
  return _str;
}

DLLDirection
modelica_fnptr omc_NBJacobian_getModule(threadData_t *threadData)
{
  modelica_fnptr _func;
  modelica_fnptr tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  { /* match expression */
    modelica_string tmp4_1;
    tmp4_1 = omc_Flags_getConfigString(threadData, _OMC_LIT91);
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 3; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (8 != MMC_STRLEN(tmp4_1) || strcmp(MMC_STRINGDATA(_OMC_LIT80), MMC_STRINGDATA(tmp4_1)) != 0) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = boxvar_NBJacobian_jacobianSymbolic;
          goto tmp3_done;
        }
        case 1: {
          if (7 != MMC_STRLEN(tmp4_1) || strcmp(MMC_STRINGDATA(_OMC_LIT71), MMC_STRINGDATA(tmp4_1)) != 0) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = boxvar_NBJacobian_jacobianNumeric;
          goto tmp3_done;
        }
        case 2: {
          if (4 != MMC_STRLEN(tmp4_1) || strcmp(MMC_STRINGDATA(_OMC_LIT73), MMC_STRINGDATA(tmp4_1)) != 0) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = boxvar_NBJacobian_jacobianNone;
          goto tmp3_done;
        }
        }
        goto tmp3_end;
        tmp3_end: ;
      }
      goto goto_2;
      goto_2:;
      MMC_THROW_INTERNAL();
      goto tmp3_done;
      tmp3_done:;
    }
  }
  _func = (modelica_fnptr) tmp1;
  _return: OMC_LABEL_UNUSED
  return _func;
}

DLLDirection
modelica_metatype omc_NBJacobian_combine(threadData_t *threadData, modelica_metatype _jacobians, modelica_string _name)
{
  modelica_metatype _jacobian = NULL;
  modelica_integer _jacType;
  modelica_metatype _variables = NULL;
  modelica_metatype tmpMeta1;
  modelica_metatype _unknowns = NULL;
  modelica_metatype tmpMeta2;
  modelica_metatype _knowns = NULL;
  modelica_metatype tmpMeta3;
  modelica_metatype _auxiliaryVars = NULL;
  modelica_metatype tmpMeta4;
  modelica_metatype _aliasVars = NULL;
  modelica_metatype tmpMeta5;
  modelica_metatype _diffVars = NULL;
  modelica_metatype tmpMeta6;
  modelica_metatype _dependencies = NULL;
  modelica_metatype tmpMeta7;
  modelica_metatype _resultVars = NULL;
  modelica_metatype tmpMeta8;
  modelica_metatype _tmpVars = NULL;
  modelica_metatype tmpMeta9;
  modelica_metatype _seedVars = NULL;
  modelica_metatype tmpMeta10;
  modelica_metatype _comps = NULL;
  modelica_metatype tmpMeta11;
  modelica_metatype _col_wise_pattern = NULL;
  modelica_metatype tmpMeta12;
  modelica_metatype _row_wise_pattern = NULL;
  modelica_metatype tmpMeta13;
  modelica_metatype _seed_vars = NULL;
  modelica_metatype tmpMeta14;
  modelica_metatype _partial_vars = NULL;
  modelica_metatype tmpMeta15;
  modelica_integer _nnz;
  modelica_metatype _varData = NULL;
  modelica_metatype _eqData = NULL;
  modelica_metatype _sparsityPattern = NULL;
  modelica_metatype _sparsityColoring = NULL;
  modelica_metatype tmpMeta16;
  modelica_metatype tmpMeta22;
  modelica_metatype tmpMeta31;
  modelica_metatype tmpMeta32;
  modelica_metatype tmpMeta33;
  modelica_metatype tmpMeta34;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _jacobian has no default value.
  // _jacType has no default value.
  tmpMeta1 = MMC_REFSTRUCTLIT(mmc_nil);
  _variables = tmpMeta1;
  tmpMeta2 = MMC_REFSTRUCTLIT(mmc_nil);
  _unknowns = tmpMeta2;
  tmpMeta3 = MMC_REFSTRUCTLIT(mmc_nil);
  _knowns = tmpMeta3;
  tmpMeta4 = MMC_REFSTRUCTLIT(mmc_nil);
  _auxiliaryVars = tmpMeta4;
  tmpMeta5 = MMC_REFSTRUCTLIT(mmc_nil);
  _aliasVars = tmpMeta5;
  tmpMeta6 = MMC_REFSTRUCTLIT(mmc_nil);
  _diffVars = tmpMeta6;
  tmpMeta7 = MMC_REFSTRUCTLIT(mmc_nil);
  _dependencies = tmpMeta7;
  tmpMeta8 = MMC_REFSTRUCTLIT(mmc_nil);
  _resultVars = tmpMeta8;
  tmpMeta9 = MMC_REFSTRUCTLIT(mmc_nil);
  _tmpVars = tmpMeta9;
  tmpMeta10 = MMC_REFSTRUCTLIT(mmc_nil);
  _seedVars = tmpMeta10;
  tmpMeta11 = MMC_REFSTRUCTLIT(mmc_nil);
  _comps = tmpMeta11;
  tmpMeta12 = MMC_REFSTRUCTLIT(mmc_nil);
  _col_wise_pattern = tmpMeta12;
  tmpMeta13 = MMC_REFSTRUCTLIT(mmc_nil);
  _row_wise_pattern = tmpMeta13;
  tmpMeta14 = MMC_REFSTRUCTLIT(mmc_nil);
  _seed_vars = tmpMeta14;
  tmpMeta15 = MMC_REFSTRUCTLIT(mmc_nil);
  _partial_vars = tmpMeta15;
  _nnz = ((modelica_integer) 0);
  // _varData has no default value.
  // _eqData has no default value.
  // _sparsityPattern has no default value.
  _sparsityColoring = omc_NBJacobian_SparsityColoring_lazy(threadData, _OMC_LIT38);
  if(omc_List_hasOneElement(threadData, _jacobians))
  {
    _jacobian = listHead(_jacobians);

    { /* match expression */
      modelica_metatype tmp19_1;
      tmp19_1 = _jacobian;
      {
        volatile mmc_switch_type tmp19;
        int tmp20;
        tmp19 = 0;
        for (; tmp19 < 1; tmp19++) {
          switch (MMC_SWITCH_CAST(tmp19)) {
          case 0: {
            modelica_metatype tmpMeta21;
            if (mmc__uniontype__metarecord__typedef__equal(tmp19_1,1,6) == 0) goto tmp18_end;
            
            /* Pattern matching succeeded */
            tmpMeta21 = MMC_TAGPTR(mmc_alloc_words(8));
            memcpy(MMC_UNTAGPTR(tmpMeta21), MMC_UNTAGPTR(_jacobian), 8*sizeof(modelica_metatype));
            ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta21))[2] = _name;
            _jacobian = tmpMeta21;
            tmpMeta16 = _jacobian;
            goto tmp18_done;
          }
          }
          goto tmp18_end;
          tmp18_end: ;
        }
        goto goto_17;
        goto_17:;
        MMC_THROW_INTERNAL();
        goto tmp18_done;
        tmp18_done:;
      }
    }
    _jacobian = tmpMeta16;
  }
  else
  {
    {
      modelica_metatype _jac;
      for (tmpMeta22 = _jacobians; !listEmpty(tmpMeta22); tmpMeta22=MMC_CDR(tmpMeta22))
      {
        _jac = MMC_CAR(tmpMeta22);
        { /* match expression */
          modelica_metatype tmp25_1;
          tmp25_1 = _jac;
          {
            modelica_metatype _tmpVarData = NULL;
            modelica_metatype _tmpPattern = NULL;
            volatile mmc_switch_type tmp25;
            int tmp26;
            // _tmpVarData has no default value.
            // _tmpPattern has no default value.
            tmp25 = 0;
            for (; tmp25 < 2; tmp25++) {
              switch (MMC_SWITCH_CAST(tmp25)) {
              case 0: {
                modelica_metatype tmpMeta27;
                modelica_metatype tmpMeta28;
                if (mmc__uniontype__metarecord__typedef__equal(tmp25_1,1,6) == 0) goto tmp24_end;
                tmpMeta27 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp25_1), 4));
                if (mmc__uniontype__metarecord__typedef__equal(tmpMeta27,1,10) == 0) goto tmp24_end;
                tmpMeta28 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp25_1), 6));
                
                _tmpVarData = tmpMeta27;
                _tmpPattern = tmpMeta28;
                /* Pattern matching succeeded */
                _jacType = mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_jac), 3))));

                _variables = listAppend(omc_NBVariable_VariablePointers_toList(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tmpVarData), 2)))), _variables);

                _unknowns = listAppend(omc_NBVariable_VariablePointers_toList(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tmpVarData), 3)))), _unknowns);

                _knowns = listAppend(omc_NBVariable_VariablePointers_toList(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tmpVarData), 4)))), _knowns);

                _auxiliaryVars = listAppend(omc_NBVariable_VariablePointers_toList(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tmpVarData), 5)))), _auxiliaryVars);

                _aliasVars = listAppend(omc_NBVariable_VariablePointers_toList(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tmpVarData), 6)))), _aliasVars);

                _diffVars = listAppend(omc_NBVariable_VariablePointers_toList(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tmpVarData), 7)))), _diffVars);

                _dependencies = listAppend(omc_NBVariable_VariablePointers_toList(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tmpVarData), 8)))), _dependencies);

                _resultVars = listAppend(omc_NBVariable_VariablePointers_toList(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tmpVarData), 9)))), _resultVars);

                _tmpVars = listAppend(omc_NBVariable_VariablePointers_toList(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tmpVarData), 10)))), _tmpVars);

                _seedVars = listAppend(omc_NBVariable_VariablePointers_toList(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tmpVarData), 11)))), _seedVars);

                _comps = listAppend(arrayList((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_jac), 5)))), _comps);

                _col_wise_pattern = listAppend((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tmpPattern), 2))), _col_wise_pattern);

                _row_wise_pattern = listAppend((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tmpPattern), 3))), _row_wise_pattern);

                _seed_vars = listAppend((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tmpPattern), 4))), _seed_vars);

                _partial_vars = listAppend((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tmpPattern), 5))), _partial_vars);

                _nnz = _nnz + mmc_unbox_integer((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_tmpPattern), 6))));

                _sparsityColoring = omc_NBJacobian_SparsityColoring_combine(threadData, _sparsityColoring, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_jac), 7))));
                goto tmp24_done;
              }
              case 1: {
                modelica_metatype tmpMeta29;
                modelica_metatype tmpMeta30;
                
                /* Pattern matching succeeded */
                tmpMeta30 = stringAppend(_OMC_LIT92,omc_NBackendDAE_toString(threadData, _jac, _OMC_LIT54));
                tmpMeta29 = mmc_mk_cons(tmpMeta30, MMC_REFSTRUCTLIT(mmc_nil));
                omc_Error_addMessage(threadData, _OMC_LIT7, tmpMeta29);
                goto goto_23;
                goto tmp24_done;
              }
              }
              goto tmp24_end;
              tmp24_end: ;
            }
            goto goto_23;
            goto_23:;
            MMC_THROW_INTERNAL();
            goto tmp24_done;
            tmp24_done:;
          }
        }
        ;
      }
    }

    tmpMeta32 = mmc_mk_box11(4, &NBVariable_VarData_VAR__DATA__JAC__desc, omc_NBVariable_VariablePointers_fromList(threadData, _variables, 0 /* false */), omc_NBVariable_VariablePointers_fromList(threadData, _unknowns, 0 /* false */), omc_NBVariable_VariablePointers_fromList(threadData, _knowns, 0 /* false */), omc_NBVariable_VariablePointers_fromList(threadData, _auxiliaryVars, 0 /* false */), omc_NBVariable_VariablePointers_fromList(threadData, _aliasVars, 0 /* false */), omc_NBVariable_VariablePointers_fromList(threadData, _diffVars, 0 /* false */), omc_NBVariable_VariablePointers_fromList(threadData, _dependencies, 0 /* false */), omc_NBVariable_VariablePointers_fromList(threadData, _resultVars, 0 /* false */), omc_NBVariable_VariablePointers_fromList(threadData, _tmpVars, 0 /* false */), omc_NBVariable_VariablePointers_fromList(threadData, _seedVars, 0 /* false */));
    _varData = tmpMeta32;

    tmpMeta33 = mmc_mk_box6(3, &NBJacobian_SparsityPattern_SPARSITY__PATTERN__desc, _col_wise_pattern, _row_wise_pattern, _seed_vars, _partial_vars, mmc_mk_integer(_nnz));
    _sparsityPattern = tmpMeta33;

    tmpMeta34 = mmc_mk_box7(4, &NBackendDAE_JACOBIAN__desc, _name, mmc_mk_integer((modelica_integer)_jacType), _varData, listArray(_comps), _sparsityPattern, _sparsityColoring);
    _jacobian = tmpMeta34;
  }
  _return: OMC_LABEL_UNUSED
  return _jacobian;
}

DLLDirection
modelica_metatype omc_NBJacobian_nonlinear(threadData_t *threadData, modelica_metatype _seedCandidates, modelica_metatype _partialCandidates, modelica_metatype _equations, modelica_metatype _comps, modelica_metatype __omcQ_24in_5FfuncTree, modelica_string _name, modelica_boolean _init, modelica_metatype *out_funcTree)
{
  modelica_metatype _jacobian = NULL;
  modelica_metatype _funcTree = NULL;
  modelica_fnptr _func;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _jacobian has no default value.
  _funcTree = __omcQ_24in_5FfuncTree;
  _func = (omc_Flags_isSet(threadData, _OMC_LIT96)?boxvar_NBJacobian_jacobianSymbolic:boxvar_NBJacobian_jacobianNumeric);
  _jacobian = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))) ? ((modelica_metatype(*)(threadData_t*, modelica_metatype, modelica_string, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 2))), _name, mmc_mk_integer(4), _seedCandidates, _partialCandidates, _equations, omc_NBVariable_VariablePointers_empty(threadData, ((modelica_integer) 0), 0 /* false */), mmc_mk_some(_comps), _funcTree, mmc_mk_boolean(_init) ,&_funcTree) : ((modelica_metatype(*)(threadData_t*, modelica_string, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype, modelica_metatype)) (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_func), 1)))) (threadData, _name, mmc_mk_integer(4), _seedCandidates, _partialCandidates, _equations, omc_NBVariable_VariablePointers_empty(threadData, ((modelica_integer) 0), 0 /* false */), mmc_mk_some(_comps), _funcTree, mmc_mk_boolean(_init) ,&_funcTree);
  _return: OMC_LABEL_UNUSED
  if (out_funcTree) { *out_funcTree = _funcTree; }
  return _jacobian;
}
modelica_metatype boxptr_NBJacobian_nonlinear(threadData_t *threadData, modelica_metatype _seedCandidates, modelica_metatype _partialCandidates, modelica_metatype _equations, modelica_metatype _comps, modelica_metatype __omcQ_24in_5FfuncTree, modelica_metatype _name, modelica_metatype _init, modelica_metatype *out_funcTree)
{
  modelica_integer tmp1;
  modelica_metatype _jacobian = NULL;
  tmp1 = mmc_unbox_integer(_init);
  _jacobian = omc_NBJacobian_nonlinear(threadData, _seedCandidates, _partialCandidates, _equations, _comps, __omcQ_24in_5FfuncTree, _name, tmp1, out_funcTree);
  /* skip box _jacobian; Option<NBackendDAE> */
  /* skip box _funcTree; NFFlatten.FunctionTreeImpl.Tree */
  return _jacobian;
}

DLLDirection
modelica_metatype omc_NBJacobian_main(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fbdae, modelica_integer _kind)
{
  modelica_metatype _bdae = NULL;
  modelica_fnptr _func;
  modelica_metatype tmpMeta1;
  modelica_metatype tmpMeta[2] __attribute__((unused)) = {0};
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  _bdae = __omcQ_24in_5Fbdae;
  _func = omc_NBJacobian_getModule(threadData);
  { /* match expression */
    modelica_metatype tmp8_1;
    tmp8_1 = _bdae;
    {
      modelica_string _name = NULL;
      modelica_metatype _knowns = NULL;
      modelica_metatype _funcTree = NULL;
      modelica_metatype _oldPartitions = NULL;
      modelica_metatype _newPartitions = NULL;
      modelica_metatype tmpMeta3;
      modelica_metatype _newEvents = NULL;
      modelica_metatype tmpMeta4;
      modelica_metatype _newAlg = NULL;
      modelica_metatype tmpMeta5;
      modelica_metatype _newAlgEvents = NULL;
      modelica_metatype tmpMeta6;
      volatile mmc_switch_type tmp8;
      int tmp9;
      // _name has no default value.
      // _knowns has no default value.
      // _funcTree has no default value.
      // _oldPartitions has no default value.
      tmpMeta3 = MMC_REFSTRUCTLIT(mmc_nil);
      _newPartitions = tmpMeta3;
      tmpMeta4 = MMC_REFSTRUCTLIT(mmc_nil);
      _newEvents = tmpMeta4;
      tmpMeta5 = MMC_REFSTRUCTLIT(mmc_nil);
      _newAlg = tmpMeta5;
      tmpMeta6 = MMC_REFSTRUCTLIT(mmc_nil);
      _newAlgEvents = tmpMeta6;
      tmp8 = 0;
      for (; tmp8 < 2; tmp8++) {
        switch (MMC_SWITCH_CAST(tmp8)) {
        case 0: {
          modelica_metatype tmpMeta10;
          modelica_metatype tmpMeta11;
          modelica_metatype tmpMeta12;
          modelica_string tmp13_c1 __attribute__((unused)) = 0;
          modelica_metatype tmpMeta20;
          modelica_metatype tmpMeta21;
          modelica_metatype tmpMeta22;
          modelica_metatype tmpMeta23;
          modelica_metatype tmpMeta24;
          modelica_metatype tmpMeta25;
          modelica_metatype tmpMeta26;
          modelica_metatype tmpMeta27;
          modelica_metatype tmpMeta28;
          modelica_metatype tmpMeta29;
          modelica_metatype tmpMeta30;
          modelica_metatype tmpMeta31;
          modelica_metatype tmpMeta32;
          modelica_metatype tmpMeta39;
          modelica_metatype tmpMeta40;
          modelica_metatype tmpMeta41;
          modelica_metatype tmpMeta42;
          if (mmc__uniontype__metarecord__typedef__equal(tmp8_1,0,13) == 0) goto tmp7_end;
          tmpMeta10 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp8_1), 10));
          if (mmc__uniontype__metarecord__typedef__equal(tmpMeta10,0,23) == 0) goto tmp7_end;
          tmpMeta11 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmpMeta10), 4));
          tmpMeta12 = MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(tmp8_1), 14));
          _knowns = tmpMeta11;
          _funcTree = tmpMeta12;
          /* Pattern matching succeeded */
          
          
          { /* match expression */
            modelica_integer tmp16_1;
            tmp16_1 = (modelica_integer)_kind;
            {
              volatile mmc_switch_type tmp16;
              int tmp17;
              tmp16 = 0;
              for (; tmp16 < 3; tmp16++) {
                switch (MMC_SWITCH_CAST(tmp16)) {
                case 0: {
                  if (1 != tmp16_1) goto tmp15_end;
                  /* Pattern matching succeeded */
                  tmpMeta[0+0] = (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_bdae), 2)));
                  tmp13_c1 = _OMC_LIT97;
                  goto tmp15_done;
                }
                case 1: {
                  if (6 != tmp16_1) goto tmp15_end;
                  /* Pattern matching succeeded */
                  tmpMeta[0+0] = omc_Util_getOption(threadData, (MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_bdae), 9))));
                  tmp13_c1 = _OMC_LIT98;
                  goto tmp15_done;
                }
                case 2: {
                  modelica_metatype tmpMeta18;
                  modelica_metatype tmpMeta19;
                  
                  /* Pattern matching succeeded */
                  tmpMeta19 = stringAppend(_OMC_LIT99,omc_NBPartition_Partition_kindToString(threadData, (modelica_integer)_kind));
                  tmpMeta18 = mmc_mk_cons(tmpMeta19, MMC_REFSTRUCTLIT(mmc_nil));
                  omc_Error_addMessage(threadData, _OMC_LIT7, tmpMeta18);
                  goto goto_14;
                  goto tmp15_done;
                }
                }
                goto tmp15_end;
                tmp15_end: ;
              }
              goto goto_14;
              goto_14:;
              goto goto_2;
              goto tmp15_done;
              tmp15_done:;
            }
          }
          _oldPartitions = tmpMeta[0+0];
          _name = tmp13_c1;

          if(omc_Flags_isSet(threadData, _OMC_LIT19))
          {
            tmpMeta20 = stringAppend(omc_StringUtil_headline__1(threadData, _OMC_LIT100),_OMC_LIT15);
            fputs(MMC_STRINGDATA(tmpMeta20),stdout);
          }

          {
            modelica_metatype _part;
            for (tmpMeta21 = listReverse(_oldPartitions); !listEmpty(tmpMeta21); tmpMeta21=MMC_CDR(tmpMeta21))
            {
              _part = MMC_CAR(tmpMeta21);
              _part = omc_NBJacobian_partJacobian(threadData, _part, _funcTree, _knowns, _name, omc_NBJacobian_getModule(threadData) ,&_funcTree);

              tmpMeta22 = mmc_mk_cons(_part, _newPartitions);
              _newPartitions = tmpMeta22;
            }
          }

          {
            modelica_metatype _part;
            for (tmpMeta24 = listReverse((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_bdae), 4)))); !listEmpty(tmpMeta24); tmpMeta24=MMC_CDR(tmpMeta24))
            {
              _part = MMC_CAR(tmpMeta24);
              _part = omc_NBJacobian_partJacobian(threadData, _part, _funcTree, _knowns, _name, omc_NBJacobian_getModule(threadData) ,&_funcTree);

              tmpMeta25 = mmc_mk_cons(_part, _newEvents);
              _newEvents = tmpMeta25;
            }
          }

          {
            modelica_metatype _part;
            for (tmpMeta27 = listReverse((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_bdae), 3)))); !listEmpty(tmpMeta27); tmpMeta27=MMC_CDR(tmpMeta27))
            {
              _part = MMC_CAR(tmpMeta27);
              _part = omc_NBJacobian_partJacobian(threadData, _part, _funcTree, _knowns, _name, omc_NBJacobian_getModule(threadData) ,&_funcTree);

              tmpMeta28 = mmc_mk_cons(_part, _newAlg);
              _newAlg = tmpMeta28;
            }
          }

          {
            modelica_metatype _part;
            for (tmpMeta30 = listReverse((MMC_FETCH(MMC_OFFSET(MMC_UNTAGPTR(_bdae), 5)))); !listEmpty(tmpMeta30); tmpMeta30=MMC_CDR(tmpMeta30))
            {
              _part = MMC_CAR(tmpMeta30);
              _part = omc_NBJacobian_partJacobian(threadData, _part, _funcTree, _knowns, _name, omc_NBJacobian_getModule(threadData) ,&_funcTree);

              tmpMeta31 = mmc_mk_cons(_part, _newAlgEvents);
              _newAlgEvents = tmpMeta31;
            }
          }

          { /* match expression */
            modelica_integer tmp35_1;
            tmp35_1 = (modelica_integer)_kind;
            {
              volatile mmc_switch_type tmp35;
              int tmp36;
              tmp35 = 0;
              for (; tmp35 < 3; tmp35++) {
                switch (MMC_SWITCH_CAST(tmp35)) {
                case 0: {
                  modelica_metatype tmpMeta37;
                  if (1 != tmp35_1) goto tmp34_end;
                  /* Pattern matching succeeded */
                  tmpMeta37 = MMC_TAGPTR(mmc_alloc_words(15));
                  memcpy(MMC_UNTAGPTR(tmpMeta37), MMC_UNTAGPTR(_bdae), 15*sizeof(modelica_metatype));
                  ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta37))[2] = _newPartitions;
                  _bdae = tmpMeta37;
                  goto tmp34_done;
                }
                case 1: {
                  modelica_metatype tmpMeta38;
                  if (6 != tmp35_1) goto tmp34_end;
                  /* Pattern matching succeeded */
                  tmpMeta38 = MMC_TAGPTR(mmc_alloc_words(15));
                  memcpy(MMC_UNTAGPTR(tmpMeta38), MMC_UNTAGPTR(_bdae), 15*sizeof(modelica_metatype));
                  ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta38))[9] = mmc_mk_some(_newPartitions);
                  _bdae = tmpMeta38;
                  goto tmp34_done;
                }
                case 2: {
                  
                  /* Pattern matching succeeded */
                  goto tmp34_done;
                }
                }
                goto tmp34_end;
                tmp34_end: ;
              }
              goto goto_33;
              goto_33:;
              goto goto_2;
              goto tmp34_done;
              tmp34_done:;
            }
          }
          ;

          tmpMeta39 = MMC_TAGPTR(mmc_alloc_words(15));
          memcpy(MMC_UNTAGPTR(tmpMeta39), MMC_UNTAGPTR(_bdae), 15*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta39))[4] = _newEvents;
          _bdae = tmpMeta39;

          tmpMeta40 = MMC_TAGPTR(mmc_alloc_words(15));
          memcpy(MMC_UNTAGPTR(tmpMeta40), MMC_UNTAGPTR(_bdae), 15*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta40))[3] = _newAlg;
          _bdae = tmpMeta40;

          tmpMeta41 = MMC_TAGPTR(mmc_alloc_words(15));
          memcpy(MMC_UNTAGPTR(tmpMeta41), MMC_UNTAGPTR(_bdae), 15*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta41))[5] = _newAlgEvents;
          _bdae = tmpMeta41;

          tmpMeta42 = MMC_TAGPTR(mmc_alloc_words(15));
          memcpy(MMC_UNTAGPTR(tmpMeta42), MMC_UNTAGPTR(_bdae), 15*sizeof(modelica_metatype));
          ((modelica_metatype*)MMC_UNTAGPTR(tmpMeta42))[14] = _funcTree;
          _bdae = tmpMeta42;
          tmpMeta1 = _bdae;
          goto tmp7_done;
        }
        case 1: {
          modelica_metatype tmpMeta43;
          modelica_metatype tmpMeta44;
          
          /* Pattern matching succeeded */
          tmpMeta44 = stringAppend(_OMC_LIT99,omc_NBackendDAE_toString(threadData, _bdae, _OMC_LIT54));
          tmpMeta43 = mmc_mk_cons(tmpMeta44, MMC_REFSTRUCTLIT(mmc_nil));
          omc_Error_addMessage(threadData, _OMC_LIT7, tmpMeta43);
          goto goto_2;
          goto tmp7_done;
        }
        }
        goto tmp7_end;
        tmp7_end: ;
      }
      goto goto_2;
      goto_2:;
      MMC_THROW_INTERNAL();
      goto tmp7_done;
      tmp7_done:;
    }
  }
  _bdae = tmpMeta1;
  _return: OMC_LABEL_UNUSED
  return _bdae;
}
modelica_metatype boxptr_NBJacobian_main(threadData_t *threadData, modelica_metatype __omcQ_24in_5Fbdae, modelica_metatype _kind)
{
  modelica_integer tmp1;
  modelica_metatype _bdae = NULL;
  tmp1 = mmc_unbox_integer(_kind);
  _bdae = omc_NBJacobian_main(threadData, __omcQ_24in_5Fbdae, tmp1);
  /* skip box _bdae; NBackendDAE */
  return _bdae;
}

DLLDirection
modelica_boolean omc_NBJacobian_isDynamic(threadData_t *threadData, modelica_integer _jacType)
{
  modelica_boolean _b;
  modelica_boolean tmp1 = 0;
  MMC_SO();
  _tailrecursive: OMC_LABEL_UNUSED
  // _b has no default value.
  { /* match expression */
    modelica_integer tmp4_1;
    tmp4_1 = (modelica_integer)_jacType;
    {
      volatile mmc_switch_type tmp4;
      int tmp5;
      tmp4 = 0;
      for (; tmp4 < 3; tmp4++) {
        switch (MMC_SWITCH_CAST(tmp4)) {
        case 0: {
          if (1 != tmp4_1) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = 1 /* true */;
          goto tmp3_done;
        }
        case 1: {
          if (2 != tmp4_1) goto tmp3_end;
          /* Pattern matching succeeded */
          tmp1 = 1 /* true */;
          goto tmp3_done;
        }
        case 2: {
          
          /* Pattern matching succeeded */
          tmp1 = 0 /* false */;
          goto tmp3_done;
        }
        }
        goto tmp3_end;
        tmp3_end: ;
      }
      goto goto_2;
      goto_2:;
      MMC_THROW_INTERNAL();
      goto tmp3_done;
      tmp3_done:;
    }
  }
  _b = tmp1;
  _return: OMC_LABEL_UNUSED
  return _b;
}
modelica_metatype boxptr_NBJacobian_isDynamic(threadData_t *threadData, modelica_metatype _jacType)
{
  modelica_integer tmp1;
  modelica_boolean _b;
  modelica_metatype out_b;
  tmp1 = mmc_unbox_integer(_jacType);
  _b = omc_NBJacobian_isDynamic(threadData, tmp1);
  out_b = mmc_mk_icon(_b);
  return out_b;
}

