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
static const char *ng0 = "/home/ise/leftrightshiftregister/ltrtshiftreg.v";
static unsigned int ng1[] = {0U, 0U};



static void Always_26_0(char *t0)
{
    char t4[8];
    char t36[8];
    char t39[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    char *t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    char *t29;
    char *t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    char *t37;
    char *t38;
    char *t40;
    char *t41;
    char *t42;
    char *t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    char *t50;

LAB0:    t1 = (t0 + 3000U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(26, ng0);
    t2 = (t0 + 3568);
    *((int *)t2) = 1;
    t3 = (t0 + 3032);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(26, ng0);

LAB5:    xsi_set_current_line(27, ng0);
    t5 = (t0 + 1688U);
    t6 = *((char **)t5);
    memset(t4, 0, 8);
    t5 = (t6 + 4);
    t7 = *((unsigned int *)t5);
    t8 = (~(t7));
    t9 = *((unsigned int *)t6);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB9;

LAB7:    if (*((unsigned int *)t5) == 0)
        goto LAB6;

LAB8:    t12 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t12) = 1;

LAB9:    t13 = (t4 + 4);
    t14 = (t6 + 4);
    t15 = *((unsigned int *)t6);
    t16 = (~(t15));
    *((unsigned int *)t4) = t16;
    *((unsigned int *)t13) = 0;
    if (*((unsigned int *)t14) != 0)
        goto LAB11;

LAB10:    t21 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t21 & 1U);
    t22 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t22 & 1U);
    t23 = (t4 + 4);
    t24 = *((unsigned int *)t23);
    t25 = (~(t24));
    t26 = *((unsigned int *)t4);
    t27 = (t26 & t25);
    t28 = (t27 != 0);
    if (t28 > 0)
        goto LAB12;

LAB13:
LAB14:    goto LAB2;

LAB6:    *((unsigned int *)t4) = 1;
    goto LAB9;

LAB11:    t17 = *((unsigned int *)t4);
    t18 = *((unsigned int *)t14);
    *((unsigned int *)t4) = (t17 | t18);
    t19 = *((unsigned int *)t13);
    t20 = *((unsigned int *)t14);
    *((unsigned int *)t13) = (t19 | t20);
    goto LAB10;

LAB12:    xsi_set_current_line(27, ng0);

LAB15:    xsi_set_current_line(29, ng0);
    t29 = (t0 + 1048U);
    t30 = *((char **)t29);
    t29 = (t30 + 4);
    t31 = *((unsigned int *)t29);
    t32 = (~(t31));
    t33 = *((unsigned int *)t30);
    t34 = (t33 & t32);
    t35 = (t34 != 0);
    if (t35 > 0)
        goto LAB16;

LAB17:    xsi_set_current_line(33, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t7 = *((unsigned int *)t2);
    t8 = (~(t7));
    t9 = *((unsigned int *)t3);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB20;

LAB21:    xsi_set_current_line(36, ng0);
    t2 = (t0 + 2088);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t6, t5, 0, 0, 8, 0LL);

LAB22:
LAB18:    goto LAB14;

LAB16:    xsi_set_current_line(29, ng0);

LAB19:    xsi_set_current_line(30, ng0);
    t37 = (t0 + 1368U);
    t38 = *((char **)t37);
    t37 = (t0 + 2088);
    t40 = (t37 + 56U);
    t41 = *((char **)t40);
    memset(t39, 0, 8);
    t42 = (t39 + 4);
    t43 = (t41 + 4);
    t44 = *((unsigned int *)t41);
    t45 = (t44 >> 0);
    *((unsigned int *)t39) = t45;
    t46 = *((unsigned int *)t43);
    t47 = (t46 >> 0);
    *((unsigned int *)t42) = t47;
    t48 = *((unsigned int *)t39);
    *((unsigned int *)t39) = (t48 & 127U);
    t49 = *((unsigned int *)t42);
    *((unsigned int *)t42) = (t49 & 127U);
    xsi_vlogtype_concat(t36, 8, 8, 2U, t39, 7, t38, 1);
    t50 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t50, t36, 0, 0, 8, 0LL);
    goto LAB18;

LAB20:    xsi_set_current_line(33, ng0);

LAB23:    xsi_set_current_line(34, ng0);
    t5 = (t0 + 2088);
    t6 = (t5 + 56U);
    t12 = *((char **)t6);
    memset(t36, 0, 8);
    t13 = (t36 + 4);
    t14 = (t12 + 4);
    t15 = *((unsigned int *)t12);
    t16 = (t15 >> 1);
    *((unsigned int *)t36) = t16;
    t17 = *((unsigned int *)t14);
    t18 = (t17 >> 1);
    *((unsigned int *)t13) = t18;
    t19 = *((unsigned int *)t36);
    *((unsigned int *)t36) = (t19 & 127U);
    t20 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t20 & 127U);
    t23 = (t0 + 1368U);
    t29 = *((char **)t23);
    xsi_vlogtype_concat(t4, 8, 8, 2U, t29, 1, t36, 7);
    t23 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t23, t4, 0, 0, 8, 0LL);
    goto LAB22;

}

static void Always_43_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;

LAB0:    t1 = (t0 + 3248U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(43, ng0);
    t2 = (t0 + 3584);
    *((int *)t2) = 1;
    t3 = (t0 + 3280);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(43, ng0);

LAB5:    xsi_set_current_line(44, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 8, 0LL);
    goto LAB2;

}


extern void work_m_13105553333934982057_3793822311_init()
{
	static char *pe[] = {(void *)Always_26_0,(void *)Always_43_1};
	xsi_register_didat("work_m_13105553333934982057_3793822311", "isim/testbench_isim_beh.exe.sim/work/m_13105553333934982057_3793822311.didat");
	xsi_register_executes(pe);
}
