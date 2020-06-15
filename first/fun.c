/*
 * @Author: cpu_code
 * @Date: 2020-05-28 16:13:05
 * @LastEditTime: 2020-05-28 16:16:17
 * @FilePath: \c_course\1_first_c\5_fun.c
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

void fun(void)      
{
    printf("function \n");
}

/* 输出结果：
function before
function
function after.
 */