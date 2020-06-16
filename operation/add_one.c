/*
 * @Author: cpu_code
 * @Date: 2020-06-16 15:26:26
 * @LastEditTime: 2020-06-16 15:27:14
 * @FilePath: \c_course\operation\add_one.c
 * @Gitee: https://gitee.com/cpu_code
 * @CSDN: https://blog.csdn.net/qq_44226094
 */ 
/* 递增： 前缀和后缀 */
#include <stdio.h>

int main(void)
{
    int ultra = 0, super = 0;

    while (super < 5)
    {
        super++;
        ++ultra;

        printf("super = %d, ultra = %d \n", super, ultra);
    } 

    return 0;
}

/*
super = 1, ultra = 1
super = 2, ultra = 2
super = 3, ultra = 3
super = 4, ultra = 4
super = 5, ultra = 5
*/