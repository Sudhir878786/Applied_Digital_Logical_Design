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
static const char *ng0 = "/home/ise/multiplyer/multiplyer.v";
static unsigned int ng1[] = {0U, 0U};
static int ng2[] = {0, 0};
static int ng3[] = {4, 0};
static int ng4[] = {1, 0};
static unsigned int ng5[] = {1U, 0U};



static void Always_32_0(char *t0)
{
    char t13[8];
    char t19[8];
    char t23[8];
    char t31[8];
    char t71[8];
    char t89[8];
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
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    char *t17;
    char *t18;
    char *t20;
    char *t21;
    char *t22;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    char *t35;
    char *t36;
    char *t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    char *t45;
    char *t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    int t55;
    int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    char *t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    char *t69;
    char *t70;
    char *t72;
    char *t73;
    char *t74;
    char *t75;
    char *t76;
    char *t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    char *t83;
    char *t84;
    char *t85;
    char *t86;
    char *t87;
    char *t88;
    char *t90;

LAB0:    t1 = (t0 + 3640U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(32, ng0);
    t2 = (t0 + 3960);
    *((int *)t2) = 1;
    t3 = (t0 + 3672);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(33, ng0);

LAB5:    xsi_set_current_line(34, ng0);
    t4 = (t0 + 1688U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(43, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    memset(t13, 0, 8);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t2) != 0)
        goto LAB12;

LAB13:    t5 = (t13 + 4);
    t14 = *((unsigned int *)t13);
    t15 = *((unsigned int *)t5);
    t16 = (t14 || t15);
    if (t16 > 0)
        goto LAB14;

LAB15:    memcpy(t31, t13, 8);

LAB16:    t63 = (t31 + 4);
    t64 = *((unsigned int *)t63);
    t65 = (~(t64));
    t66 = *((unsigned int *)t31);
    t67 = (t66 & t65);
    t68 = (t67 != 0);
    if (t68 > 0)
        goto LAB29;

LAB30:
LAB31:
LAB8:    xsi_set_current_line(52, ng0);
    t2 = (t0 + 2568);
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
    t14 = (t9 ^ t10);
    t15 = (t8 | t14);
    t16 = *((unsigned int *)t11);
    t25 = *((unsigned int *)t12);
    t26 = (t16 | t25);
    t27 = (~(t26));
    t28 = (t15 & t27);
    if (t28 != 0)
        goto LAB40;

LAB37:    if (t26 != 0)
        goto LAB39;

LAB38:    *((unsigned int *)t13) = 1;

LAB40:    t18 = (t13 + 4);
    t29 = *((unsigned int *)t18);
    t32 = (~(t29));
    t33 = *((unsigned int *)t13);
    t34 = (t33 & t32);
    t38 = (t34 != 0);
    if (t38 > 0)
        goto LAB41;

LAB42:
LAB43:    goto LAB2;

LAB6:    xsi_set_current_line(35, ng0);

LAB9:    xsi_set_current_line(36, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 2088);
    xsi_vlogvar_assign_value(t12, t11, 0, 0, 8);
    xsi_set_current_line(37, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2248);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(38, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2568);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    xsi_set_current_line(39, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng1)));
    xsi_vlogtype_concat(t13, 8, 8, 2U, t2, 4, t3, 4);
    t4 = (t0 + 2728);
    xsi_vlogvar_assign_value(t4, t13, 0, 0, 8);
    xsi_set_current_line(40, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2408);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    goto LAB8;

LAB10:    *((unsigned int *)t13) = 1;
    goto LAB13;

LAB12:    t4 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t4) = 1;
    goto LAB13;

LAB14:    t11 = (t0 + 2568);
    t12 = (t11 + 56U);
    t17 = *((char **)t12);
    t18 = ((char*)((ng3)));
    memset(t19, 0, 8);
    t20 = (t17 + 4);
    if (*((unsigned int *)t20) != 0)
        goto LAB18;

LAB17:    t21 = (t18 + 4);
    if (*((unsigned int *)t21) != 0)
        goto LAB18;

LAB21:    if (*((unsigned int *)t17) < *((unsigned int *)t18))
        goto LAB19;

LAB20:    memset(t23, 0, 8);
    t24 = (t19 + 4);
    t25 = *((unsigned int *)t24);
    t26 = (~(t25));
    t27 = *((unsigned int *)t19);
    t28 = (t27 & t26);
    t29 = (t28 & 1U);
    if (t29 != 0)
        goto LAB22;

LAB23:    if (*((unsigned int *)t24) != 0)
        goto LAB24;

LAB25:    t32 = *((unsigned int *)t13);
    t33 = *((unsigned int *)t23);
    t34 = (t32 & t33);
    *((unsigned int *)t31) = t34;
    t35 = (t13 + 4);
    t36 = (t23 + 4);
    t37 = (t31 + 4);
    t38 = *((unsigned int *)t35);
    t39 = *((unsigned int *)t36);
    t40 = (t38 | t39);
    *((unsigned int *)t37) = t40;
    t41 = *((unsigned int *)t37);
    t42 = (t41 != 0);
    if (t42 == 1)
        goto LAB26;

LAB27:
LAB28:    goto LAB16;

LAB18:    t22 = (t19 + 4);
    *((unsigned int *)t19) = 1;
    *((unsigned int *)t22) = 1;
    goto LAB20;

LAB19:    *((unsigned int *)t19) = 1;
    goto LAB20;

LAB22:    *((unsigned int *)t23) = 1;
    goto LAB25;

LAB24:    t30 = (t23 + 4);
    *((unsigned int *)t23) = 1;
    *((unsigned int *)t30) = 1;
    goto LAB25;

LAB26:    t43 = *((unsigned int *)t31);
    t44 = *((unsigned int *)t37);
    *((unsigned int *)t31) = (t43 | t44);
    t45 = (t13 + 4);
    t46 = (t23 + 4);
    t47 = *((unsigned int *)t13);
    t48 = (~(t47));
    t49 = *((unsigned int *)t45);
    t50 = (~(t49));
    t51 = *((unsigned int *)t23);
    t52 = (~(t51));
    t53 = *((unsigned int *)t46);
    t54 = (~(t53));
    t55 = (t48 & t50);
    t56 = (t52 & t54);
    t57 = (~(t55));
    t58 = (~(t56));
    t59 = *((unsigned int *)t37);
    *((unsigned int *)t37) = (t59 & t57);
    t60 = *((unsigned int *)t37);
    *((unsigned int *)t37) = (t60 & t58);
    t61 = *((unsigned int *)t31);
    *((unsigned int *)t31) = (t61 & t57);
    t62 = *((unsigned int *)t31);
    *((unsigned int *)t31) = (t62 & t58);
    goto LAB28;

LAB29:    xsi_set_current_line(44, ng0);

LAB32:    xsi_set_current_line(45, ng0);
    t69 = (t0 + 1048U);
    t70 = *((char **)t69);
    t69 = (t0 + 1008U);
    t72 = (t69 + 72U);
    t73 = *((char **)t72);
    t74 = (t0 + 2568);
    t75 = (t74 + 56U);
    t76 = *((char **)t75);
    xsi_vlog_generic_get_index_select_value(t71, 1, t70, t73, 2, t76, 3, 2);
    t77 = (t71 + 4);
    t78 = *((unsigned int *)t77);
    t79 = (~(t78));
    t80 = *((unsigned int *)t71);
    t81 = (t80 & t79);
    t82 = (t81 != 0);
    if (t82 > 0)
        goto LAB33;

LAB34:    xsi_set_current_line(46, ng0);
    t2 = (t0 + 2088);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 8, 0LL);

LAB35:    xsi_set_current_line(49, ng0);
    t2 = (t0 + 2568);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng4)));
    memset(t13, 0, 8);
    xsi_vlog_unsigned_add(t13, 32, t4, 3, t5, 32);
    t11 = (t0 + 2568);
    xsi_vlogvar_assign_value(t11, t13, 0, 0, 3);
    goto LAB31;

LAB33:    xsi_set_current_line(45, ng0);

LAB36:    xsi_set_current_line(45, ng0);
    t83 = (t0 + 2728);
    t84 = (t83 + 56U);
    t85 = *((char **)t84);
    t86 = (t0 + 2568);
    t87 = (t86 + 56U);
    t88 = *((char **)t87);
    memset(t89, 0, 8);
    xsi_vlog_unsigned_lshift(t89, 8, t85, 8, t88, 3);
    t90 = (t0 + 2408);
    xsi_vlogvar_assign_value(t90, t89, 0, 0, 8);
    xsi_set_current_line(45, ng0);
    t2 = (t0 + 2088);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2408);
    t11 = (t5 + 56U);
    t12 = *((char **)t11);
    memset(t13, 0, 8);
    xsi_vlog_unsigned_add(t13, 8, t4, 8, t12, 8);
    t17 = (t0 + 2088);
    xsi_vlogvar_assign_value(t17, t13, 0, 0, 8);
    goto LAB35;

LAB39:    t17 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t17) = 1;
    goto LAB40;

LAB41:    xsi_set_current_line(52, ng0);
    t20 = ((char*)((ng5)));
    t21 = (t0 + 2248);
    xsi_vlogvar_assign_value(t21, t20, 0, 0, 1);
    goto LAB43;

}


extern void work_m_15245435036842355429_2180691781_init()
{
	static char *pe[] = {(void *)Always_32_0};
	xsi_register_didat("work_m_15245435036842355429_2180691781", "isim/seqmult_isim_beh.exe.sim/work/m_15245435036842355429_2180691781.didat");
	xsi_register_executes(pe);
}
