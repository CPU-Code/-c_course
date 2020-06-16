/*
 * @Author: cpu_code
 * @Date: 2020-06-16 10:16:28
 * @LastEditTime: 2020-06-16 10:31:33
 * @FilePath: \c_course\operation\shoes_while.c
 * @Gitee: https://gitee.com/cpu_code
 * @CSDN: https://blog.csdn.net/qq_44226094
 */ 

#include <stdio.h>

#define ADJUST 7.31 // 字符常量

int main(void)
{
    const double SCALE = 0.333; // const变量
    double shoe, foot;

    shoe = 15.4;

    while (shoe < 18.5) /* while循环开始 */
    { /* 块开始 */
        foot = SCALE * shoe + ADJUST;

        printf("shoe == %10.1f \nfoot == %15.2f \n", shoe, foot);

        shoe = shoe + 1.0;
    } /* 块结束 */

    return 0;
}

/*
shoe ==       15.4
foot ==           12.44
shoe ==       16.4
foot ==           12.77
shoe ==       17.4
foot ==           13.10
shoe ==       18.4
foot ==           13.44
*/