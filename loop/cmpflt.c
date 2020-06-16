/*
 * @Author: cpu_code
 * @Date: 2020-06-16 22:29:28
 * @LastEditTime: 2020-06-16 22:45:38
 * @FilePath: \c_course\loop\cmpflt.c
 * @Gitee: https://gitee.com/cpu_code
 * @CSDN: https://blog.csdn.net/qq_44226094
 */ 
// 浮点数比较
#include <math.h>
#include <stdio.h>

int main(void)
{
    const double ANSWER = 3.14159;
    double response;

    printf("What is the value of pi?\n");
    scanf("%lf", &response);

    //返回一个浮点值的绝对值
    while (fabs(response - ANSWER) > 0.0001)
    {
        printf("Try again!\n");
        scanf("%lf", &response);
    }

    printf("Close enough!\n");

    return 0;
}

/*
What is the value of pi?
2.6
Try again!
4.2
Try again!
6.8
Try again!
*/