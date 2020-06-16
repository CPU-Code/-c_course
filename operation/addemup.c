/*
 * @Author: cpu_code
 * @Date: 2020-06-16 15:47:42
 * @LastEditTime: 2020-06-16 15:48:45
 * @FilePath: \c_course\operation\addemup.c
 * @Gitee: https://gitee.com/cpu_code
 * @CSDN: https://blog.csdn.net/qq_44226094
 */ 
/* 几种常见的语句 */
#include <stdio.h>

int main(void) /* 计算前20个整数的和 */
{
    int count, sum; /* 声明[1] */

    count = 0; /* 表达式语句 */
    sum = 0; /* 表达式语句 */

    while (count++ < 20) /* 迭代语句 */
    {
        sum = sum + count;
    }
    
    printf("sum = %d\n", sum); /* 表达式语句[2] */

    return 0; /* 跳转语句 */
}

/*
sum = 210
*/