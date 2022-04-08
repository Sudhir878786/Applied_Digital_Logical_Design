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
static const char *ng0 = "/home/ise/sequencegen/sequence.v";
static unsigned int ng1[] = {0U, 0U};
static unsigned int ng2[] = {1U, 0U};
static unsigned int ng3[] = {2U, 0U};
static unsigned int ng4[] = {3U, 0U};



static void Always_25_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;

LAB0:    t1 = (t0 + 3544U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(25, ng0);
    t2 = (t0 + 4112);
    *((int *)t2) = 1;
    t3 = (t0 + 3576);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(26, ng0);

LAB5:    xsi_set_current_line(27, ng0);
    t4 = (t0 + 1752U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(28, ng0);
    t2 = (t0 + 2632);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2472);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 2, 0LL);

LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(27, ng0);

LAB9:    xsi_set_current_line(27, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 2472);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 2, 0LL);
    xsi_set_current_line(27, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2312);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB8;

}

static void Always_33_1(char *t0)
{
    char t18[8];
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
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;
    char *t17;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    char *t32;

LAB0:    t1 = (t0 + 3792U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(33, ng0);
    t2 = (t0 + 4128);
    *((int *)t2) = 1;
    t3 = (t0 + 3824);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(34, ng0);

LAB5:    xsi_set_current_line(36, ng0);
    t4 = (t0 + 2472);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);

LAB6:    t7 = ((char*)((ng1)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 2, t7, 2);
    if (t8 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng2)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 2, t2, 2);
    if (t8 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng3)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 2, t2, 2);
    if (t8 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng4)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 2, t2, 2);
    if (t8 == 1)
        goto LAB13;

LAB14:
LAB15:    xsi_set_current_line(44, ng0);
    t2 = (t0 + 2472);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng4)));
    memset(t18, 0, 8);
    t7 = (t4 + 4);
    t9 = (t5 + 4);
    t11 = *((unsigned int *)t4);
    t12 = *((unsigned int *)t5);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t7);
    t15 = *((unsigned int *)t9);
    t19 = (t14 ^ t15);
    t20 = (t13 | t19);
    t21 = *((unsigned int *)t7);
    t22 = *((unsigned int *)t9);
    t23 = (t21 | t22);
    t24 = (~(t23));
    t25 = (t20 & t24);
    if (t25 != 0)
        goto LAB41;

LAB38:    if (t23 != 0)
        goto LAB40;

LAB39:    *((unsigned int *)t18) = 1;

LAB41:    t16 = (t18 + 4);
    t26 = *((unsigned int *)t16);
    t27 = (~(t26));
    t28 = *((unsigned int *)t18);
    t29 = (t28 & t27);
    t30 = (t29 != 0);
    if (t30 > 0)
        goto LAB42;

LAB43:    xsi_set_current_line(44, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2312);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);

LAB44:    goto LAB2;

LAB7:    xsi_set_current_line(37, ng0);

LAB16:    xsi_set_current_line(37, ng0);
    t9 = (t0 + 1912U);
    t10 = *((char **)t9);
    t9 = (t10 + 4);
    t11 = *((unsigned int *)t9);
    t12 = (~(t11));
    t13 = *((unsigned int *)t10);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB17;

LAB18:    xsi_set_current_line(37, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2632);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);

LAB19:    goto LAB15;

LAB9:    xsi_set_current_line(38, ng0);

LAB20:    xsi_set_current_line(38, ng0);
    t3 = (t0 + 1912U);
    t4 = *((char **)t3);
    memset(t18, 0, 8);
    t3 = (t4 + 4);
    t11 = *((unsigned int *)t3);
    t12 = (~(t11));
    t13 = *((unsigned int *)t4);
    t14 = (t13 & t12);
    t15 = (t14 & 1U);
    if (t15 != 0)
        goto LAB24;

LAB22:    if (*((unsigned int *)t3) == 0)
        goto LAB21;

LAB23:    t5 = (t18 + 4);
    *((unsigned int *)t18) = 1;
    *((unsigned int *)t5) = 1;

LAB24:    t7 = (t18 + 4);
    t9 = (t4 + 4);
    t19 = *((unsigned int *)t4);
    t20 = (~(t19));
    *((unsigned int *)t18) = t20;
    *((unsigned int *)t7) = 0;
    if (*((unsigned int *)t9) != 0)
        goto LAB26;

LAB25:    t25 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t25 & 1U);
    t26 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t26 & 1U);
    t10 = (t18 + 4);
    t27 = *((unsigned int *)t10);
    t28 = (~(t27));
    t29 = *((unsigned int *)t18);
    t30 = (t29 & t28);
    t31 = (t30 != 0);
    if (t31 > 0)
        goto LAB27;

LAB28:    xsi_set_current_line(38, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2632);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);

LAB29:    goto LAB15;

LAB11:    xsi_set_current_line(39, ng0);

LAB30:    xsi_set_current_line(39, ng0);
    t3 = (t0 + 1912U);
    t4 = *((char **)t3);
    t3 = (t4 + 4);
    t11 = *((unsigned int *)t3);
    t12 = (~(t11));
    t13 = *((unsigned int *)t4);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB31;

LAB32:    xsi_set_current_line(39, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2632);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);

LAB33:    goto LAB15;

LAB13:    xsi_set_current_line(40, ng0);

LAB34:    xsi_set_current_line(40, ng0);
    t3 = (t0 + 1912U);
    t4 = *((char **)t3);
    t3 = (t4 + 4);
    t11 = *((unsigned int *)t3);
    t12 = (~(t11));
    t13 = *((unsigned int *)t4);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB35;

LAB36:    xsi_set_current_line(40, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2632);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);

LAB37:    goto LAB15;

LAB17:    xsi_set_current_line(37, ng0);
    t16 = ((char*)((ng2)));
    t17 = (t0 + 2632);
    xsi_vlogvar_assign_value(t17, t16, 0, 0, 2);
    goto LAB19;

LAB21:    *((unsigned int *)t18) = 1;
    goto LAB24;

LAB26:    t21 = *((unsigned int *)t18);
    t22 = *((unsigned int *)t9);
    *((unsigned int *)t18) = (t21 | t22);
    t23 = *((unsigned int *)t7);
    t24 = *((unsigned int *)t9);
    *((unsigned int *)t7) = (t23 | t24);
    goto LAB25;

LAB27:    xsi_set_current_line(38, ng0);
    t16 = ((char*)((ng3)));
    t17 = (t0 + 2632);
    xsi_vlogvar_assign_value(t17, t16, 0, 0, 2);
    goto LAB29;

LAB31:    xsi_set_current_line(39, ng0);
    t5 = ((char*)((ng4)));
    t7 = (t0 + 2632);
    xsi_vlogvar_assign_value(t7, t5, 0, 0, 2);
    goto LAB33;

LAB35:    xsi_set_current_line(40, ng0);
    t5 = ((char*)((ng2)));
    t7 = (t0 + 2632);
    xsi_vlogvar_assign_value(t7, t5, 0, 0, 2);
    goto LAB37;

LAB40:    t10 = (t18 + 4);
    *((unsigned int *)t18) = 1;
    *((unsigned int *)t10) = 1;
    goto LAB41;

LAB42:    xsi_set_current_line(44, ng0);
    t17 = ((char*)((ng2)));
    t32 = (t0 + 2312);
    xsi_vlogvar_assign_value(t32, t17, 0, 0, 1);
    goto LAB44;

}


extern void work_m_13961822017185103349_0018673186_init()
{
	static char *pe[] = {(void *)Always_25_0,(void *)Always_33_1};
	xsi_register_didat("work_m_13961822017185103349_0018673186", "isim/testbench_isim_beh.exe.sim/work/m_13961822017185103349_0018673186.didat");
	xsi_register_executes(pe);
}
