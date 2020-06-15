/*
 * @Author: cpu_code
 * @Date: 2020-06-15 17:27:37
 * @LastEditTime: 2020-06-15 17:38:07
 * @FilePath: \c_course\string\floats.c
 * @Gitee: https://gitee.com/cpu_code
 * @CSDN: https://blog.csdn.net/qq_44226094
 */ 
// floats.c -- 一些浮点型修饰符的组合
#include <stdio.h>

int main(void)
{
    //限定变量为只读
    const double RENT = 3852.99; // const变量

    printf("*%f*\n", RENT);
    printf("*%e*\n", RENT);
    printf("*%4.2f*\n", RENT);
    printf("*%3.1f*\n", RENT);
    printf("*%10.3f*\n", RENT);
    printf("*%10.3E*\n", RENT);
    printf("*%+4.2f*\n", RENT);
    printf("*%010.2f*\n", RENT);
    
    return 0;
}

/**
*3852.990000*
*3.852990e+003*
*3852.99*
*3853.0*
*  3852.990*
*3.853E+003*
*+3852.99*
*0003852.99*
*/