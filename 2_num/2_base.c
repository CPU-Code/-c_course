/*
 * @Author: cpu_code
 * @Date: 2020-05-28 17:56:59
 * @LastEditTime: 2020-05-28 17:57:51
 * @FilePath: \c_course\2_num\2_base.c
 * @Gitee: https://gitee.com/cpu_code
 * @CSDN: https://blog.csdn.net/qq_44226094
 */ 

#include <stdio.h>

int main(void)
{
    int x = 100;

    printf("dec = %d; octal = %o; hex = %x\n", x, x, x);
    printf("dec = %d; octal = %#o; hex = %#x\n", x, x, x);

    return 0;
}

/*
dec = 100; octal = 144; hex = 64
dec = 100; octal = 0144; hex = 0x64 
 */