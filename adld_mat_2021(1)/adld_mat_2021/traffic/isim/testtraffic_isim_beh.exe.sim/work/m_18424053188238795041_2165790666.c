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

/* This file is designed for use with ISim build 0xfbc00daa */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "/home/ise/traffic/fsmtraffic.v";
static int ng1[] = {1, 0};
static unsigned int ng2[] = {0U, 0U};
static int ng3[] = {0, 0};
static unsigned int ng4[] = {15U, 0U};
static unsigned int ng5[] = {1U, 0U};
static unsigned int ng6[] = {3U, 0U};
static unsigned int ng7[] = {2U, 0U};
static unsigned int ng8[] = {4U, 0U};
static unsigned int ng9[] = {5U, 0U};
static unsigned int ng10[] = {33U, 0U};
static unsigned int ng11[] = {34U, 0U};
static unsigned int ng12[] = {36U, 0U};
static unsigned int ng13[] = {12U, 0U};
static unsigned int ng14[] = {20U, 0U};



static void Always_31_0(char *t0)
{
    char t6[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    char *t29;
    int t30;
    char *t31;
    char *t32;
    char *t33;
    char *t34;

LAB0:    t1 = (t0 + 3928U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(31, ng0);
    t2 = (t0 + 4496);
    *((int *)t2) = 1;
    t3 = (t0 + 3960);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(32, ng0);

LAB5:    xsi_set_current_line(33, ng0);
    t4 = (t0 + 2296U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng1)));
    memset(t6, 0, 8);
    t7 = (t5 + 4);
    t8 = (t4 + 4);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t4);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t7);
    t13 = *((unsigned int *)t8);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t7);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB9;

LAB6:    if (t18 != 0)
        goto LAB8;

LAB7:    *((unsigned int *)t6) = 1;

LAB9:    t22 = (t6 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(39, ng0);
    t2 = (t0 + 2856);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);

LAB14:    t5 = ((char*)((ng2)));
    t30 = xsi_vlog_unsigned_case_compare(t4, 3, t5, 3);
    if (t30 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng5)));
    t30 = xsi_vlog_unsigned_case_compare(t4, 3, t2, 3);
    if (t30 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng7)));
    t30 = xsi_vlog_unsigned_case_compare(t4, 3, t2, 3);
    if (t30 == 1)
        goto LAB19;

LAB20:    t2 = ((char*)((ng6)));
    t30 = xsi_vlog_unsigned_case_compare(t4, 3, t2, 3);
    if (t30 == 1)
        goto LAB21;

LAB22:    t2 = ((char*)((ng8)));
    t30 = xsi_vlog_unsigned_case_compare(t4, 3, t2, 3);
    if (t30 == 1)
        goto LAB23;

LAB24:    t2 = ((char*)((ng9)));
    t30 = xsi_vlog_unsigned_case_compare(t4, 3, t2, 3);
    if (t30 == 1)
        goto LAB25;

LAB26:
LAB28:
LAB27:    xsi_set_current_line(100, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2856);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);

LAB29:
LAB12:    goto LAB2;

LAB8:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(34, ng0);

LAB13:    xsi_set_current_line(35, ng0);
    t28 = ((char*)((ng2)));
    t29 = (t0 + 2856);
    xsi_vlogvar_wait_assign_value(t29, t28, 0, 0, 3, 0LL);
    xsi_set_current_line(36, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3016);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    goto LAB12;

LAB15:    xsi_set_current_line(40, ng0);
    t7 = (t0 + 3016);
    t8 = (t7 + 56U);
    t21 = *((char **)t8);
    t22 = ((char*)((ng4)));
    memset(t6, 0, 8);
    t28 = (t21 + 4);
    if (*((unsigned int *)t28) != 0)
        goto LAB31;

LAB30:    t29 = (t22 + 4);
    if (*((unsigned int *)t29) != 0)
        goto LAB31;

LAB34:    if (*((unsigned int *)t21) < *((unsigned int *)t22))
        goto LAB32;

LAB33:    t32 = (t6 + 4);
    t9 = *((unsigned int *)t32);
    t10 = (~(t9));
    t11 = *((unsigned int *)t6);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB35;

LAB36:    xsi_set_current_line(46, ng0);

LAB39:    xsi_set_current_line(47, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 2856);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);
    xsi_set_current_line(48, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3016);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);

LAB37:    goto LAB29;

LAB17:    xsi_set_current_line(50, ng0);
    t3 = (t0 + 3016);
    t5 = (t3 + 56U);
    t7 = *((char **)t5);
    t8 = ((char*)((ng6)));
    memset(t6, 0, 8);
    t21 = (t7 + 4);
    if (*((unsigned int *)t21) != 0)
        goto LAB41;

LAB40:    t22 = (t8 + 4);
    if (*((unsigned int *)t22) != 0)
        goto LAB41;

LAB44:    if (*((unsigned int *)t7) < *((unsigned int *)t8))
        goto LAB42;

LAB43:    t29 = (t6 + 4);
    t9 = *((unsigned int *)t29);
    t10 = (~(t9));
    t11 = *((unsigned int *)t6);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB45;

LAB46:    xsi_set_current_line(56, ng0);

LAB49:    xsi_set_current_line(57, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 2856);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);
    xsi_set_current_line(58, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3016);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);

LAB47:    goto LAB29;

LAB19:    xsi_set_current_line(60, ng0);
    t3 = (t0 + 3016);
    t5 = (t3 + 56U);
    t7 = *((char **)t5);
    t8 = ((char*)((ng6)));
    memset(t6, 0, 8);
    t21 = (t7 + 4);
    if (*((unsigned int *)t21) != 0)
        goto LAB51;

LAB50:    t22 = (t8 + 4);
    if (*((unsigned int *)t22) != 0)
        goto LAB51;

LAB54:    if (*((unsigned int *)t7) < *((unsigned int *)t8))
        goto LAB52;

LAB53:    t29 = (t6 + 4);
    t9 = *((unsigned int *)t29);
    t10 = (~(t9));
    t11 = *((unsigned int *)t6);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB55;

LAB56:    xsi_set_current_line(66, ng0);

LAB59:    xsi_set_current_line(67, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 2856);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);
    xsi_set_current_line(68, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3016);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);

LAB57:    goto LAB29;

LAB21:    xsi_set_current_line(70, ng0);
    t3 = (t0 + 3016);
    t5 = (t3 + 56U);
    t7 = *((char **)t5);
    t8 = ((char*)((ng4)));
    memset(t6, 0, 8);
    t21 = (t7 + 4);
    if (*((unsigned int *)t21) != 0)
        goto LAB61;

LAB60:    t22 = (t8 + 4);
    if (*((unsigned int *)t22) != 0)
        goto LAB61;

LAB64:    if (*((unsigned int *)t7) < *((unsigned int *)t8))
        goto LAB62;

LAB63:    t29 = (t6 + 4);
    t9 = *((unsigned int *)t29);
    t10 = (~(t9));
    t11 = *((unsigned int *)t6);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB65;

LAB66:    xsi_set_current_line(76, ng0);

LAB69:    xsi_set_current_line(77, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 2856);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);
    xsi_set_current_line(78, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3016);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);

LAB67:    goto LAB29;

LAB23:    xsi_set_current_line(80, ng0);
    t3 = (t0 + 3016);
    t5 = (t3 + 56U);
    t7 = *((char **)t5);
    t8 = ((char*)((ng6)));
    memset(t6, 0, 8);
    t21 = (t7 + 4);
    if (*((unsigned int *)t21) != 0)
        goto LAB71;

LAB70:    t22 = (t8 + 4);
    if (*((unsigned int *)t22) != 0)
        goto LAB71;

LAB74:    if (*((unsigned int *)t7) < *((unsigned int *)t8))
        goto LAB72;

LAB73:    t29 = (t6 + 4);
    t9 = *((unsigned int *)t29);
    t10 = (~(t9));
    t11 = *((unsigned int *)t6);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB75;

LAB76:    xsi_set_current_line(86, ng0);

LAB79:    xsi_set_current_line(87, ng0);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 2856);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);
    xsi_set_current_line(88, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3016);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);

LAB77:    goto LAB29;

LAB25:    xsi_set_current_line(90, ng0);
    t3 = (t0 + 3016);
    t5 = (t3 + 56U);
    t7 = *((char **)t5);
    t8 = ((char*)((ng6)));
    memset(t6, 0, 8);
    t21 = (t7 + 4);
    if (*((unsigned int *)t21) != 0)
        goto LAB81;

LAB80:    t22 = (t8 + 4);
    if (*((unsigned int *)t22) != 0)
        goto LAB81;

LAB84:    if (*((unsigned int *)t7) < *((unsigned int *)t8))
        goto LAB82;

LAB83:    t29 = (t6 + 4);
    t9 = *((unsigned int *)t29);
    t10 = (~(t9));
    t11 = *((unsigned int *)t6);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB85;

LAB86:    xsi_set_current_line(96, ng0);

LAB89:    xsi_set_current_line(97, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2856);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);
    xsi_set_current_line(98, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3016);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);

LAB87:    goto LAB29;

LAB31:    t31 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t31) = 1;
    goto LAB33;

LAB32:    *((unsigned int *)t6) = 1;
    goto LAB33;

LAB35:    xsi_set_current_line(41, ng0);

LAB38:    xsi_set_current_line(42, ng0);
    t33 = ((char*)((ng2)));
    t34 = (t0 + 2856);
    xsi_vlogvar_wait_assign_value(t34, t33, 0, 0, 3, 0LL);
    xsi_set_current_line(43, ng0);
    t2 = (t0 + 3016);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t7 = ((char*)((ng1)));
    memset(t6, 0, 8);
    xsi_vlog_unsigned_add(t6, 32, t5, 4, t7, 32);
    t8 = (t0 + 3016);
    xsi_vlogvar_wait_assign_value(t8, t6, 0, 0, 4, 0LL);
    goto LAB37;

LAB41:    t28 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t28) = 1;
    goto LAB43;

LAB42:    *((unsigned int *)t6) = 1;
    goto LAB43;

LAB45:    xsi_set_current_line(51, ng0);

LAB48:    xsi_set_current_line(52, ng0);
    t31 = ((char*)((ng5)));
    t32 = (t0 + 2856);
    xsi_vlogvar_wait_assign_value(t32, t31, 0, 0, 3, 0LL);
    xsi_set_current_line(53, ng0);
    t2 = (t0 + 3016);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t7 = ((char*)((ng1)));
    memset(t6, 0, 8);
    xsi_vlog_unsigned_add(t6, 32, t5, 4, t7, 32);
    t8 = (t0 + 3016);
    xsi_vlogvar_wait_assign_value(t8, t6, 0, 0, 4, 0LL);
    goto LAB47;

LAB51:    t28 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t28) = 1;
    goto LAB53;

LAB52:    *((unsigned int *)t6) = 1;
    goto LAB53;

LAB55:    xsi_set_current_line(61, ng0);

LAB58:    xsi_set_current_line(62, ng0);
    t31 = ((char*)((ng7)));
    t32 = (t0 + 2856);
    xsi_vlogvar_wait_assign_value(t32, t31, 0, 0, 3, 0LL);
    xsi_set_current_line(63, ng0);
    t2 = (t0 + 3016);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t7 = ((char*)((ng1)));
    memset(t6, 0, 8);
    xsi_vlog_unsigned_add(t6, 32, t5, 4, t7, 32);
    t8 = (t0 + 3016);
    xsi_vlogvar_wait_assign_value(t8, t6, 0, 0, 4, 0LL);
    goto LAB57;

LAB61:    t28 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t28) = 1;
    goto LAB63;

LAB62:    *((unsigned int *)t6) = 1;
    goto LAB63;

LAB65:    xsi_set_current_line(71, ng0);

LAB68:    xsi_set_current_line(72, ng0);
    t31 = ((char*)((ng6)));
    t32 = (t0 + 2856);
    xsi_vlogvar_wait_assign_value(t32, t31, 0, 0, 3, 0LL);
    xsi_set_current_line(73, ng0);
    t2 = (t0 + 3016);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t7 = ((char*)((ng1)));
    memset(t6, 0, 8);
    xsi_vlog_unsigned_add(t6, 32, t5, 4, t7, 32);
    t8 = (t0 + 3016);
    xsi_vlogvar_wait_assign_value(t8, t6, 0, 0, 4, 0LL);
    goto LAB67;

LAB71:    t28 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t28) = 1;
    goto LAB73;

LAB72:    *((unsigned int *)t6) = 1;
    goto LAB73;

LAB75:    xsi_set_current_line(81, ng0);

LAB78:    xsi_set_current_line(82, ng0);
    t31 = ((char*)((ng8)));
    t32 = (t0 + 2856);
    xsi_vlogvar_wait_assign_value(t32, t31, 0, 0, 3, 0LL);
    xsi_set_current_line(83, ng0);
    t2 = (t0 + 3016);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t7 = ((char*)((ng1)));
    memset(t6, 0, 8);
    xsi_vlog_unsigned_add(t6, 32, t5, 4, t7, 32);
    t8 = (t0 + 3016);
    xsi_vlogvar_wait_assign_value(t8, t6, 0, 0, 4, 0LL);
    goto LAB77;

LAB81:    t28 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t28) = 1;
    goto LAB83;

LAB82:    *((unsigned int *)t6) = 1;
    goto LAB83;

LAB85:    xsi_set_current_line(91, ng0);

LAB88:    xsi_set_current_line(92, ng0);
    t31 = ((char*)((ng9)));
    t32 = (t0 + 2856);
    xsi_vlogvar_wait_assign_value(t32, t31, 0, 0, 3, 0LL);
    xsi_set_current_line(93, ng0);
    t2 = (t0 + 3016);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t7 = ((char*)((ng1)));
    memset(t6, 0, 8);
    xsi_vlog_unsigned_add(t6, 32, t5, 4, t7, 32);
    t8 = (t0 + 3016);
    xsi_vlogvar_wait_assign_value(t8, t6, 0, 0, 4, 0LL);
    goto LAB87;

}

static void Always_104_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    int t8;
    char *t9;
    char *t10;

LAB0:    t1 = (t0 + 4176U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(104, ng0);
    t2 = (t0 + 4512);
    *((int *)t2) = 1;
    t3 = (t0 + 4208);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(105, ng0);

LAB5:    xsi_set_current_line(106, ng0);
    t4 = (t0 + 2856);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);

LAB6:    t7 = ((char*)((ng2)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t7, 3);
    if (t8 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng5)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t2, 3);
    if (t8 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng7)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t2, 3);
    if (t8 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng6)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t2, 3);
    if (t8 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng8)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t2, 3);
    if (t8 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng9)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t2, 3);
    if (t8 == 1)
        goto LAB17;

LAB18:
LAB20:
LAB19:    xsi_set_current_line(113, ng0);
    t2 = ((char*)((ng10)));
    t3 = (t0 + 2696);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 6);

LAB21:    goto LAB2;

LAB7:    xsi_set_current_line(107, ng0);
    t9 = ((char*)((ng10)));
    t10 = (t0 + 2696);
    xsi_vlogvar_assign_value(t10, t9, 0, 0, 6);
    goto LAB21;

LAB9:    xsi_set_current_line(108, ng0);
    t3 = ((char*)((ng11)));
    t4 = (t0 + 2696);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 6);
    goto LAB21;

LAB11:    xsi_set_current_line(109, ng0);
    t3 = ((char*)((ng12)));
    t4 = (t0 + 2696);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 6);
    goto LAB21;

LAB13:    xsi_set_current_line(110, ng0);
    t3 = ((char*)((ng13)));
    t4 = (t0 + 2696);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 6);
    goto LAB21;

LAB15:    xsi_set_current_line(111, ng0);
    t3 = ((char*)((ng14)));
    t4 = (t0 + 2696);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 6);
    goto LAB21;

LAB17:    xsi_set_current_line(112, ng0);
    t3 = ((char*)((ng12)));
    t4 = (t0 + 2696);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 6);
    goto LAB21;

}


extern void work_m_18424053188238795041_2165790666_init()
{
	static char *pe[] = {(void *)Always_31_0,(void *)Always_104_1};
	xsi_register_didat("work_m_18424053188238795041_2165790666", "isim/testtraffic_isim_beh.exe.sim/work/m_18424053188238795041_2165790666.didat");
	xsi_register_executes(pe);
}
