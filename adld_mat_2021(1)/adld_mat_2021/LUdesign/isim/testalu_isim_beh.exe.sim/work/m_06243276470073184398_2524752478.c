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
static const char *ng0 = "/home/ise/LUdesign/ludesign.v";
static int ng1[] = {0, 0};
static int ng2[] = {1, 0};
static int ng3[] = {2, 0};
static int ng4[] = {3, 0};
static int ng5[] = {4, 0};



static void Always_37_0(char *t0)
{
    char t7[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;

LAB0:    t1 = (t0 + 2840U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(37, ng0);
    t2 = (t0 + 3408);
    *((int *)t2) = 1;
    t3 = (t0 + 2872);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(37, ng0);
    t4 = (t0 + 1048U);
    t5 = *((char **)t4);
    t4 = (t0 + 1208U);
    t6 = *((char **)t4);
    memset(t7, 0, 8);
    xsi_vlog_unsigned_add(t7, 5, t5, 4, t6, 4);
    t4 = (t0 + 1928);
    xsi_vlogvar_assign_value(t4, t7, 0, 0, 5);
    goto LAB2;

}

static void Always_39_1(char *t0)
{
    char t10[8];
    char t21[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
    char *t7;
    char *t8;
    char *t9;
    char *t11;
    char *t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    char *t20;
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
    unsigned int t32;
    unsigned int t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;

LAB0:    t1 = (t0 + 3088U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(39, ng0);
    t2 = (t0 + 3424);
    *((int *)t2) = 1;
    t3 = (t0 + 3120);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(40, ng0);

LAB5:    xsi_set_current_line(42, ng0);
    t4 = (t0 + 1368U);
    t5 = *((char **)t4);

LAB6:    t4 = ((char*)((ng1)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t4, 32);
    if (t6 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng2)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 32);
    if (t6 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng3)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 32);
    if (t6 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng4)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 3, t2, 32);
    if (t6 == 1)
        goto LAB13;

LAB14:
LAB15:    goto LAB2;

LAB7:    xsi_set_current_line(43, ng0);

LAB16:    xsi_set_current_line(44, ng0);
    t7 = (t0 + 1048U);
    t8 = *((char **)t7);
    t7 = (t0 + 1208U);
    t9 = *((char **)t7);
    memset(t10, 0, 8);
    t7 = (t8 + 4);
    if (*((unsigned int *)t7) != 0)
        goto LAB18;

LAB17:    t11 = (t9 + 4);
    if (*((unsigned int *)t11) != 0)
        goto LAB18;

LAB21:    if (*((unsigned int *)t8) > *((unsigned int *)t9))
        goto LAB19;

LAB20:    t13 = (t10 + 4);
    t14 = *((unsigned int *)t13);
    t15 = (~(t14));
    t16 = *((unsigned int *)t10);
    t17 = (t16 & t15);
    t18 = (t17 != 0);
    if (t18 > 0)
        goto LAB22;

LAB23:
LAB24:    xsi_set_current_line(45, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = (t0 + 1208U);
    t4 = *((char **)t2);
    memset(t10, 0, 8);
    t2 = (t3 + 4);
    if (*((unsigned int *)t2) != 0)
        goto LAB26;

LAB25:    t7 = (t4 + 4);
    if (*((unsigned int *)t7) != 0)
        goto LAB26;

LAB29:    if (*((unsigned int *)t3) > *((unsigned int *)t4))
        goto LAB28;

LAB27:    *((unsigned int *)t10) = 1;

LAB28:    t9 = (t10 + 4);
    t14 = *((unsigned int *)t9);
    t15 = (~(t14));
    t16 = *((unsigned int *)t10);
    t17 = (t16 & t15);
    t18 = (t17 != 0);
    if (t18 > 0)
        goto LAB30;

LAB31:
LAB32:    goto LAB15;

LAB9:    xsi_set_current_line(48, ng0);

LAB33:    xsi_set_current_line(49, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    t3 = (t0 + 1008U);
    t7 = (t3 + 72U);
    t8 = *((char **)t7);
    t9 = ((char*)((ng1)));
    xsi_vlog_generic_get_index_select_value(t10, 32, t4, t8, 2, t9, 32, 1);
    t11 = ((char*)((ng1)));
    memset(t21, 0, 8);
    t12 = (t10 + 4);
    t13 = (t11 + 4);
    t14 = *((unsigned int *)t10);
    t15 = *((unsigned int *)t11);
    t16 = (t14 ^ t15);
    t17 = *((unsigned int *)t12);
    t18 = *((unsigned int *)t13);
    t22 = (t17 ^ t18);
    t23 = (t16 | t22);
    t24 = *((unsigned int *)t12);
    t25 = *((unsigned int *)t13);
    t26 = (t24 | t25);
    t27 = (~(t26));
    t28 = (t23 & t27);
    if (t28 != 0)
        goto LAB37;

LAB34:    if (t26 != 0)
        goto LAB36;

LAB35:    *((unsigned int *)t21) = 1;

LAB37:    t20 = (t21 + 4);
    t29 = *((unsigned int *)t20);
    t30 = (~(t29));
    t31 = *((unsigned int *)t21);
    t32 = (t31 & t30);
    t33 = (t32 != 0);
    if (t33 > 0)
        goto LAB38;

LAB39:
LAB40:    xsi_set_current_line(50, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = (t0 + 1008U);
    t4 = (t2 + 72U);
    t7 = *((char **)t4);
    t8 = ((char*)((ng1)));
    xsi_vlog_generic_get_index_select_value(t10, 32, t3, t7, 2, t8, 32, 1);
    t9 = ((char*)((ng2)));
    memset(t21, 0, 8);
    t11 = (t10 + 4);
    t12 = (t9 + 4);
    t14 = *((unsigned int *)t10);
    t15 = *((unsigned int *)t9);
    t16 = (t14 ^ t15);
    t17 = *((unsigned int *)t11);
    t18 = *((unsigned int *)t12);
    t22 = (t17 ^ t18);
    t23 = (t16 | t22);
    t24 = *((unsigned int *)t11);
    t25 = *((unsigned int *)t12);
    t26 = (t24 | t25);
    t27 = (~(t26));
    t28 = (t23 & t27);
    if (t28 != 0)
        goto LAB44;

LAB41:    if (t26 != 0)
        goto LAB43;

LAB42:    *((unsigned int *)t21) = 1;

LAB44:    t19 = (t21 + 4);
    t29 = *((unsigned int *)t19);
    t30 = (~(t29));
    t31 = *((unsigned int *)t21);
    t32 = (t31 & t30);
    t33 = (t32 != 0);
    if (t33 > 0)
        goto LAB45;

LAB46:
LAB47:    goto LAB15;

LAB11:    xsi_set_current_line(53, ng0);

LAB48:    xsi_set_current_line(54, ng0);
    t3 = (t0 + 1208U);
    t4 = *((char **)t3);
    t3 = (t0 + 1168U);
    t7 = (t3 + 72U);
    t8 = *((char **)t7);
    t9 = ((char*)((ng1)));
    xsi_vlog_generic_get_index_select_value(t10, 32, t4, t8, 2, t9, 32, 1);
    t11 = ((char*)((ng1)));
    memset(t21, 0, 8);
    t12 = (t10 + 4);
    t13 = (t11 + 4);
    t14 = *((unsigned int *)t10);
    t15 = *((unsigned int *)t11);
    t16 = (t14 ^ t15);
    t17 = *((unsigned int *)t12);
    t18 = *((unsigned int *)t13);
    t22 = (t17 ^ t18);
    t23 = (t16 | t22);
    t24 = *((unsigned int *)t12);
    t25 = *((unsigned int *)t13);
    t26 = (t24 | t25);
    t27 = (~(t26));
    t28 = (t23 & t27);
    if (t28 != 0)
        goto LAB52;

LAB49:    if (t26 != 0)
        goto LAB51;

LAB50:    *((unsigned int *)t21) = 1;

LAB52:    t20 = (t21 + 4);
    t29 = *((unsigned int *)t20);
    t30 = (~(t29));
    t31 = *((unsigned int *)t21);
    t32 = (t31 & t30);
    t33 = (t32 != 0);
    if (t33 > 0)
        goto LAB53;

LAB54:
LAB55:    xsi_set_current_line(55, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    t2 = (t0 + 1168U);
    t4 = (t2 + 72U);
    t7 = *((char **)t4);
    t8 = ((char*)((ng1)));
    xsi_vlog_generic_get_index_select_value(t10, 32, t3, t7, 2, t8, 32, 1);
    t9 = ((char*)((ng2)));
    memset(t21, 0, 8);
    t11 = (t10 + 4);
    t12 = (t9 + 4);
    t14 = *((unsigned int *)t10);
    t15 = *((unsigned int *)t9);
    t16 = (t14 ^ t15);
    t17 = *((unsigned int *)t11);
    t18 = *((unsigned int *)t12);
    t22 = (t17 ^ t18);
    t23 = (t16 | t22);
    t24 = *((unsigned int *)t11);
    t25 = *((unsigned int *)t12);
    t26 = (t24 | t25);
    t27 = (~(t26));
    t28 = (t23 & t27);
    if (t28 != 0)
        goto LAB59;

LAB56:    if (t26 != 0)
        goto LAB58;

LAB57:    *((unsigned int *)t21) = 1;

LAB59:    t19 = (t21 + 4);
    t29 = *((unsigned int *)t19);
    t30 = (~(t29));
    t31 = *((unsigned int *)t21);
    t32 = (t31 & t30);
    t33 = (t32 != 0);
    if (t33 > 0)
        goto LAB60;

LAB61:
LAB62:    goto LAB15;

LAB13:    xsi_set_current_line(58, ng0);

LAB63:    xsi_set_current_line(59, ng0);
    t3 = (t0 + 1928);
    t4 = (t3 + 56U);
    t7 = *((char **)t4);
    t8 = (t0 + 1928);
    t9 = (t8 + 72U);
    t11 = *((char **)t9);
    t12 = ((char*)((ng5)));
    xsi_vlog_generic_get_index_select_value(t10, 32, t7, t11, 2, t12, 32, 1);
    t13 = ((char*)((ng1)));
    memset(t21, 0, 8);
    t19 = (t10 + 4);
    t20 = (t13 + 4);
    t14 = *((unsigned int *)t10);
    t15 = *((unsigned int *)t13);
    t16 = (t14 ^ t15);
    t17 = *((unsigned int *)t19);
    t18 = *((unsigned int *)t20);
    t22 = (t17 ^ t18);
    t23 = (t16 | t22);
    t24 = *((unsigned int *)t19);
    t25 = *((unsigned int *)t20);
    t26 = (t24 | t25);
    t27 = (~(t26));
    t28 = (t23 & t27);
    if (t28 != 0)
        goto LAB67;

LAB64:    if (t26 != 0)
        goto LAB66;

LAB65:    *((unsigned int *)t21) = 1;

LAB67:    t35 = (t21 + 4);
    t29 = *((unsigned int *)t35);
    t30 = (~(t29));
    t31 = *((unsigned int *)t21);
    t32 = (t31 & t30);
    t33 = (t32 != 0);
    if (t33 > 0)
        goto LAB68;

LAB69:
LAB70:    xsi_set_current_line(60, ng0);
    t2 = (t0 + 1928);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t7 = (t0 + 1928);
    t8 = (t7 + 72U);
    t9 = *((char **)t8);
    t11 = ((char*)((ng5)));
    xsi_vlog_generic_get_index_select_value(t10, 32, t4, t9, 2, t11, 32, 1);
    t12 = ((char*)((ng2)));
    memset(t21, 0, 8);
    t13 = (t10 + 4);
    t19 = (t12 + 4);
    t14 = *((unsigned int *)t10);
    t15 = *((unsigned int *)t12);
    t16 = (t14 ^ t15);
    t17 = *((unsigned int *)t13);
    t18 = *((unsigned int *)t19);
    t22 = (t17 ^ t18);
    t23 = (t16 | t22);
    t24 = *((unsigned int *)t13);
    t25 = *((unsigned int *)t19);
    t26 = (t24 | t25);
    t27 = (~(t26));
    t28 = (t23 & t27);
    if (t28 != 0)
        goto LAB74;

LAB71:    if (t26 != 0)
        goto LAB73;

LAB72:    *((unsigned int *)t21) = 1;

LAB74:    t34 = (t21 + 4);
    t29 = *((unsigned int *)t34);
    t30 = (~(t29));
    t31 = *((unsigned int *)t21);
    t32 = (t31 & t30);
    t33 = (t32 != 0);
    if (t33 > 0)
        goto LAB75;

LAB76:
LAB77:    goto LAB15;

LAB18:    t12 = (t10 + 4);
    *((unsigned int *)t10) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB20;

LAB19:    *((unsigned int *)t10) = 1;
    goto LAB20;

LAB22:    xsi_set_current_line(44, ng0);
    t19 = ((char*)((ng1)));
    t20 = (t0 + 1768);
    xsi_vlogvar_assign_value(t20, t19, 0, 0, 1);
    goto LAB24;

LAB26:    t8 = (t10 + 4);
    *((unsigned int *)t10) = 1;
    *((unsigned int *)t8) = 1;
    goto LAB28;

LAB30:    xsi_set_current_line(45, ng0);
    t11 = ((char*)((ng2)));
    t12 = (t0 + 1768);
    xsi_vlogvar_assign_value(t12, t11, 0, 0, 1);
    goto LAB32;

LAB36:    t19 = (t21 + 4);
    *((unsigned int *)t21) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB37;

LAB38:    xsi_set_current_line(49, ng0);
    t34 = ((char*)((ng1)));
    t35 = (t0 + 1768);
    xsi_vlogvar_assign_value(t35, t34, 0, 0, 1);
    goto LAB40;

LAB43:    t13 = (t21 + 4);
    *((unsigned int *)t21) = 1;
    *((unsigned int *)t13) = 1;
    goto LAB44;

LAB45:    xsi_set_current_line(50, ng0);
    t20 = ((char*)((ng2)));
    t34 = (t0 + 1768);
    xsi_vlogvar_assign_value(t34, t20, 0, 0, 1);
    goto LAB47;

LAB51:    t19 = (t21 + 4);
    *((unsigned int *)t21) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB52;

LAB53:    xsi_set_current_line(54, ng0);
    t34 = ((char*)((ng1)));
    t35 = (t0 + 1768);
    xsi_vlogvar_assign_value(t35, t34, 0, 0, 1);
    goto LAB55;

LAB58:    t13 = (t21 + 4);
    *((unsigned int *)t21) = 1;
    *((unsigned int *)t13) = 1;
    goto LAB59;

LAB60:    xsi_set_current_line(55, ng0);
    t20 = ((char*)((ng2)));
    t34 = (t0 + 1768);
    xsi_vlogvar_assign_value(t34, t20, 0, 0, 1);
    goto LAB62;

LAB66:    t34 = (t21 + 4);
    *((unsigned int *)t21) = 1;
    *((unsigned int *)t34) = 1;
    goto LAB67;

LAB68:    xsi_set_current_line(59, ng0);
    t36 = ((char*)((ng1)));
    t37 = (t0 + 1768);
    xsi_vlogvar_assign_value(t37, t36, 0, 0, 1);
    goto LAB70;

LAB73:    t20 = (t21 + 4);
    *((unsigned int *)t21) = 1;
    *((unsigned int *)t20) = 1;
    goto LAB74;

LAB75:    xsi_set_current_line(60, ng0);
    t35 = ((char*)((ng2)));
    t36 = (t0 + 1768);
    xsi_vlogvar_assign_value(t36, t35, 0, 0, 1);
    goto LAB77;

}


extern void work_m_06243276470073184398_2524752478_init()
{
	static char *pe[] = {(void *)Always_37_0,(void *)Always_39_1};
	xsi_register_didat("work_m_06243276470073184398_2524752478", "isim/testalu_isim_beh.exe.sim/work/m_06243276470073184398_2524752478.didat");
	xsi_register_executes(pe);
}
