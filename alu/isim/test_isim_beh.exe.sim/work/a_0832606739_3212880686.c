/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

/* This file is designed for use with ISim build 0x7708f090 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
extern char *IEEE_P_0774719531;
extern char *IEEE_P_2592010699;
static const char *ng2 = "Function compute ended without a return statement";
static const char *ng3 = "Function overflow ended without a return statement";
static const char *ng4 = "E:/Class/5/computer_design/FPGA/alu/alu.vhd";

int ieee_p_0774719531_sub_378705076_2162500114(char *, char *, char *);
char *ieee_p_0774719531_sub_767668596_2162500114(char *, char *, char *, char *, char *, char *);
char *ieee_p_0774719531_sub_767740470_2162500114(char *, char *, char *, char *, char *, char *);
unsigned char ieee_p_2592010699_sub_1605435078_503743352(char *, unsigned char , unsigned char );
unsigned char ieee_p_2592010699_sub_1690584930_503743352(char *, unsigned char );
char *ieee_p_2592010699_sub_1697423399_503743352(char *, char *, char *, char *, char *, char *);
char *ieee_p_2592010699_sub_1735675855_503743352(char *, char *, char *, char *, char *, char *);
char *ieee_p_2592010699_sub_1837678034_503743352(char *, char *, char *, char *);
unsigned char ieee_p_2592010699_sub_2545490612_503743352(char *, unsigned char , unsigned char );
char *ieee_p_2592010699_sub_3293060193_503743352(char *, char *, char *, char *, unsigned char );
char *ieee_p_2592010699_sub_393209765_503743352(char *, char *, char *, char *);
char *ieee_p_2592010699_sub_795620321_503743352(char *, char *, char *, char *, char *, char *);


char *work_a_0832606739_3212880686_sub_1173564927_3057020925(char *t1, char *t2, char *t3, char *t4, char *t5)
{
    char t7[56];
    char t8[16];
    char t13[16];
    char t16[16];
    char t57[16];
    char t71[16];
    char *t0;
    char *t9;
    char *t10;
    int t11;
    unsigned int t12;
    char *t14;
    int t15;
    char *t17;
    int t18;
    unsigned char t19;
    char *t20;
    char *t21;
    unsigned char t22;
    char *t23;
    char *t24;
    unsigned char t25;
    char *t26;
    char *t27;
    char *t28;
    int t29;
    char *t30;
    char *t31;
    int t32;
    char *t33;
    char *t34;
    int t35;
    char *t36;
    int t38;
    char *t39;
    int t41;
    char *t42;
    int t44;
    char *t45;
    int t47;
    char *t48;
    int t50;
    char *t51;
    int t53;
    char *t54;
    int t56;
    char *t58;
    char *t59;
    unsigned int t60;
    char *t61;
    int t62;
    char *t63;
    int t64;
    char *t65;
    int t66;
    char *t67;
    char *t68;
    int t69;
    unsigned int t70;

LAB0:    t9 = (t8 + 0U);
    t10 = (t9 + 0U);
    *((int *)t10) = 3;
    t10 = (t9 + 4U);
    *((int *)t10) = 0;
    t10 = (t9 + 8U);
    *((int *)t10) = -1;
    t11 = (0 - 3);
    t12 = (t11 * -1);
    t12 = (t12 + 1);
    t10 = (t9 + 12U);
    *((unsigned int *)t10) = t12;
    t10 = (t13 + 0U);
    t14 = (t10 + 0U);
    *((int *)t14) = 15;
    t14 = (t10 + 4U);
    *((int *)t14) = 0;
    t14 = (t10 + 8U);
    *((int *)t14) = -1;
    t15 = (0 - 15);
    t12 = (t15 * -1);
    t12 = (t12 + 1);
    t14 = (t10 + 12U);
    *((unsigned int *)t14) = t12;
    t14 = (t16 + 0U);
    t17 = (t14 + 0U);
    *((int *)t17) = 15;
    t17 = (t14 + 4U);
    *((int *)t17) = 0;
    t17 = (t14 + 8U);
    *((int *)t17) = -1;
    t18 = (0 - 15);
    t12 = (t18 * -1);
    t12 = (t12 + 1);
    t17 = (t14 + 12U);
    *((unsigned int *)t17) = t12;
    t17 = (t7 + 4U);
    t19 = (t3 != 0);
    if (t19 == 1)
        goto LAB3;

LAB2:    t20 = (t7 + 12U);
    *((char **)t20) = t8;
    t21 = (t7 + 20U);
    t22 = (t4 != 0);
    if (t22 == 1)
        goto LAB5;

LAB4:    t23 = (t7 + 28U);
    *((char **)t23) = t13;
    t24 = (t7 + 36U);
    t25 = (t5 != 0);
    if (t25 == 1)
        goto LAB7;

LAB6:    t26 = (t7 + 44U);
    *((char **)t26) = t16;
    t27 = (t1 + 7689);
    t29 = xsi_mem_cmp(t27, t3, 4U);
    if (t29 == 1)
        goto LAB9;

LAB20:    t30 = (t1 + 7693);
    t32 = xsi_mem_cmp(t30, t3, 4U);
    if (t32 == 1)
        goto LAB10;

LAB21:    t33 = (t1 + 7697);
    t35 = xsi_mem_cmp(t33, t3, 4U);
    if (t35 == 1)
        goto LAB11;

LAB22:    t36 = (t1 + 7701);
    t38 = xsi_mem_cmp(t36, t3, 4U);
    if (t38 == 1)
        goto LAB12;

LAB23:    t39 = (t1 + 7705);
    t41 = xsi_mem_cmp(t39, t3, 4U);
    if (t41 == 1)
        goto LAB13;

LAB24:    t42 = (t1 + 7709);
    t44 = xsi_mem_cmp(t42, t3, 4U);
    if (t44 == 1)
        goto LAB14;

LAB25:    t45 = (t1 + 7713);
    t47 = xsi_mem_cmp(t45, t3, 4U);
    if (t47 == 1)
        goto LAB15;

LAB26:    t48 = (t1 + 7717);
    t50 = xsi_mem_cmp(t48, t3, 4U);
    if (t50 == 1)
        goto LAB16;

LAB27:    t51 = (t1 + 7721);
    t53 = xsi_mem_cmp(t51, t3, 4U);
    if (t53 == 1)
        goto LAB17;

LAB28:    t54 = (t1 + 7725);
    t56 = xsi_mem_cmp(t54, t3, 4U);
    if (t56 == 1)
        goto LAB18;

LAB29:
LAB19:    t9 = (t1 + 7729);
    t0 = xsi_get_transient_memory(16U);
    memcpy(t0, t9, 16U);
    t14 = (t2 + 0U);
    t27 = (t14 + 0U);
    *((int *)t27) = 1;
    t27 = (t14 + 4U);
    *((int *)t27) = 16;
    t27 = (t14 + 8U);
    *((int *)t27) = 1;
    t11 = (16 - 1);
    t12 = (t11 * 1);
    t12 = (t12 + 1);
    t27 = (t14 + 12U);
    *((unsigned int *)t27) = t12;

LAB1:    return t0;
LAB3:    *((char **)t17) = t3;
    goto LAB2;

LAB5:    *((char **)t21) = t4;
    goto LAB4;

LAB7:    *((char **)t24) = t5;
    goto LAB6;

LAB8:    xsi_error(ng2);
    t0 = 0;
    goto LAB1;

LAB9:    t58 = ieee_p_0774719531_sub_767668596_2162500114(IEEE_P_0774719531, t57, t4, t13, t5, t16);
    t59 = (t57 + 12U);
    t12 = *((unsigned int *)t59);
    t60 = (1U * t12);
    t0 = xsi_get_transient_memory(t60);
    memcpy(t0, t58, t60);
    t61 = (t57 + 0U);
    t62 = *((int *)t61);
    t63 = (t57 + 4U);
    t64 = *((int *)t63);
    t65 = (t57 + 8U);
    t66 = *((int *)t65);
    t67 = (t2 + 0U);
    t68 = (t67 + 0U);
    *((int *)t68) = t62;
    t68 = (t67 + 4U);
    *((int *)t68) = t64;
    t68 = (t67 + 8U);
    *((int *)t68) = t66;
    t69 = (t64 - t62);
    t70 = (t69 * t66);
    t70 = (t70 + 1);
    t68 = (t67 + 12U);
    *((unsigned int *)t68) = t70;
    goto LAB1;

LAB10:    t9 = ieee_p_0774719531_sub_767740470_2162500114(IEEE_P_0774719531, t57, t4, t13, t5, t16);
    t10 = (t57 + 12U);
    t12 = *((unsigned int *)t10);
    t60 = (1U * t12);
    t0 = xsi_get_transient_memory(t60);
    memcpy(t0, t9, t60);
    t14 = (t57 + 0U);
    t11 = *((int *)t14);
    t27 = (t57 + 4U);
    t15 = *((int *)t27);
    t28 = (t57 + 8U);
    t18 = *((int *)t28);
    t30 = (t2 + 0U);
    t31 = (t30 + 0U);
    *((int *)t31) = t11;
    t31 = (t30 + 4U);
    *((int *)t31) = t15;
    t31 = (t30 + 8U);
    *((int *)t31) = t18;
    t29 = (t15 - t11);
    t70 = (t29 * t18);
    t70 = (t70 + 1);
    t31 = (t30 + 12U);
    *((unsigned int *)t31) = t70;
    goto LAB1;

LAB11:    t9 = ieee_p_2592010699_sub_795620321_503743352(IEEE_P_2592010699, t57, t4, t13, t5, t16);
    t10 = (t57 + 12U);
    t12 = *((unsigned int *)t10);
    t60 = (1U * t12);
    t0 = xsi_get_transient_memory(t60);
    memcpy(t0, t9, t60);
    t14 = (t57 + 0U);
    t11 = *((int *)t14);
    t27 = (t57 + 4U);
    t15 = *((int *)t27);
    t28 = (t57 + 8U);
    t18 = *((int *)t28);
    t30 = (t2 + 0U);
    t31 = (t30 + 0U);
    *((int *)t31) = t11;
    t31 = (t30 + 4U);
    *((int *)t31) = t15;
    t31 = (t30 + 8U);
    *((int *)t31) = t18;
    t29 = (t15 - t11);
    t70 = (t29 * t18);
    t70 = (t70 + 1);
    t31 = (t30 + 12U);
    *((unsigned int *)t31) = t70;
    goto LAB1;

LAB12:    t9 = ieee_p_2592010699_sub_1735675855_503743352(IEEE_P_2592010699, t57, t4, t13, t5, t16);
    t10 = (t57 + 12U);
    t12 = *((unsigned int *)t10);
    t60 = (1U * t12);
    t0 = xsi_get_transient_memory(t60);
    memcpy(t0, t9, t60);
    t14 = (t57 + 0U);
    t11 = *((int *)t14);
    t27 = (t57 + 4U);
    t15 = *((int *)t27);
    t28 = (t57 + 8U);
    t18 = *((int *)t28);
    t30 = (t2 + 0U);
    t31 = (t30 + 0U);
    *((int *)t31) = t11;
    t31 = (t30 + 4U);
    *((int *)t31) = t15;
    t31 = (t30 + 8U);
    *((int *)t31) = t18;
    t29 = (t15 - t11);
    t70 = (t29 * t18);
    t70 = (t70 + 1);
    t31 = (t30 + 12U);
    *((unsigned int *)t31) = t70;
    goto LAB1;

LAB13:    t9 = ieee_p_2592010699_sub_1697423399_503743352(IEEE_P_2592010699, t57, t4, t13, t5, t16);
    t10 = (t57 + 12U);
    t12 = *((unsigned int *)t10);
    t60 = (1U * t12);
    t0 = xsi_get_transient_memory(t60);
    memcpy(t0, t9, t60);
    t14 = (t57 + 0U);
    t11 = *((int *)t14);
    t27 = (t57 + 4U);
    t15 = *((int *)t27);
    t28 = (t57 + 8U);
    t18 = *((int *)t28);
    t30 = (t2 + 0U);
    t31 = (t30 + 0U);
    *((int *)t31) = t11;
    t31 = (t30 + 4U);
    *((int *)t31) = t15;
    t31 = (t30 + 8U);
    *((int *)t31) = t18;
    t29 = (t15 - t11);
    t70 = (t29 * t18);
    t70 = (t70 + 1);
    t31 = (t30 + 12U);
    *((unsigned int *)t31) = t70;
    goto LAB1;

LAB14:    t9 = ieee_p_2592010699_sub_1837678034_503743352(IEEE_P_2592010699, t57, t4, t13);
    t10 = (t57 + 12U);
    t12 = *((unsigned int *)t10);
    t60 = (1U * t12);
    t0 = xsi_get_transient_memory(t60);
    memcpy(t0, t9, t60);
    t14 = (t57 + 0U);
    t11 = *((int *)t14);
    t27 = (t57 + 4U);
    t15 = *((int *)t27);
    t28 = (t57 + 8U);
    t18 = *((int *)t28);
    t30 = (t2 + 0U);
    t31 = (t30 + 0U);
    *((int *)t31) = t11;
    t31 = (t30 + 4U);
    *((int *)t31) = t15;
    t31 = (t30 + 8U);
    *((int *)t31) = t18;
    t29 = (t15 - t11);
    t70 = (t29 * t18);
    t70 = (t70 + 1);
    t31 = (t30 + 12U);
    *((unsigned int *)t31) = t70;
    goto LAB1;

LAB15:    t9 = ieee_p_2592010699_sub_3293060193_503743352(IEEE_P_2592010699, t71, t4, t13, (unsigned char)0);
    t10 = (t71 + 12U);
    t12 = *((unsigned int *)t10);
    t12 = (t12 * 1U);
    t11 = ieee_p_0774719531_sub_378705076_2162500114(IEEE_P_0774719531, t5, t16);
    t14 = xsi_vhdl_bitvec_sll(t14, t9, t12, t11);
    t27 = ieee_p_2592010699_sub_393209765_503743352(IEEE_P_2592010699, t57, t14, t71);
    t28 = (t57 + 12U);
    t60 = *((unsigned int *)t28);
    t60 = (t60 * 1U);
    t0 = xsi_get_transient_memory(t60);
    memcpy(t0, t27, t60);
    t30 = (t57 + 0U);
    t15 = *((int *)t30);
    t31 = (t57 + 4U);
    t18 = *((int *)t31);
    t33 = (t57 + 8U);
    t29 = *((int *)t33);
    t34 = (t2 + 0U);
    t36 = (t34 + 0U);
    *((int *)t36) = t15;
    t36 = (t34 + 4U);
    *((int *)t36) = t18;
    t36 = (t34 + 8U);
    *((int *)t36) = t29;
    t32 = (t18 - t15);
    t70 = (t32 * t29);
    t70 = (t70 + 1);
    t36 = (t34 + 12U);
    *((unsigned int *)t36) = t70;
    goto LAB1;

LAB16:    t9 = ieee_p_2592010699_sub_3293060193_503743352(IEEE_P_2592010699, t71, t4, t13, (unsigned char)0);
    t10 = (t71 + 12U);
    t12 = *((unsigned int *)t10);
    t12 = (t12 * 1U);
    t11 = ieee_p_0774719531_sub_378705076_2162500114(IEEE_P_0774719531, t5, t16);
    t14 = xsi_vhdl_bitvec_srl(t14, t9, t12, t11);
    t27 = ieee_p_2592010699_sub_393209765_503743352(IEEE_P_2592010699, t57, t14, t71);
    t28 = (t57 + 12U);
    t60 = *((unsigned int *)t28);
    t60 = (t60 * 1U);
    t0 = xsi_get_transient_memory(t60);
    memcpy(t0, t27, t60);
    t30 = (t57 + 0U);
    t15 = *((int *)t30);
    t31 = (t57 + 4U);
    t18 = *((int *)t31);
    t33 = (t57 + 8U);
    t29 = *((int *)t33);
    t34 = (t2 + 0U);
    t36 = (t34 + 0U);
    *((int *)t36) = t15;
    t36 = (t34 + 4U);
    *((int *)t36) = t18;
    t36 = (t34 + 8U);
    *((int *)t36) = t29;
    t32 = (t18 - t15);
    t70 = (t32 * t29);
    t70 = (t70 + 1);
    t36 = (t34 + 12U);
    *((unsigned int *)t36) = t70;
    goto LAB1;

LAB17:    t9 = ieee_p_2592010699_sub_3293060193_503743352(IEEE_P_2592010699, t71, t4, t13, (unsigned char)0);
    t10 = (t71 + 12U);
    t12 = *((unsigned int *)t10);
    t12 = (t12 * 1U);
    t11 = ieee_p_0774719531_sub_378705076_2162500114(IEEE_P_0774719531, t5, t16);
    t14 = xsi_vhdl_bitvec_sra(t14, t9, t12, t11);
    t27 = ieee_p_2592010699_sub_393209765_503743352(IEEE_P_2592010699, t57, t14, t71);
    t28 = (t57 + 12U);
    t60 = *((unsigned int *)t28);
    t60 = (t60 * 1U);
    t0 = xsi_get_transient_memory(t60);
    memcpy(t0, t27, t60);
    t30 = (t57 + 0U);
    t15 = *((int *)t30);
    t31 = (t57 + 4U);
    t18 = *((int *)t31);
    t33 = (t57 + 8U);
    t29 = *((int *)t33);
    t34 = (t2 + 0U);
    t36 = (t34 + 0U);
    *((int *)t36) = t15;
    t36 = (t34 + 4U);
    *((int *)t36) = t18;
    t36 = (t34 + 8U);
    *((int *)t36) = t29;
    t32 = (t18 - t15);
    t70 = (t32 * t29);
    t70 = (t70 + 1);
    t36 = (t34 + 12U);
    *((unsigned int *)t36) = t70;
    goto LAB1;

LAB18:    t9 = ieee_p_2592010699_sub_3293060193_503743352(IEEE_P_2592010699, t71, t4, t13, (unsigned char)0);
    t10 = (t71 + 12U);
    t12 = *((unsigned int *)t10);
    t12 = (t12 * 1U);
    t11 = ieee_p_0774719531_sub_378705076_2162500114(IEEE_P_0774719531, t5, t16);
    t14 = xsi_vhdl_bitvec_rol(t14, t9, t12, t11);
    t27 = ieee_p_2592010699_sub_393209765_503743352(IEEE_P_2592010699, t57, t14, t71);
    t28 = (t57 + 12U);
    t60 = *((unsigned int *)t28);
    t60 = (t60 * 1U);
    t0 = xsi_get_transient_memory(t60);
    memcpy(t0, t27, t60);
    t30 = (t57 + 0U);
    t15 = *((int *)t30);
    t31 = (t57 + 4U);
    t18 = *((int *)t31);
    t33 = (t57 + 8U);
    t29 = *((int *)t33);
    t34 = (t2 + 0U);
    t36 = (t34 + 0U);
    *((int *)t36) = t15;
    t36 = (t34 + 4U);
    *((int *)t36) = t18;
    t36 = (t34 + 8U);
    *((int *)t36) = t29;
    t32 = (t18 - t15);
    t70 = (t32 * t29);
    t70 = (t70 + 1);
    t36 = (t34 + 12U);
    *((unsigned int *)t36) = t70;
    goto LAB1;

LAB30:;
LAB31:    goto LAB8;

LAB32:    goto LAB8;

LAB33:    goto LAB8;

LAB34:    goto LAB8;

LAB35:    goto LAB8;

LAB36:    goto LAB8;

LAB37:    goto LAB8;

LAB38:    goto LAB8;

LAB39:    goto LAB8;

LAB40:    goto LAB8;

LAB41:    goto LAB8;

}

unsigned char work_a_0832606739_3212880686_sub_3757944797_3057020925(char *t1, char *t2, char *t3, char *t4, char *t5)
{
    char t7[72];
    char t8[16];
    char t13[16];
    char t16[16];
    char t19[16];
    unsigned char t0;
    char *t9;
    char *t10;
    int t11;
    unsigned int t12;
    char *t14;
    int t15;
    char *t17;
    int t18;
    char *t20;
    int t21;
    unsigned char t22;
    char *t23;
    char *t24;
    unsigned char t25;
    char *t26;
    char *t27;
    unsigned char t28;
    char *t29;
    char *t30;
    unsigned char t31;
    char *t32;
    char *t33;
    char *t34;
    int t35;
    char *t36;
    char *t37;
    int t38;
    char *t39;
    int t40;
    char *t41;
    int t42;
    int t43;
    unsigned int t44;
    unsigned int t45;
    char *t46;
    unsigned char t47;
    char *t48;
    int t49;
    char *t50;
    int t51;
    int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    char *t56;
    unsigned char t57;
    unsigned char t58;
    char *t59;
    int t60;
    char *t61;
    int t62;
    int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    char *t67;
    unsigned char t68;
    unsigned char t69;
    unsigned char t70;
    char *t71;
    int t72;
    char *t73;
    int t74;
    int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    char *t79;
    unsigned char t80;
    unsigned char t81;
    char *t82;
    int t83;
    char *t84;
    int t85;
    int t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    char *t90;
    unsigned char t91;
    unsigned char t92;
    unsigned char t93;
    char *t94;
    int t95;
    char *t96;
    int t97;
    int t98;
    unsigned int t99;
    unsigned int t100;
    unsigned int t101;
    char *t102;
    unsigned char t103;
    unsigned char t104;
    unsigned char t105;

LAB0:    t9 = (t8 + 0U);
    t10 = (t9 + 0U);
    *((int *)t10) = 3;
    t10 = (t9 + 4U);
    *((int *)t10) = 0;
    t10 = (t9 + 8U);
    *((int *)t10) = -1;
    t11 = (0 - 3);
    t12 = (t11 * -1);
    t12 = (t12 + 1);
    t10 = (t9 + 12U);
    *((unsigned int *)t10) = t12;
    t10 = (t13 + 0U);
    t14 = (t10 + 0U);
    *((int *)t14) = 15;
    t14 = (t10 + 4U);
    *((int *)t14) = 0;
    t14 = (t10 + 8U);
    *((int *)t14) = -1;
    t15 = (0 - 15);
    t12 = (t15 * -1);
    t12 = (t12 + 1);
    t14 = (t10 + 12U);
    *((unsigned int *)t14) = t12;
    t14 = (t16 + 0U);
    t17 = (t14 + 0U);
    *((int *)t17) = 15;
    t17 = (t14 + 4U);
    *((int *)t17) = 0;
    t17 = (t14 + 8U);
    *((int *)t17) = -1;
    t18 = (0 - 15);
    t12 = (t18 * -1);
    t12 = (t12 + 1);
    t17 = (t14 + 12U);
    *((unsigned int *)t17) = t12;
    t17 = (t19 + 0U);
    t20 = (t17 + 0U);
    *((int *)t20) = 15;
    t20 = (t17 + 4U);
    *((int *)t20) = 0;
    t20 = (t17 + 8U);
    *((int *)t20) = -1;
    t21 = (0 - 15);
    t12 = (t21 * -1);
    t12 = (t12 + 1);
    t20 = (t17 + 12U);
    *((unsigned int *)t20) = t12;
    t20 = (t7 + 4U);
    t22 = (t2 != 0);
    if (t22 == 1)
        goto LAB3;

LAB2:    t23 = (t7 + 12U);
    *((char **)t23) = t8;
    t24 = (t7 + 20U);
    t25 = (t3 != 0);
    if (t25 == 1)
        goto LAB5;

LAB4:    t26 = (t7 + 28U);
    *((char **)t26) = t13;
    t27 = (t7 + 36U);
    t28 = (t4 != 0);
    if (t28 == 1)
        goto LAB7;

LAB6:    t29 = (t7 + 44U);
    *((char **)t29) = t16;
    t30 = (t7 + 52U);
    t31 = (t5 != 0);
    if (t31 == 1)
        goto LAB9;

LAB8:    t32 = (t7 + 60U);
    *((char **)t32) = t19;
    t33 = (t1 + 7745);
    t35 = xsi_mem_cmp(t33, t2, 4U);
    if (t35 == 1)
        goto LAB11;

LAB14:    t36 = (t1 + 7749);
    t38 = xsi_mem_cmp(t36, t2, 4U);
    if (t38 == 1)
        goto LAB12;

LAB15:
LAB13:    t0 = (unsigned char)2;

LAB1:    return t0;
LAB3:    *((char **)t20) = t2;
    goto LAB2;

LAB5:    *((char **)t24) = t3;
    goto LAB4;

LAB7:    *((char **)t27) = t4;
    goto LAB6;

LAB9:    *((char **)t30) = t5;
    goto LAB8;

LAB10:    xsi_error(ng3);
    t0 = 0;
    goto LAB1;

LAB11:    t39 = (t13 + 0U);
    t40 = *((int *)t39);
    t41 = (t13 + 8U);
    t42 = *((int *)t41);
    t43 = (15 - t40);
    t12 = (t43 * t42);
    t44 = (1U * t12);
    t45 = (0 + t44);
    t46 = (t3 + t45);
    t47 = *((unsigned char *)t46);
    t48 = (t16 + 0U);
    t49 = *((int *)t48);
    t50 = (t16 + 8U);
    t51 = *((int *)t50);
    t52 = (15 - t49);
    t53 = (t52 * t51);
    t54 = (1U * t53);
    t55 = (0 + t54);
    t56 = (t4 + t55);
    t57 = *((unsigned char *)t56);
    t58 = ieee_p_2592010699_sub_1605435078_503743352(IEEE_P_2592010699, t47, t57);
    t59 = (t19 + 0U);
    t60 = *((int *)t59);
    t61 = (t19 + 8U);
    t62 = *((int *)t61);
    t63 = (15 - t60);
    t64 = (t63 * t62);
    t65 = (1U * t64);
    t66 = (0 + t65);
    t67 = (t5 + t66);
    t68 = *((unsigned char *)t67);
    t69 = ieee_p_2592010699_sub_1690584930_503743352(IEEE_P_2592010699, t68);
    t70 = ieee_p_2592010699_sub_1605435078_503743352(IEEE_P_2592010699, t58, t69);
    t71 = (t13 + 0U);
    t72 = *((int *)t71);
    t73 = (t13 + 8U);
    t74 = *((int *)t73);
    t75 = (15 - t72);
    t76 = (t75 * t74);
    t77 = (1U * t76);
    t78 = (0 + t77);
    t79 = (t3 + t78);
    t80 = *((unsigned char *)t79);
    t81 = ieee_p_2592010699_sub_1690584930_503743352(IEEE_P_2592010699, t80);
    t82 = (t16 + 0U);
    t83 = *((int *)t82);
    t84 = (t16 + 8U);
    t85 = *((int *)t84);
    t86 = (15 - t83);
    t87 = (t86 * t85);
    t88 = (1U * t87);
    t89 = (0 + t88);
    t90 = (t4 + t89);
    t91 = *((unsigned char *)t90);
    t92 = ieee_p_2592010699_sub_1690584930_503743352(IEEE_P_2592010699, t91);
    t93 = ieee_p_2592010699_sub_1605435078_503743352(IEEE_P_2592010699, t81, t92);
    t94 = (t19 + 0U);
    t95 = *((int *)t94);
    t96 = (t19 + 8U);
    t97 = *((int *)t96);
    t98 = (15 - t95);
    t99 = (t98 * t97);
    t100 = (1U * t99);
    t101 = (0 + t100);
    t102 = (t5 + t101);
    t103 = *((unsigned char *)t102);
    t104 = ieee_p_2592010699_sub_1605435078_503743352(IEEE_P_2592010699, t93, t103);
    t105 = ieee_p_2592010699_sub_2545490612_503743352(IEEE_P_2592010699, t70, t104);
    t0 = t105;
    goto LAB1;

LAB12:    t9 = (t13 + 0U);
    t11 = *((int *)t9);
    t10 = (t13 + 8U);
    t15 = *((int *)t10);
    t18 = (15 - t11);
    t12 = (t18 * t15);
    t44 = (1U * t12);
    t45 = (0 + t44);
    t14 = (t3 + t45);
    t22 = *((unsigned char *)t14);
    t17 = (t16 + 0U);
    t21 = *((int *)t17);
    t33 = (t16 + 8U);
    t35 = *((int *)t33);
    t38 = (15 - t21);
    t53 = (t38 * t35);
    t54 = (1U * t53);
    t55 = (0 + t54);
    t34 = (t4 + t55);
    t25 = *((unsigned char *)t34);
    t28 = ieee_p_2592010699_sub_1690584930_503743352(IEEE_P_2592010699, t25);
    t31 = ieee_p_2592010699_sub_1605435078_503743352(IEEE_P_2592010699, t22, t28);
    t36 = (t19 + 0U);
    t40 = *((int *)t36);
    t37 = (t19 + 8U);
    t42 = *((int *)t37);
    t43 = (15 - t40);
    t64 = (t43 * t42);
    t65 = (1U * t64);
    t66 = (0 + t65);
    t39 = (t5 + t66);
    t47 = *((unsigned char *)t39);
    t57 = ieee_p_2592010699_sub_1690584930_503743352(IEEE_P_2592010699, t47);
    t58 = ieee_p_2592010699_sub_1605435078_503743352(IEEE_P_2592010699, t31, t57);
    t41 = (t13 + 0U);
    t49 = *((int *)t41);
    t46 = (t13 + 8U);
    t51 = *((int *)t46);
    t52 = (15 - t49);
    t76 = (t52 * t51);
    t77 = (1U * t76);
    t78 = (0 + t77);
    t48 = (t3 + t78);
    t68 = *((unsigned char *)t48);
    t69 = ieee_p_2592010699_sub_1690584930_503743352(IEEE_P_2592010699, t68);
    t50 = (t16 + 0U);
    t60 = *((int *)t50);
    t56 = (t16 + 8U);
    t62 = *((int *)t56);
    t63 = (15 - t60);
    t87 = (t63 * t62);
    t88 = (1U * t87);
    t89 = (0 + t88);
    t59 = (t4 + t89);
    t70 = *((unsigned char *)t59);
    t80 = ieee_p_2592010699_sub_1605435078_503743352(IEEE_P_2592010699, t69, t70);
    t61 = (t19 + 0U);
    t72 = *((int *)t61);
    t67 = (t19 + 8U);
    t74 = *((int *)t67);
    t75 = (15 - t72);
    t99 = (t75 * t74);
    t100 = (1U * t99);
    t101 = (0 + t100);
    t71 = (t5 + t101);
    t81 = *((unsigned char *)t71);
    t91 = ieee_p_2592010699_sub_1605435078_503743352(IEEE_P_2592010699, t80, t81);
    t92 = ieee_p_2592010699_sub_2545490612_503743352(IEEE_P_2592010699, t58, t91);
    t0 = t92;
    goto LAB1;

LAB16:;
LAB17:    goto LAB10;

LAB18:    goto LAB10;

LAB19:    goto LAB10;

}

static void work_a_0832606739_3212880686_p_0(char *t0)
{
    char t19[16];
    char t20[16];
    char t23[16];
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned char t10;
    unsigned char t11;
    unsigned char t12;
    char *t13;
    char *t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    int t21;
    unsigned int t22;
    int t24;
    char *t25;
    char *t26;
    char *t27;
    static char *nl0[] = {&&LAB11, &&LAB12, &&LAB13, &&LAB14, &&LAB15};

LAB0:    xsi_set_current_line(91, ng4);
    t1 = (t0 + 1192U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)2);
    if (t4 != 0)
        goto LAB2;

LAB4:    t1 = (t0 + 992U);
    t4 = xsi_signal_has_event(t1);
    if (t4 == 1)
        goto LAB7;

LAB8:    t3 = (unsigned char)0;

LAB9:    if (t3 != 0)
        goto LAB5;

LAB6:
LAB3:    t1 = (t0 + 4520);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(92, ng4);
    t1 = (t0 + 4616);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(93, ng4);
    t1 = (t0 + 7753);
    t5 = (t0 + 4680);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 16U);
    xsi_driver_first_trans_fast_port(t5);
    goto LAB3;

LAB5:    xsi_set_current_line(95, ng4);
    t2 = (t0 + 2632U);
    t6 = *((char **)t2);
    t12 = *((unsigned char *)t6);
    t2 = (char *)((nl0) + t12);
    goto **((char **)t2);

LAB7:    t2 = (t0 + 1032U);
    t5 = *((char **)t2);
    t10 = *((unsigned char *)t5);
    t11 = (t10 == (unsigned char)3);
    t3 = t11;
    goto LAB9;

LAB10:    xsi_set_current_line(112, ng4);
    t1 = (t0 + 2792U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 4616);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = t3;
    xsi_driver_first_trans_fast(t1);
    goto LAB3;

LAB11:    xsi_set_current_line(97, ng4);
    t7 = (t0 + 1352U);
    t8 = *((char **)t7);
    t7 = (t0 + 4680);
    t9 = (t7 + 56U);
    t13 = *((char **)t9);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    memcpy(t15, t8, 16U);
    xsi_driver_first_trans_fast_port(t7);
    xsi_set_current_line(98, ng4);
    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t1 = (t0 + 4744);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 16U);
    xsi_driver_first_trans_fast(t1);
    goto LAB10;

LAB12:    xsi_set_current_line(100, ng4);
    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t1 = (t0 + 4680);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 16U);
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(101, ng4);
    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t1 = (t0 + 4808);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 16U);
    xsi_driver_first_trans_fast(t1);
    goto LAB10;

LAB13:    xsi_set_current_line(103, ng4);
    t1 = (t0 + 7769);
    t5 = (t0 + 1352U);
    t6 = *((char **)t5);
    t16 = (15 - 3);
    t17 = (t16 * 1U);
    t18 = (0 + t17);
    t5 = (t6 + t18);
    t8 = ((IEEE_P_2592010699) + 4024);
    t9 = (t20 + 0U);
    t13 = (t9 + 0U);
    *((int *)t13) = 0;
    t13 = (t9 + 4U);
    *((int *)t13) = 11;
    t13 = (t9 + 8U);
    *((int *)t13) = 1;
    t21 = (11 - 0);
    t22 = (t21 * 1);
    t22 = (t22 + 1);
    t13 = (t9 + 12U);
    *((unsigned int *)t13) = t22;
    t13 = (t23 + 0U);
    t14 = (t13 + 0U);
    *((int *)t14) = 3;
    t14 = (t13 + 4U);
    *((int *)t14) = 0;
    t14 = (t13 + 8U);
    *((int *)t14) = -1;
    t24 = (0 - 3);
    t22 = (t24 * -1);
    t22 = (t22 + 1);
    t14 = (t13 + 12U);
    *((unsigned int *)t14) = t22;
    t7 = xsi_base_array_concat(t7, t19, t8, (char)97, t1, t20, (char)97, t5, t23, (char)101);
    t22 = (12U + 4U);
    t3 = (16U != t22);
    if (t3 == 1)
        goto LAB16;

LAB17:    t14 = (t0 + 4680);
    t15 = (t14 + 56U);
    t25 = *((char **)t15);
    t26 = (t25 + 56U);
    t27 = *((char **)t26);
    memcpy(t27, t7, 16U);
    xsi_driver_first_trans_fast_port(t14);
    xsi_set_current_line(104, ng4);
    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t16 = (15 - 3);
    t17 = (t16 * 1U);
    t18 = (0 + t17);
    t1 = (t2 + t18);
    t5 = (t0 + 4872);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 4U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(105, ng4);
    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t16 = (15 - 3);
    t17 = (t16 * 1U);
    t18 = (0 + t17);
    t1 = (t2 + t18);
    t5 = (t0 + 1832U);
    t6 = *((char **)t5);
    t5 = (t0 + 1992U);
    t7 = *((char **)t5);
    t5 = work_a_0832606739_3212880686_sub_1173564927_3057020925(t0, t19, t1, t6, t7);
    t8 = (t19 + 12U);
    t22 = *((unsigned int *)t8);
    t22 = (t22 * 1U);
    t3 = (16U != t22);
    if (t3 == 1)
        goto LAB18;

LAB19:    t9 = (t0 + 4936);
    t13 = (t9 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t25 = *((char **)t15);
    memcpy(t25, t5, 16U);
    xsi_driver_first_trans_fast(t9);
    goto LAB10;

LAB14:    xsi_set_current_line(107, ng4);
    t1 = (t0 + 2312U);
    t2 = *((char **)t1);
    t1 = (t0 + 4680);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 16U);
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(108, ng4);
    t1 = (t0 + 2152U);
    t2 = *((char **)t1);
    t1 = (t0 + 1832U);
    t5 = *((char **)t1);
    t1 = (t0 + 1992U);
    t6 = *((char **)t1);
    t1 = (t0 + 2312U);
    t7 = *((char **)t1);
    t3 = work_a_0832606739_3212880686_sub_3757944797_3057020925(t0, t2, t5, t6, t7);
    t1 = (t0 + 5000);
    t8 = (t1 + 56U);
    t9 = *((char **)t8);
    t13 = (t9 + 56U);
    t14 = *((char **)t13);
    *((unsigned char *)t14) = t3;
    xsi_driver_first_trans_fast(t1);
    goto LAB10;

LAB15:    xsi_set_current_line(110, ng4);
    t1 = (t0 + 7781);
    t5 = (t0 + 2472U);
    t6 = *((char **)t5);
    t3 = *((unsigned char *)t6);
    t7 = ((IEEE_P_2592010699) + 4024);
    t8 = (t20 + 0U);
    t9 = (t8 + 0U);
    *((int *)t9) = 0;
    t9 = (t8 + 4U);
    *((int *)t9) = 14;
    t9 = (t8 + 8U);
    *((int *)t9) = 1;
    t21 = (14 - 0);
    t16 = (t21 * 1);
    t16 = (t16 + 1);
    t9 = (t8 + 12U);
    *((unsigned int *)t9) = t16;
    t5 = xsi_base_array_concat(t5, t19, t7, (char)97, t1, t20, (char)99, t3, (char)101);
    t16 = (15U + 1U);
    t4 = (16U != t16);
    if (t4 == 1)
        goto LAB20;

LAB21:    t9 = (t0 + 4680);
    t13 = (t9 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t25 = *((char **)t15);
    memcpy(t25, t5, 16U);
    xsi_driver_first_trans_fast_port(t9);
    goto LAB10;

LAB16:    xsi_size_not_matching(16U, t22, 0);
    goto LAB17;

LAB18:    xsi_size_not_matching(16U, t22, 0);
    goto LAB19;

LAB20:    xsi_size_not_matching(16U, t16, 0);
    goto LAB21;

}

static void work_a_0832606739_3212880686_p_1(char *t0)
{
    char t4[16];
    char t7[16];
    char *t1;
    char *t2;
    unsigned char t3;
    char *t5;
    char *t6;
    char *t8;
    char *t9;
    int t10;
    unsigned int t11;
    char *t12;
    unsigned int t13;
    unsigned char t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    static char *nl0[] = {&&LAB3, &&LAB4, &&LAB5, &&LAB6, &&LAB7};

LAB0:    xsi_set_current_line(118, ng4);
    t1 = (t0 + 2632U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (char *)((nl0) + t3);
    goto **((char **)t1);

LAB2:    t1 = (t0 + 4536);
    *((int *)t1) = 1;

LAB1:    return;
LAB3:    xsi_set_current_line(120, ng4);
    t5 = (t0 + 7796);
    t8 = (t7 + 0U);
    t9 = (t8 + 0U);
    *((int *)t9) = 0;
    t9 = (t8 + 4U);
    *((int *)t9) = 6;
    t9 = (t8 + 8U);
    *((int *)t9) = 1;
    t10 = (6 - 0);
    t11 = (t10 * 1);
    t11 = (t11 + 1);
    t9 = (t8 + 12U);
    *((unsigned int *)t9) = t11;
    t9 = ieee_p_2592010699_sub_1837678034_503743352(IEEE_P_2592010699, t4, t5, t7);
    t12 = (t4 + 12U);
    t11 = *((unsigned int *)t12);
    t13 = (1U * t11);
    t14 = (7U != t13);
    if (t14 == 1)
        goto LAB8;

LAB9:    t15 = (t0 + 5064);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    memcpy(t19, t9, 7U);
    xsi_driver_first_trans_fast_port(t15);
    xsi_set_current_line(121, ng4);
    t1 = (t0 + 5128);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t8 = *((char **)t6);
    *((unsigned char *)t8) = (unsigned char)1;
    xsi_driver_first_trans_fast(t1);
    goto LAB2;

LAB4:    xsi_set_current_line(123, ng4);
    t1 = (t0 + 7803);
    t5 = (t7 + 0U);
    t6 = (t5 + 0U);
    *((int *)t6) = 0;
    t6 = (t5 + 4U);
    *((int *)t6) = 6;
    t6 = (t5 + 8U);
    *((int *)t6) = 1;
    t10 = (6 - 0);
    t11 = (t10 * 1);
    t11 = (t11 + 1);
    t6 = (t5 + 12U);
    *((unsigned int *)t6) = t11;
    t6 = ieee_p_2592010699_sub_1837678034_503743352(IEEE_P_2592010699, t4, t1, t7);
    t8 = (t4 + 12U);
    t11 = *((unsigned int *)t8);
    t13 = (1U * t11);
    t3 = (7U != t13);
    if (t3 == 1)
        goto LAB10;

LAB11:    t9 = (t0 + 5064);
    t12 = (t9 + 56U);
    t15 = *((char **)t12);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    memcpy(t17, t6, 7U);
    xsi_driver_first_trans_fast_port(t9);
    xsi_set_current_line(124, ng4);
    t1 = (t0 + 5128);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t8 = *((char **)t6);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    goto LAB2;

LAB5:    xsi_set_current_line(126, ng4);
    t1 = (t0 + 7810);
    t5 = (t7 + 0U);
    t6 = (t5 + 0U);
    *((int *)t6) = 0;
    t6 = (t5 + 4U);
    *((int *)t6) = 6;
    t6 = (t5 + 8U);
    *((int *)t6) = 1;
    t10 = (6 - 0);
    t11 = (t10 * 1);
    t11 = (t11 + 1);
    t6 = (t5 + 12U);
    *((unsigned int *)t6) = t11;
    t6 = ieee_p_2592010699_sub_1837678034_503743352(IEEE_P_2592010699, t4, t1, t7);
    t8 = (t4 + 12U);
    t11 = *((unsigned int *)t8);
    t13 = (1U * t11);
    t3 = (7U != t13);
    if (t3 == 1)
        goto LAB12;

LAB13:    t9 = (t0 + 5064);
    t12 = (t9 + 56U);
    t15 = *((char **)t12);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    memcpy(t17, t6, 7U);
    xsi_driver_first_trans_fast_port(t9);
    xsi_set_current_line(127, ng4);
    t1 = (t0 + 5128);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t8 = *((char **)t6);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    goto LAB2;

LAB6:    xsi_set_current_line(129, ng4);
    t1 = (t0 + 7817);
    t5 = (t7 + 0U);
    t6 = (t5 + 0U);
    *((int *)t6) = 0;
    t6 = (t5 + 4U);
    *((int *)t6) = 6;
    t6 = (t5 + 8U);
    *((int *)t6) = 1;
    t10 = (6 - 0);
    t11 = (t10 * 1);
    t11 = (t11 + 1);
    t6 = (t5 + 12U);
    *((unsigned int *)t6) = t11;
    t6 = ieee_p_2592010699_sub_1837678034_503743352(IEEE_P_2592010699, t4, t1, t7);
    t8 = (t4 + 12U);
    t11 = *((unsigned int *)t8);
    t13 = (1U * t11);
    t3 = (7U != t13);
    if (t3 == 1)
        goto LAB14;

LAB15:    t9 = (t0 + 5064);
    t12 = (t9 + 56U);
    t15 = *((char **)t12);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    memcpy(t17, t6, 7U);
    xsi_driver_first_trans_fast_port(t9);
    xsi_set_current_line(130, ng4);
    t1 = (t0 + 5128);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t8 = *((char **)t6);
    *((unsigned char *)t8) = (unsigned char)4;
    xsi_driver_first_trans_fast(t1);
    goto LAB2;

LAB7:    xsi_set_current_line(132, ng4);
    t1 = (t0 + 7824);
    t5 = (t7 + 0U);
    t6 = (t5 + 0U);
    *((int *)t6) = 0;
    t6 = (t5 + 4U);
    *((int *)t6) = 6;
    t6 = (t5 + 8U);
    *((int *)t6) = 1;
    t10 = (6 - 0);
    t11 = (t10 * 1);
    t11 = (t11 + 1);
    t6 = (t5 + 12U);
    *((unsigned int *)t6) = t11;
    t6 = ieee_p_2592010699_sub_1837678034_503743352(IEEE_P_2592010699, t4, t1, t7);
    t8 = (t4 + 12U);
    t11 = *((unsigned int *)t8);
    t13 = (1U * t11);
    t3 = (7U != t13);
    if (t3 == 1)
        goto LAB16;

LAB17:    t9 = (t0 + 5064);
    t12 = (t9 + 56U);
    t15 = *((char **)t12);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    memcpy(t17, t6, 7U);
    xsi_driver_first_trans_fast_port(t9);
    xsi_set_current_line(133, ng4);
    t1 = (t0 + 5128);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t8 = *((char **)t6);
    *((unsigned char *)t8) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);
    goto LAB2;

LAB8:    xsi_size_not_matching(7U, t13, 0);
    goto LAB9;

LAB10:    xsi_size_not_matching(7U, t13, 0);
    goto LAB11;

LAB12:    xsi_size_not_matching(7U, t13, 0);
    goto LAB13;

LAB14:    xsi_size_not_matching(7U, t13, 0);
    goto LAB15;

LAB16:    xsi_size_not_matching(7U, t13, 0);
    goto LAB17;

}


extern void work_a_0832606739_3212880686_init()
{
	static char *pe[] = {(void *)work_a_0832606739_3212880686_p_0,(void *)work_a_0832606739_3212880686_p_1};
	static char *se[] = {(void *)work_a_0832606739_3212880686_sub_1173564927_3057020925,(void *)work_a_0832606739_3212880686_sub_3757944797_3057020925};
	xsi_register_didat("work_a_0832606739_3212880686", "isim/test_isim_beh.exe.sim/work/a_0832606739_3212880686.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}
