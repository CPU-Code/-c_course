/*
 * @Author: cpu_code
 * @Date: 2020-06-17 15:03:33
 * @LastEditTime: 2020-06-17 15:04:28
 * @FilePath: \c_course\loop\trouble.c
 * @Gitee: https://gitee.com/cpu_code
 * @CSDN: https://blog.csdn.net/qq_44226094
 */ 
//误用=会导致无限循环
#include <stdio.h>
int main(void)
{
    long num;
    long sum = 0L;
    int status;

    printf("Please enter an integer to be summed ");
    printf("(q to quit): ");

    status = scanf("%ld", &num);
    while (status = 1)
    {
        sum = sum + num;

        printf("Please enter next integer (q to quit): ");
        status = scanf("%ld", &num);
    }
    printf("Those integers sum to %ld.\n", sum);

    return 0;
}