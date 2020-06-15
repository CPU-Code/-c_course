/*
 * @Author: cpu_code
 * @Date: 2020-05-28 16:13:05
 * @LastEditTime: 2020-06-15 14:19:20
 * @FilePath: \c_course\first\fun.c
 * @Gitee: https://gitee.com/cpu_code
 * @CSDN: https://blog.csdn.net/qq_44226094
 */ 

#include <stdio.h>

void fun(void);      /* 函数声明 */

int main(void)
{
    printf(" function before\n");

    fun();

    printf(" function after.\n");

    return 0;
}

void fun(void)      /* 函数定义开始 */
{
    printf("function \n");
}

/* 输出结果：
function before
function
function after.
 */