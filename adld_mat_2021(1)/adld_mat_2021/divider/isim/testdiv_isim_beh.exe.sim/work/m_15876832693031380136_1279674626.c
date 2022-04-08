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
static const char *ng0 = "/home/ise/divider/divider.v";
static unsigned int ng1[] = {0U, 0U};
static int ng2[] = {0, 0};
static int ng3[] = {8, 0};
static int ng4[] = {1, 0};
static int ng5[] = {7, 0};
static int ng6[] = {15, 0};
static unsigned int ng7[] = {1U, 0U};



static void Always_37_0(char *t0)
{
    char t13[8];
    char t20[8];
    char t27[8];
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
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t21;
    unsigned int t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t28;
    int t29;
    int t30;
    int t31;
    int t32;
    int t33;
    int t34;
    int t35;
    int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;

LAB0:    t1 = (t0 + 3640U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(37, ng0);
    t2 = (t0 + 3960);
    *((int *)t2) = 1;
    t3 = (t0 + 3672);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(38, ng0);

LAB5:    xsi_set_current_line(39, ng0);
    t4 = (t0 + 1528U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(49, ng0);
    t2 = (t0 + 2408);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t13, 0, 8);
    t11 = (t4 + 4);
    if (*((unsigned int *)t11) != 0)
        goto LAB11;

LAB10:    t12 = (t5 + 4);
    if (*((unsigned int *)t12) != 0)
        goto LAB11;

LAB14:    if (*((unsigned int *)t4) < *((unsigned int *)t5))
        goto LAB12;

LAB13:    t15 = (t13 + 4);
    t6 = *((unsigned int *)t15);
    t7 = (~(t6));
    t8 = *((unsigned int *)t13);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB15;

LAB16:
LAB17:
LAB8:    xsi_set_current_line(67, ng0);
    t2 = (t0 + 1528U);
    t3 = *((char **)t2);
    memset(t13, 0, 8);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB37;

LAB35:    if (*((unsigned int *)t2) == 0)
        goto LAB34;

LAB36:    t4 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t4) = 1;

LAB37:    t5 = (t13 + 4);
    t11 = (t3 + 4);
    t22 = *((unsigned int *)t3);
    t37 = (~(t22));
    *((unsigned int *)t13) = t37;
    *((unsigned int *)t5) = 0;
    if (*((unsigned int *)t11) != 0)
        goto LAB39;

LAB38:    t42 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t42 & 1U);
    t43 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t43 & 1U);
    t12 = (t13 + 4);
    t44 = *((unsigned int *)t12);
    t45 = (~(t44));
    t46 = *((unsigned int *)t13);
    t47 = (t46 & t45);
    t48 = (t47 != 0);
    if (t48 > 0)
        goto LAB40;

LAB41:
LAB42:    xsi_set_current_line(69, ng0);
    t2 = (t0 + 2408);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t13, 0, 8);
    t11 = (t4 + 4);
    t12 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = *((unsigned int *)t5);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t11);
    t10 = *((unsigned int *)t12);
    t22 = (t9 ^ t10);
    t37 = (t8 | t22);
    t38 = *((unsigned int *)t11);
    t39 = *((unsigned int *)t12);
    t40 = (t38 | t39);
    t41 = (~(t40));
    t42 = (t37 & t41);
    if (t42 != 0)
        goto LAB46;

LAB43:    if (t40 != 0)
        goto LAB45;

LAB44:    *((unsigned int *)t13) = 1;

LAB46:    t15 = (t13 + 4);
    t43 = *((unsigned int *)t15);
    t44 = (~(t43));
    t45 = *((unsigned int *)t13);
    t46 = (t45 & t44);
    t47 = (t46 != 0);
    if (t47 > 0)
        goto LAB47;

LAB48:
LAB49:    goto LAB2;

LAB6:    xsi_set_current_line(40, ng0);

LAB9:    xsi_set_current_line(41, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 2248);
    xsi_vlogvar_assign_value(t12, t11, 0, 0, 4);
    xsi_set_current_line(42, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2088);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(43, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2408);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(44, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng1)));
    xsi_vlogtype_concat(t13, 16, 16, 2U, t2, 8, t3, 8);
    t4 = (t0 + 2568);
    xsi_vlogvar_assign_value(t4, t13, 0, 0, 16);
    xsi_set_current_line(45, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2728);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(46, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1928);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    goto LAB8;

LAB11:    t14 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB13;

LAB12:    *((unsigned int *)t13) = 1;
    goto LAB13;

LAB15:    xsi_set_current_line(50, ng0);

LAB18:    xsi_set_current_line(52, ng0);
    t16 = (t0 + 2568);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    t19 = ((char*)((ng4)));
    memset(t20, 0, 8);
    xsi_vlog_unsigned_lshift(t20, 16, t18, 16, t19, 32);
    t21 = (t0 + 2568);
    xsi_vlogvar_assign_value(t21, t20, 0, 0, 16);
    xsi_set_current_line(53, ng0);
    t2 = (t0 + 2568);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t13, 0, 8);
    t5 = (t13 + 4);
    t11 = (t4 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (t6 >> 8);
    *((unsigned int *)t13) = t7;
    t8 = *((unsigned int *)t11);
    t9 = (t8 >> 8);
    *((unsigned int *)t5) = t9;
    t10 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t10 & 255U);
    t22 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t22 & 255U);
    t12 = (t0 + 2728);
    xsi_vlogvar_assign_value(t12, t13, 0, 0, 8);
    xsi_set_current_line(54, ng0);
    t2 = (t0 + 2728);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 1208U);
    t11 = *((char **)t5);
    memset(t13, 0, 8);
    t5 = (t4 + 4);
    if (*((unsigned int *)t5) != 0)
        goto LAB20;

LAB19:    t12 = (t11 + 4);
    if (*((unsigned int *)t12) != 0)
        goto LAB20;

LAB23:    if (*((unsigned int *)t4) > *((unsigned int *)t11))
        goto LAB21;

LAB22:    t15 = (t13 + 4);
    t6 = *((unsigned int *)t15);
    t7 = (~(t6));
    t8 = *((unsigned int *)t13);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB24;

LAB25:    xsi_set_current_line(61, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1928);
    t4 = (t0 + 1928);
    t5 = (t4 + 72U);
    t11 = *((char **)t5);
    t12 = ((char*)((ng5)));
    t14 = (t0 + 2408);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    memset(t20, 0, 8);
    xsi_vlog_unsigned_minus(t20, 32, t12, 32, t16, 4);
    xsi_vlog_generic_convert_bit_index(t13, t11, 2, t20, 32, 2);
    t17 = (t13 + 4);
    t6 = *((unsigned int *)t17);
    t29 = (!(t6));
    if (t29 == 1)
        goto LAB32;

LAB33:
LAB26:    goto LAB17;

LAB20:    t14 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB22;

LAB21:    *((unsigned int *)t13) = 1;
    goto LAB22;

LAB24:    xsi_set_current_line(55, ng0);

LAB27:    xsi_set_current_line(56, ng0);
    t16 = ((char*)((ng4)));
    t17 = (t0 + 1928);
    t18 = (t0 + 1928);
    t19 = (t18 + 72U);
    t21 = *((char **)t19);
    t23 = ((char*)((ng5)));
    t24 = (t0 + 2408);
    t25 = (t24 + 56U);
    t26 = *((char **)t25);
    memset(t27, 0, 8);
    xsi_vlog_unsigned_minus(t27, 32, t23, 32, t26, 4);
    xsi_vlog_generic_convert_bit_index(t20, t21, 2, t27, 32, 2);
    t28 = (t20 + 4);
    t22 = *((unsigned int *)t28);
    t29 = (!(t22));
    if (t29 == 1)
        goto LAB28;

LAB29:    xsi_set_current_line(57, ng0);
    t2 = (t0 + 2728);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 1208U);
    t11 = *((char **)t5);
    memset(t13, 0, 8);
    xsi_vlog_unsigned_minus(t13, 8, t4, 8, t11, 4);
    t5 = (t0 + 2728);
    xsi_vlogvar_assign_value(t5, t13, 0, 0, 8);
    xsi_set_current_line(58, ng0);
    t2 = (t0 + 2728);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2568);
    t11 = (t0 + 2568);
    t12 = (t11 + 72U);
    t14 = *((char **)t12);
    t15 = ((char*)((ng6)));
    t16 = ((char*)((ng3)));
    xsi_vlog_convert_partindices(t13, t20, t27, ((int*)(t14)), 2, t15, 32, 1, t16, 32, 1);
    t17 = (t13 + 4);
    t6 = *((unsigned int *)t17);
    t29 = (!(t6));
    t18 = (t20 + 4);
    t7 = *((unsigned int *)t18);
    t30 = (!(t7));
    t31 = (t29 && t30);
    t19 = (t27 + 4);
    t8 = *((unsigned int *)t19);
    t32 = (!(t8));
    t33 = (t31 && t32);
    if (t33 == 1)
        goto LAB30;

LAB31:    goto LAB26;

LAB28:    xsi_vlogvar_assign_value(t17, t16, 0, *((unsigned int *)t20), 1);
    goto LAB29;

LAB30:    t9 = *((unsigned int *)t27);
    t34 = (t9 + 0);
    t10 = *((unsigned int *)t13);
    t22 = *((unsigned int *)t20);
    t35 = (t10 - t22);
    t36 = (t35 + 1);
    xsi_vlogvar_assign_value(t5, t4, t34, *((unsigned int *)t20), t36);
    goto LAB31;

LAB32:    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t13), 1);
    goto LAB33;

LAB34:    *((unsigned int *)t13) = 1;
    goto LAB37;

LAB39:    t38 = *((unsigned int *)t13);
    t39 = *((unsigned int *)t11);
    *((unsigned int *)t13) = (t38 | t39);
    t40 = *((unsigned int *)t5);
    t41 = *((unsigned int *)t11);
    *((unsigned int *)t5) = (t40 | t41);
    goto LAB38;

LAB40:    xsi_set_current_line(67, ng0);
    t14 = (t0 + 2408);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    t17 = ((char*)((ng4)));
    memset(t20, 0, 8);
    xsi_vlog_unsigned_add(t20, 32, t16, 4, t17, 32);
    t18 = (t0 + 2408);
    xsi_vlogvar_assign_value(t18, t20, 0, 0, 4);
    goto LAB42;

LAB45:    t14 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB46;

LAB47:    xsi_set_current_line(69, ng0);

LAB50:    xsi_set_current_line(69, ng0);
    t16 = (t0 + 2728);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    t19 = (t0 + 2248);
    xsi_vlogvar_assign_value(t19, t18, 0, 0, 4);
    xsi_set_current_line(69, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 2088);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB49;

}


extern void work_m_15876832693031380136_1279674626_init()
{
	static char *pe[] = {(void *)Always_37_0};
	xsi_register_didat("work_m_15876832693031380136_1279674626", "isim/testdiv_isim_beh.exe.sim/work/m_15876832693031380136_1279674626.didat");
	xsi_register_executes(pe);
}
