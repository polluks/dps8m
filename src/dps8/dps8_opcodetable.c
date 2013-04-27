/**
 * \file dps8_opcodetable.c
 * \project dps8
*/

//#include <string.h>

#include "dps8.h"

#ifndef VM_DPS8
#define EMULATOR_ONLY
#endif

struct opCode NonEISopcodes[01000] = {
    /* 000 */
    {},
    {"mme", 0},
    {"drl", 0},
    {},
    {"mme2", 0},
    {"mme3", 0},
    {},
    {"mme4", 0},
    {},
    {"nop", PREPARE_CA, 0},
    {"puls1", 0},
    {"puls2", 0},
    {},
    {"cioc", 0},
    {},
    {},
    {"adlx0", READ_OPERAND, 0},
    {"adlx1", READ_OPERAND, 0},
    {"adlx2", READ_OPERAND, 0},
    {"adlx3", READ_OPERAND, 0},
    {"adlx4", READ_OPERAND, 0},
    {"adlx5", READ_OPERAND, 0},
    {"adlx6", READ_OPERAND, 0},
    {"adlx7", READ_OPERAND, 0},
    {},
    {},
    {"ldqc", READ_OPERAND | STORE_OPERAND, 0},
    {"adl", READ_OPERAND, 0},
    {"ldac", READ_OPERAND | STORE_OPERAND, 0},
    {"adla", READ_OPERAND, 0},
    {"adlq", READ_OPERAND, 0},
    {"adlaq", READ_YPAIR, 0},
    {"asx0", READ_OPERAND | STORE_OPERAND, 0},
    {"asx1", READ_OPERAND | STORE_OPERAND, 0},
    {"asx2", READ_OPERAND | STORE_OPERAND, 0},
    {"asx3", READ_OPERAND | STORE_OPERAND, 0},
    {"asx4", READ_OPERAND | STORE_OPERAND, 0},
    {"asx5", READ_OPERAND | STORE_OPERAND, 0},
    {"asx6", READ_OPERAND | STORE_OPERAND, 0},
    {"asx7", READ_OPERAND | STORE_OPERAND, 0},
    {"adwp0", READ_OPERAND, 0},
    {"adwp1", READ_OPERAND, 0},
    {"adwp2", READ_OPERAND, 0},
    {"adwp3", READ_OPERAND, 0},
    {"aos", READ_OPERAND | STORE_OPERAND, 0},
    {"asa", READ_OPERAND | STORE_OPERAND, 0},
    {"asq", READ_OPERAND | STORE_OPERAND, 0},
    {"sscr", 0},
    {"adx0", READ_OPERAND, 0},
    {"adx1", READ_OPERAND, 0},
    {"adx2", READ_OPERAND, 0},
    {"adx3", READ_OPERAND, 0},
    {"adx4", READ_OPERAND, 0},
    {"adx5", READ_OPERAND, 0},
    {"adx6", READ_OPERAND, 0},
    {"adx7", READ_OPERAND, 0},
    {},
    {"awca", READ_OPERAND, 0},
    {"awcq", READ_OPERAND, 0},
    {"lreg", READ_OPERAND | READ_YBLOCK8, 0},
    {},
    {"ada", READ_OPERAND, 0},
    {"adq", READ_OPERAND, 0},
    {"adaq", PREPARE_CA | READ_YPAIR, 0},
    
    /* 100 */
    {"cmpx0", READ_OPERAND, 0},
    {"cmpx1", READ_OPERAND, 0},
    {"cmpx2", READ_OPERAND, 0},
    {"cmpx3", READ_OPERAND, 0},
    {"cmpx4", READ_OPERAND, 0},
    {"cmpx5", READ_OPERAND, 0},
    {"cmpx6", READ_OPERAND, 0},
    {"cmpx7", READ_OPERAND, 0},
    {},
    {"cwl", READ_OPERAND, 0},
    {}, {}, {},
    {"cmpa", READ_OPERAND, 0},
    {"cmpq", READ_OPERAND, 0},
    {"cmpaq", PREPARE_CA | READ_YPAIR, 0},
    {"sblx0", READ_OPERAND, 0},
    {"sblx1", READ_OPERAND, 0},
    {"sblx2", READ_OPERAND, 0},
    {"sblx3", READ_OPERAND, 0},
    {"sblx4", READ_OPERAND, 0},
    {"sblx5", READ_OPERAND, 0},
    {"sblx6", READ_OPERAND, 0},
    {"sblx7", READ_OPERAND, 0},
    {}, {}, {}, {}, {},
    {"sbla", READ_OPERAND, 0},
    {"sblq", READ_OPERAND, 0},
    {"sblaq", PREPARE_CA | READ_YPAIR, 0},
    {"ssx0", READ_OPERAND | STORE_OPERAND, 0},
    {"ssx1", READ_OPERAND | STORE_OPERAND, 0},
    {"ssx2", READ_OPERAND | STORE_OPERAND, 0},
    {"ssx3", READ_OPERAND | STORE_OPERAND, 0},
    {"ssx4", READ_OPERAND | STORE_OPERAND, 0},
    {"ssx5", READ_OPERAND | STORE_OPERAND, 0},
    {"ssx6", READ_OPERAND | STORE_OPERAND, 0},
    {"ssx7", READ_OPERAND | STORE_OPERAND, 0},
    {"adwp4", READ_OPERAND, 0},
    {"adwp5", READ_OPERAND, 0},
    {"adwp6", READ_OPERAND, 0},
    {"adwp7", READ_OPERAND, 0},
    {"sdbr", STORE_YPAIR, 0},
    {"ssa", READ_OPERAND | STORE_OPERAND, 0},
    {"ssq", READ_OPERAND | STORE_OPERAND, 0},
    {},
    {"sbx0", READ_OPERAND, 0},
    {"sbx1", READ_OPERAND, 0},
    {"sbx2", READ_OPERAND, 0},
    {"sbx3", READ_OPERAND, 0},
    {"sbx4", READ_OPERAND, 0},
    {"sbx5", READ_OPERAND, 0},
    {"sbx6", READ_OPERAND, 0},
    {"sbx7", READ_OPERAND, 0},
    {},
    {"swca", READ_OPERAND, 0},
    {"swcq", READ_OPERAND, 0},
    {"lpri", PREPARE_CA | READ_YBLOCK16, 0},
    {},
    {"sba", READ_OPERAND, 0},
    {"sbq", READ_OPERAND, 0},
    {"sbaq", PREPARE_CA | READ_YPAIR, 0},
    /* 200 */
    {"cnax0", READ_OPERAND, 0},
    {"cnax1", READ_OPERAND, 0},
    {"cnax2", READ_OPERAND, 0},
    {"cnax3", READ_OPERAND, 0},
    {"cnax4", READ_OPERAND, 0},
    {"cnax5", READ_OPERAND, 0},
    {"cnax6", READ_OPERAND, 0},
    {"cnax7", READ_OPERAND, 0},
    {},
    {"cmk", READ_OPERAND, 0},
    {"absa", 0},
    {"epaq", 0},
    {"sznc", STORE_OPERAND, 0},
    {"cnaa", READ_OPERAND, 0},
    {"cnaq", READ_OPERAND, 0},
    {"cnaaq", READ_YPAIR, 0},
    {"ldx0", READ_OPERAND, 0},
    {"ldx1", READ_OPERAND, 0},
    {"ldx2", READ_OPERAND, 0},
    {"ldx3", READ_OPERAND, 0},
    {"ldx4", READ_OPERAND, 0},
    {"ldx5", READ_OPERAND, 0},
    {"ldx6", READ_OPERAND, 0},
    {"ldx7", READ_OPERAND, 0},
    {"lbar", READ_OPERAND, 0},
    {"rsw", 0},
    {"ldbr", PREPARE_CA | READ_YPAIR, 0},
    {"rmcm", 0},
    {"szn", READ_OPERAND, 0},
    {"lda", READ_OPERAND, 0},
    {"ldq", READ_OPERAND, 0},
    {"ldaq", PREPARE_CA | READ_YPAIR, 0},
    {"orsx0", READ_OPERAND | STORE_OPERAND, 0},
    {"orsx1", READ_OPERAND | STORE_OPERAND, 0},
    {"orsx2", READ_OPERAND | STORE_OPERAND, 0},
    {"orsx3", READ_OPERAND | STORE_OPERAND, 0},
    {"orsx4", READ_OPERAND | STORE_OPERAND, 0},
    {"orsx5", READ_OPERAND | STORE_OPERAND, 0},
    {"orsx6", READ_OPERAND | STORE_OPERAND, 0},
    {"orsx7", READ_OPERAND | STORE_OPERAND, 0},
    {"spri0", PREPARE_CA | STORE_YPAIR, 0},
    {"spbp1", PREPARE_CA | STORE_YPAIR, 0},
    {"spri2", PREPARE_CA | STORE_YPAIR, 0},
    {"spbp3", PREPARE_CA | STORE_YPAIR, 0},
    {"spri", PREPARE_CA | STORE_YPAIR, 0},
    {"orsa", READ_OPERAND | STORE_OPERAND, 0},
    {"orsq", READ_OPERAND | STORE_OPERAND, 0},
    {"lsdp", PREPARE_CA | READ_YBLOCK16, 0},
    {"orx0", READ_OPERAND, 0},
    {"orx1", READ_OPERAND, 0},
    {"orx2", READ_OPERAND, 0},
    {"orx3", READ_OPERAND, 0},
    {"orx4", READ_OPERAND, 0},
    {"orx5", READ_OPERAND, 0},
    {"orx6", READ_OPERAND, 0},
    {"orx7", READ_OPERAND, 0},
    {"tsp0", PREPARE_CA | TRANSFER_INS | TSPN_INS, 0},
    {"tsp1", PREPARE_CA | TRANSFER_INS | TSPN_INS, 0},
    {"tsp2", PREPARE_CA | TRANSFER_INS | TSPN_INS, 0},
    {"tsp3", PREPARE_CA | TRANSFER_INS | TSPN_INS, 0},
    {},
    {"ora", READ_OPERAND, 0},
    {"orq", READ_OPERAND, 0},
    {"oraq", PREPARE_CA | READ_YPAIR, 0},
    /* 300 */
    {"canx0", READ_OPERAND, 0},
    {"canx1", READ_OPERAND, 0},
    {"canx2", READ_OPERAND, 0},
    {"canx3", READ_OPERAND, 0},
    {"canx4", READ_OPERAND, 0},
    {"canx5", READ_OPERAND, 0},
    {"canx6", READ_OPERAND, 0},
    {"canx7", READ_OPERAND, 0},
    {"eawp0", PREPARE_CA, 0},
    {"easp0", PREPARE_CA, 0},
    {"eawp2", PREPARE_CA, 0},
    {"easp2", PREPARE_CA, 0},
    {},
    {"cana", READ_OPERAND, 0},
    {"canq", READ_OPERAND, 0},
    {"canaq", READ_YPAIR, 0},
    {"lcx0", READ_OPERAND, 0},
    {"lcx1", READ_OPERAND, 0},
    {"lcx2", READ_OPERAND, 0},
    {"lcx3", READ_OPERAND, 0},
    {"lcx4", READ_OPERAND, 0},
    {"lcx5", READ_OPERAND, 0},
    {"lcx6", READ_OPERAND, 0},
    {"lcx7", READ_OPERAND, 0},
    {"eawp4", PREPARE_CA, 0},
    {"easp4", PREPARE_CA, 0},
    {"eawp6", PREPARE_CA, 0},
    {"easp6", PREPARE_CA, 0},
    {},
    {"lca", READ_OPERAND, 0},
    {"lcq", READ_OPERAND, 0},
    {"lcaq", PREPARE_CA | READ_YPAIR, 0},
    {"ansx0", READ_OPERAND | STORE_OPERAND, 0},
    {"ansx1", READ_OPERAND | STORE_OPERAND, 0},
    {"ansx2", READ_OPERAND | STORE_OPERAND, 0},
    {"ansx3", READ_OPERAND | STORE_OPERAND, 0},
    {"ansx4", READ_OPERAND | STORE_OPERAND, 0},
    {"ansx5", READ_OPERAND | STORE_OPERAND, 0},
    {"ansx6", READ_OPERAND | STORE_OPERAND, 0},
    {"ansx7", READ_OPERAND | STORE_OPERAND, 0},
    {"epp0", PREPARE_CA, 0},
    {"epbp1", 0},
    {"epp2", PREPARE_CA, 0},
    {"epbp3", 0},
    {"stac", READ_OPERAND | STORE_OPERAND, 0},
    {"ansa", READ_OPERAND | STORE_OPERAND, 0},
    {"ansq", READ_OPERAND | STORE_OPERAND, 0},
    {"stcd", PREPARE_CA | STORE_YPAIR, 0},
    {"anx0", READ_OPERAND, 0},
    {"anx1", READ_OPERAND, 0},
    {"anx2", READ_OPERAND, 0},
    {"anx3", READ_OPERAND, 0},
    {"anx4", READ_OPERAND, 0},
    {"anx5", READ_OPERAND, 0},
    {"anx6", READ_OPERAND, 0},
    {"anx7", READ_OPERAND, 0},
    {"epp4", PREPARE_CA, 0},
    {"epbp5", 0},
    {"epp6", PREPARE_CA, 0},
    {"epbp7", 0},
    {},
    {"ana", READ_OPERAND, 0},
    {"anq", READ_OPERAND, 0},
    {"anaq",PREPARE_CA | READ_YPAIR,  0},
    /* 400 */
    {},
    {"mpf", READ_OPERAND, 0},
    {"mpy", READ_OPERAND, 0},
    {}, {},
    {"cmg", READ_OPERAND, 0},
    {}, {}, {},
    {"lde", READ_OPERAND, 0},
    {},
    {"rscr", 0, 0},
    {},
    {"ade", READ_OPERAND, 0},
    {}, {}, {},
    {"ufm", READ_OPERAND, 0},
    {},
    {"dufm", PREPARE_CA | READ_YPAIR, 0},
    {},
    {"fcmg", READ_OPERAND, 0},
    {},
    {"dfcmg", PREPARE_CA | READ_YPAIR, 0},
    {"fszn", READ_OPERAND, 0},
    {"fld", READ_OPERAND, 0},
    {},
    {"dfld", PREPARE_CA | READ_YPAIR, 0},
    {},
    {"ufa", READ_OPERAND, 0},
    {},
    {"dufa", PREPARE_CA | READ_YPAIR, 0},
    {"sxl0", READ_OPERAND | STORE_OPERAND, 0},
    {"sxl1", READ_OPERAND | STORE_OPERAND, 0},
    {"sxl2", READ_OPERAND | STORE_OPERAND, 0},
    {"sxl3", READ_OPERAND | STORE_OPERAND, 0},
    {"sxl4", READ_OPERAND | STORE_OPERAND, 0},
    {"sxl5", READ_OPERAND | STORE_OPERAND, 0},
    {"sxl6", READ_OPERAND | STORE_OPERAND, 0},
    {"sxl7", READ_OPERAND | STORE_OPERAND, 0},
    {"stz", STORE_OPERAND, 0},
    {"smic", 0},
    {"scpr", PREPARE_CA | STORE_YPAIR, 0},
    {},
    {"stt", STORE_OPERAND, 0},
    {"fst", STORE_OPERAND, 0},
    {"ste", READ_OPERAND | STORE_OPERAND, 0},
    {"dfst", PREPARE_CA | STORE_YPAIR, 0},
    {},
    {"fmp", READ_OPERAND, 0},
    {},
    {"dfmp", PREPARE_CA | READ_YPAIR, 0},
    {}, {}, {}, {},
    {"fstr", STORE_OPERAND, 0},
    {"frd", 0},
    {"dfstr", PREPARE_CA | STORE_YPAIR, 0},
    {"dfrd", 0},
    {},
    {"fad", READ_OPERAND, 0},
    {},
    {"dfad", PREPARE_CA | READ_YPAIR, 0},
    /* 500 */
    {"rpl", READ_OPERAND, 0},   // really wierd XXXX
    {}, {}, {}, {},
    {"bcd", READ_OPERAND, 0},
    {"div", READ_OPERAND, 0},
    {"dvf", READ_OPERAND, 0},
    {}, {}, {},
    {"fneg", 0},
    {},
    {"fcmp", READ_OPERAND, 0},
    {},
    {"dfcmp", PREPARE_CA | READ_YPAIR, 0},
    {"rpt", 0, 0, 0},
    {}, {}, {}, {},
    {"fdi", READ_OPERAND, 0},
    {},
    {"dfdi", READ_OPERAND, 0},
    {},
    {"neg", 0},
    {"cams", 0},
    {"negl", 0},
    {},
    {"ufs", READ_OPERAND, 0},
    {},
    {"dufs", PREPARE_CA | READ_YPAIR, 0},
    {"sprp0", STORE_OPERAND, 0},
    {"sprp1", STORE_OPERAND, 0},
    {"sprp2", STORE_OPERAND, 0},
    {"sprp3", STORE_OPERAND, 0},
    {"sprp4", STORE_OPERAND, 0},
    {"sprp5", STORE_OPERAND, 0},
    {"sprp6", STORE_OPERAND, 0},
    {"sprp7", STORE_OPERAND, 0},
    {"sbar", STORE_OPERAND, 0},
    {"stba", READ_OPERAND | STORE_OPERAND | NO_TAG, 0},
    {"stbq", READ_OPERAND | STORE_OPERAND | NO_TAG, 0},
    {"smcm", 0},
    {"stc1", STORE_OPERAND, 0},
    {}, {},
    {"ssdp", PREPARE_CA | STORE_YBLOCK16, 0},
    {"rpd", 0},
    {}, {}, {}, {},
    {"fdv", READ_OPERAND, 0},
    {},
    {"dfdv", PREPARE_CA | READ_YPAIR, 0},
    {}, {}, {},
    {"fno", 0},
    {},
    {"fsb", READ_OPERAND, 0},
    {},
    {"dfsb", PREPARE_CA | READ_YPAIR, 0},
    /* 600 */
    {"tze", PREPARE_CA | TRANSFER_INS, 0},
    {"tnz", PREPARE_CA | TRANSFER_INS, 0},
    {"tnc", PREPARE_CA | TRANSFER_INS, 0},
    {"trc", PREPARE_CA | TRANSFER_INS, 0},
    {"tmi", PREPARE_CA | TRANSFER_INS, 0},
    {"tpl", PREPARE_CA | TRANSFER_INS, 0},
    {},
    {"ttf", PREPARE_CA | TRANSFER_INS, 0},
    {"rtcd", PREPARE_CA | READ_YPAIR | TRANSFER_INS, 0},
    {}, {},
    {"rcu", PREPARE_CA | READ_YBLOCK8, 0},
    {"teo", PREPARE_CA | TRANSFER_INS, 0},
    {"teu", PREPARE_CA | TRANSFER_INS, 0},
    {"dis", 0},
    {"tov", PREPARE_CA | TRANSFER_INS, 0},
    {"eax0", PREPARE_CA, 0},
    {"eax1", PREPARE_CA, 0},
    {"eax2", PREPARE_CA, 0},
    {"eax3", PREPARE_CA, 0},
    {"eax4", PREPARE_CA, 0},
    {"eax5", PREPARE_CA, 0},
    {"eax6", PREPARE_CA, 0},
    {"eax7", PREPARE_CA, 0},
    {"ret", READ_OPERAND | TRANSFER_INS, 0},
    {}, {},
    {"rccl", 0},
    {"ldi", READ_OPERAND, 0},
    {"eaa", PREPARE_CA, 0},
    {"eaq", PREPARE_CA, 0},
    {"ldt", READ_OPERAND, 0},
    {"ersx0", READ_OPERAND | STORE_OPERAND, 0},
    {"ersx1", READ_OPERAND | STORE_OPERAND, 0},
    {"ersx2", READ_OPERAND | STORE_OPERAND, 0},
    {"ersx3", READ_OPERAND | STORE_OPERAND, 0},
    {"ersx4", READ_OPERAND | STORE_OPERAND, 0},
    {"ersx5", READ_OPERAND | STORE_OPERAND, 0},
    {"ersx6", READ_OPERAND | STORE_OPERAND, 0},
    {"ersx7", READ_OPERAND | STORE_OPERAND, 0},
    {"spri4", PREPARE_CA | STORE_YPAIR, 0},
    {"spbp5", PREPARE_CA | STORE_YPAIR, 0},
    {"spri6", PREPARE_CA | STORE_YPAIR, 0},
    {"spbp7", PREPARE_CA | STORE_YPAIR, 0},
    {"stacq", READ_OPERAND | STORE_OPERAND, 0},
    {"ersa", READ_OPERAND | STORE_OPERAND, 0},
    {"ersq", READ_OPERAND | STORE_OPERAND, 0},
    {"scu", PREPARE_CA | STORE_YBLOCK8, 0},
    {"erx0", READ_OPERAND, 0},
    {"erx1", READ_OPERAND, 0},
    {"erx2", READ_OPERAND, 0},
    {"erx3", READ_OPERAND, 0},
    {"erx4", READ_OPERAND, 0},
    {"erx5", READ_OPERAND, 0},
    {"erx6", READ_OPERAND, 0},
    {"erx7", READ_OPERAND, 0},
    {"tsp4", PREPARE_CA | TRANSFER_INS | TSPN_INS, 0},
    {"tsp5", PREPARE_CA | TRANSFER_INS | TSPN_INS, 0},
    {"tsp6", PREPARE_CA | TRANSFER_INS | TSPN_INS, 0},
    {"tsp7", PREPARE_CA | TRANSFER_INS | TSPN_INS, 0},
    {"lcpr", PREPARE_CA | READ_OPERAND, 0},
    {"era", READ_OPERAND, 0},
    {"erq", READ_OPERAND, 0},
    {"eraq", PREPARE_CA | READ_YPAIR, 0},
    /* 700 */
    {"tsx0", PREPARE_CA | TRANSFER_INS, 0},
    {"tsx1", PREPARE_CA | TRANSFER_INS, 0},
    {"tsx2", PREPARE_CA | TRANSFER_INS, 0},
    {"tsx3", PREPARE_CA | TRANSFER_INS, 0},
    {"tsx4", PREPARE_CA | TRANSFER_INS, 0},
    {"tsx5", PREPARE_CA | TRANSFER_INS, 0},
    {"tsx6", PREPARE_CA | TRANSFER_INS, 0},
    {"tsx7", PREPARE_CA | TRANSFER_INS, 0},
    {"tra", PREPARE_CA | TRANSFER_INS, 0},
    {}, {},
    {"call6", PREPARE_CA | TRANSFER_INS | CALL6_INS, 0},
    {},
    {"tss", PREPARE_CA | TRANSFER_INS, 0},
    {"xec", READ_OPERAND, 0},
    {"xed", PREPARE_CA | READ_YPAIR, 0}, // ????
    {"lxl0", READ_OPERAND, 0},
    {"lxl1", READ_OPERAND, 0},
    {"lxl2", READ_OPERAND, 0},
    {"lxl3", READ_OPERAND, 0},
    {"lxl4", READ_OPERAND, 0},
    {"lxl5", READ_OPERAND, 0},
    {"lxl6", READ_OPERAND, 0},
    {"lxl7", READ_OPERAND, 0},
    {},
    {"ars", 0},
    {"qrs", 0},
    {"lrs", 0},
    {},
    {"als", 0},
    {"qls", 0},
    {"lls", 0},
    {"stx0", READ_OPERAND | STORE_OPERAND, 0},
    {"stx1", READ_OPERAND | STORE_OPERAND, 0},
    {"stx2", READ_OPERAND | STORE_OPERAND, 0},
    {"stx3", READ_OPERAND | STORE_OPERAND, 0},
    {"stx4", READ_OPERAND | STORE_OPERAND, 0},
    {"stx5", READ_OPERAND | STORE_OPERAND, 0},
    {"stx6", READ_OPERAND | STORE_OPERAND, 0},
    {"stx7", READ_OPERAND | STORE_OPERAND, 0},
    {"stc2", READ_OPERAND | STORE_OPERAND, 0},
    {"stca", READ_OPERAND | STORE_OPERAND | NO_TAG, 0},
    {"stcq", READ_OPERAND | STORE_OPERAND | NO_TAG, 0},
    {"sreg", PREPARE_CA | STORE_YBLOCK8, 0},
    {"sti", READ_OPERAND | STORE_OPERAND, 0},
    {"sta", STORE_OPERAND, 0},
    {"stq", STORE_OPERAND, 0},
    {"staq", PREPARE_CA | STORE_YPAIR, 0},
    {"lprp0", READ_OPERAND, 0},
    {"lprp1", READ_OPERAND, 0},
    {"lprp2", READ_OPERAND, 0},
    {"lprp3", READ_OPERAND, 0},
    {"lprp4", READ_OPERAND, 0},
    {"lprp5", READ_OPERAND, 0},
    {"lprp6", READ_OPERAND, 0},
    {"lprp7", READ_OPERAND, 0},
    {},
    {"arl", 0},
    {"qrl", 0},
    {"lrl", 0},
    {"gtb", 0},
    {"alr", 0},
    {"qlr", 0},
    {"llr", 0}

};

/* TODO: bit27=1 opcodes, EIS */
struct opCode EISopcodes[01000] = {
     /* 000 - 017 */ {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {},
     /* 020 - 037 */ {"mve", IGN_B29, 0, 3}, {}, {}, {}, {"mvne", IGN_B29, 0, 3}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {},
     /* 040 - 057 */ {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {},
     /* 060 - 077 */ {"csl", IGN_B29, 0, 2}, {"csr", IGN_B29, 0, 2}, {}, {}, {"sztl", IGN_B29, 0, 2},  {"sztr", IGN_B29, 0, 2},{"cmpb", IGN_B29, 0, 2}, {}, {}, {}, {}, {}, {}, {}, {}, {},
     /* 100 - 117 */ {"mlr", IGN_B29, 0, 2}, {"mrl", IGN_B29, 0, 2}, {}, {}, {}, {}, {"cmpc", IGN_B29, 0, 2}, {}, {}, {}, {}, {}, {}, {}, {}, {},
     /* 120 - 137 */ {"scd", IGN_B29, 0, 3}, {"scdr", IGN_B29, 0, 3}, {}, {}, {"scm", IGN_B29, 0, 3},{"scmr", IGN_B29, 0, 3}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {},
     /* 140 - 157 */ {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {"sptr", 0}, {}, {}, {},
     /* 167 - 177 */ {"mvt", IGN_B29, 0, 3}, {}, {}, {}, {"tct", IGN_B29, 0, 3}, {"tctr", IGN_B29, 0, 3}, {}, {}, {}, {}, {}, {"lptr", 0}, {}, {}, {}, {},
     /* 200 - 217 */ {}, {}, {"ad2d", IGN_B29, 0, 2}, {"sb2d", IGN_B29, 0, 2}, {}, {}, {"mp2d", IGN_B29, 0, 2}, {"dv2d", IGN_B29, 0, 2}, {}, {}, {}, {}, {}, {}, {}, {},
     /* 220 - 237 */ {}, {}, {"ad3d", IGN_B29, 0, 3}, {"sb3d", IGN_B29, 0, 3}, {}, {}, {"mp3d", IGN_B29, 0, 3}, {"dv3d", IGN_B29, 0, 3}, {}, {}, {"lsdr", 0}, {}, {}, {}, {}, {},
     /* 240 - 257 */ {}, {}, {}, {}, {}, {}, {}, {},
    {"spbp0", PREPARE_CA | STORE_YPAIR, 0},
    {"spri1", PREPARE_CA | STORE_YPAIR, 0},
    {"spbp2", PREPARE_CA | STORE_YPAIR, 0},
    {"spri3", PREPARE_CA | STORE_YPAIR, 0},
    {"ssdr", 0}, {}, {}, {"lptp", 0},
     /* 260 - 277 */ {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {},
     /* 300 - 317 */ {"mvn", IGN_B29, 0, 3}, {"btd", IGN_B29, 0, 2}, {}, {"cmpn", IGN_B29, 0, 2}, {}, {"dtb", IGN_B29, 0, 2}, {}, {}, {"easp1", PREPARE_CA, 0}, {"eawp1", PREPARE_CA, 0}, {"easp3", PREPARE_CA, 0}, {"eawp3", PREPARE_CA, 0}, {}, {}, {}, {},
     /* 320 - 337 */ {}, {}, {}, {}, {}, {}, {}, {}, {"easp5", PREPARE_CA, 0}, {"eawp5",PREPARE_CA, 0}, {"easp7", PREPARE_CA, 0}, {"eawp7", PREPARE_CA,  0}, {}, {}, {}, {},
     /* 340 - 357 */ {}, {}, {}, {}, {}, {}, {}, {}, {"epbp0", 0}, {"epp1", PREPARE_CA, 0}, {"epbp2", 0}, {"epp3", PREPARE_CA, 0}, {}, {}, {}, {},
     /* 360 - 377 */ {}, {}, {}, {}, {}, {}, {}, {}, {"epbp4", 0}, {"epp5", PREPARE_CA, 0}, {"epbp6", 0}, {"epp7", PREPARE_CA, 0}, {}, {}, {}, {},
     /* 400 - 417 */ {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {},
#ifdef EMULATOR_ONLY
     /* 420 - 437 */
    {"emcall", IGN_B29, 0},  // we add a emulator call instruction for SIMH use ONLY! (opcode 0420(1))
  
#ifdef DEPRECIATED
    // with the lack of a stack it makes it very cumbersome to write decent code for reentrant subroutines.
    // Yes, I *might* be able to use the DI, ID tally modifications, but you need to setup a indirect stack word to reference -
    // and you couldn't easily do stack offsets, w/o another indirect word, etc.

    // I spoze' that if I added macro's to the assembler I probably could do this utilizing the native ISA,
    // but that *ain't* happening any time soon.

    // So, let's add some instructions.

    {"callx", READ_OPERAND | TRANSFER_INS, 0},// and in the spirit of AIM-072...
    {"exit",                 TRANSFER_INS, 0},
    
    // how 'bout push/pop a/q
    {"pusha", 0, 0}, // push A onto stack via Xn
    {"popa",  0, 0}, // pop word from stack via Xn into A
    {"pushq", 0, 0}, // push Q onto stack via Xn
    {"popq",  0, 0}, // pop word from stack via Xn into Q
#else
    {}, {}, {}, {}, {}, {},
#endif
    
    {}, {}, {}, {}, {}, {}, {}, {}, {},
    
    
#else
     /* 420 - 437 */ {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {},
#endif
     /* 440 - 457 */ {}, {}, {}, {"sareg", PREPARE_CA | STORE_YBLOCK8, 0}, {}, {}, {}, {"spl", 0}, {}, {}, {}, {}, {}, {}, {}, {},
     /* 460 - 477 */ {}, {}, {}, {"lareg", PREPARE_CA | READ_YBLOCK8, 0}, {}, {}, {}, {"lpl", 0}, {}, {}, {}, {}, {}, {}, {}, {},
     /* 500 - 517 */ {"a9bd", IGN_B29, 0}, {"a6bd", IGN_B29, 0}, {"a4bd", IGN_B29, 0}, {"abd", IGN_B29, 0}, {}, {}, {}, {"awd", IGN_B29, 0}, {}, {}, {}, {}, {}, {}, {}, {},
     /* 520 - 537 */ {"s9bd", IGN_B29, 0}, {"s6bd", IGN_B29, 0}, {"s4bd", IGN_B29, 0}, {"sbd", IGN_B29, 0}, {}, {}, {}, {"swd", IGN_B29, 0}, {}, {}, {"camp", 0}, {}, {}, {}, {}, {},
     /* 540 - 557 */
    {"ara0", RMW, 0},
    {"ara1", RMW, 0},
    {"ara2", RMW, 0},
    {"ara3", RMW, 0},
    {"ara4", RMW, 0},
    {"ara5", RMW, 0},
    {"ara6", RMW, 0},
    {"ara7", RMW, 0},
    {}, {}, {}, {}, {}, {}, {}, {"sptp", 0},
     /* 560 - 577 */
    {"aar0", READ_OPERAND, 0},
    {"aar1", READ_OPERAND, 0},
    {"aar2", READ_OPERAND, 0},
    {"aar3", READ_OPERAND, 0},
    {"aar4", READ_OPERAND, 0},
    {"aar5", READ_OPERAND, 0},
    {"aar6", READ_OPERAND, 0},
    {"aar7", READ_OPERAND, 0},
    {}, {}, {}, {}, {}, {}, {}, {},
    /* 600 - 617 */
    {"trtn", PREPARE_CA | TRANSFER_INS, 0},
    {"trtf", PREPARE_CA | TRANSFER_INS, 0}, {}, {},
    {"tmoz", PREPARE_CA | TRANSFER_INS, 0},
    {"tpnz", PREPARE_CA | TRANSFER_INS, 0},
    {"ttn",  PREPARE_CA | TRANSFER_INS, 0}, {}, {}, {}, {}, {}, {}, {}, {}, {},
     /* 620 - 637 */ {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {},
     /* 640 - 657 */
    {"arn0", RMW, 0},
    {"arn1", RMW, 0},
    {"arn2", RMW, 0},
    {"arn3", RMW, 0},
    {"arn4", RMW, 0},
    {"arn5", RMW, 0},
    {"arn6", RMW, 0},
    {"arn7", RMW, 0},
    {"spbp4", PREPARE_CA | STORE_YPAIR, 0},
    {"spri5", PREPARE_CA | STORE_YPAIR, 0},
    {"spbp6", PREPARE_CA | STORE_YPAIR, 0},
    {"spri7", PREPARE_CA | STORE_YPAIR, 0}, {}, {}, {}, {},
     /* 660 - 677 */
    {"nar0", READ_OPERAND, 0},
    {"nar1", READ_OPERAND, 0},
    {"nar2", READ_OPERAND, 0},
    {"nar3", READ_OPERAND, 0},
    {"nar4", READ_OPERAND, 0},
    {"nar5", READ_OPERAND, 0},
    {"nar6", READ_OPERAND, 0},
    {"nar7", READ_OPERAND, 0},
    {}, {}, {}, {}, {}, {}, {}, {},
     /* 700 - 717 */ {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {},
     /* 720 - 737 */ {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {}, {},
     /* 740 - 757 */
    {"sar0", RMW, 0},
    {"sar1", RMW, 0},
    {"sar2", RMW, 0},
    {"sar3", RMW, 0},
    {"sar4", RMW, 0},
    {"sar5", RMW, 0},
    {"sar6", RMW, 0},
    {"sar7", RMW, 0},
    {}, {}, {}, {},
    {"sra", STORE_OPERAND, 0},
    {}, {}, {},
     /* 760 - 777 */
    {"lar0", READ_OPERAND, 0},
    {"lar1", READ_OPERAND, 0},
    {"lar2", READ_OPERAND, 0},
    {"lar3", READ_OPERAND, 0},
    {"lar4", READ_OPERAND, 0},
    {"lar5", READ_OPERAND, 0},
    {"lar6", READ_OPERAND, 0},
    {"lar7", READ_OPERAND, 0},
    {}, {}, {}, {},
    {"lra", READ_OPERAND, 0},
    {}, {}, {}
 };


struct adrMods extMods[0100] = {    ///< address modifiers w/ extended info
    /* R */
    {NULL, 0},
    {"au", 1},
    {"qu", 2},
    {"du", 3},
    {"ic", 4},
    {"al", 5},
    {"ql", 6},
    {"dl", 7},
    {"0",  8},
    {"1",  9},
    {"2", 10},
    {"3", 11},
    {"4", 12},
    {"5", 13},
    {"6", 14},
    {"7", 15},

    /* RI */
    {"n*",  16},
    {"au*", 17},
    {"qu*", 18},
    {NULL,  19},
    {"ic*", 20},
    {"al*", 21},
    {"ql*", 22},
    {NULL,  23},
    {"0*",  24},
    {"1*",  25},
    {"2*",  26},
    {"3*",  27},
    {"4*",  28},
    {"5*",  29},
    {"6*",  30},
    {"7*",  31},
    
    /* IT */
    {"f1",  32},
    {"itp", 33},
    {NULL,  34},
    {"its", 35},
    {"sd",  36},
    {"scr", 37},
    {"f2",  38},
    {"f3",  39},
    {"ci",  40},
    {"i",   41},
    {"sc",  42},
    {"ad",  43},
    {"di",  44},
    {"dic", 45},
    {"id",  46},
    {"idc", 47},
    
    /* IR */
    {"*n",  48},
    {"*au", 49},
    {"*qu", 50},
    {"*du", 51},
    {"*ic", 52},
    {"*al", 53},
    {"*ql", 54},
    {"*dl", 55},
    {"*0",  56},
    {"*1",  57},
    {"*2",  58},
    {"*3",  59},
    {"*4",  60},
    {"*5",  61},
    {"*6",  62},
    {"*7",  63},
};

char GEBcdToASCII[64] = ///< from pg 271 CPB1004F_GE635pgmRef_Jul69
{
/* 000 - 007 */    '0', '1', '2', '3', '4', '5', '6', '7',
/* 010 - 017 */    '8', '9', '[', '#', '@', ':', '>', '?',
/* 020 - 027 */    ' ', 'A', 'B', 'C', 'D', 'E', 'F', 'G',
/* 030 - 037 */    'H', 'I', '&', '.', ']', '(', '<', '\\',
/* 040 - 047 */    '^', 'J', 'K', 'L', 'M', 'N', 'O', 'P',
/* 050 - 057 */    'Q', 'R', '-', '$', '*', ')', ';', '\'',
/* 060 - 067 */    '+', '/', 'S', 'T', 'U', 'V', 'W', 'X',
/* 070 - 077 */    'Y', 'Z', '_', ',', '%', '=', '"', '!'
};

char ASCIIToGEBcd[128] =
{
/* 000 - 007 */    -1, -1, -1, -1, -1, -1, -1, -1,
/* 010 - 017 */    -1, -1, -1, -1, -1, -1, -1, -1,
/* 020 - 027 */    -1, -1, -1, -1, -1, -1, -1, -1,
/* 030 - 037 */    -1, -1, -1, -1, -1, -1, -1, -1,
/* 040 - 047 */    16, 63, 62, 11, 43, 60, 26, 47,
/* 050 - 057 */    29, 45, 44, 48, 59, 42, 27, 49,
/* 060 - 067 */     0,  1,  2,  3,  4,  5,  6,  7,
/* 070 - 077 */     8,  9, 13, 46, 30, 61, 14, 15,
/* 100 - 107 */    12, 17, 18, 19, 20, 21, 22, 23,
/* 110 - 117 */    24, 25, 33, 34, 35, 36, 37, 38,
/* 120 - 127 */    39, 40, 41, 50, 51, 52, 53, 54,
/* 130 - 137 */    55, 56, 57, 10, 31, 28, 32, 58,
/* 140 - 147 */    -1, 17, 18, 19, 20, 21, 22, 23,
/* 150 - 157 */    24, 25, 33, 34, 35, 36, 37, 38,
/* 160 - 167 */    39, 40, 41, 50, 51, 52, 53, 54,
/* 170 - 177 */    55, 56, 57, -1, -1, -1, -1, -1,
};
