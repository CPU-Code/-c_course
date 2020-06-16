/*
 * @Author: cpu_code
 * @Date: 2020-06-16 20:41:36
 * @LastEditTime: 2020-06-16 20:43:21
 * @FilePath: \c_course\loop\summing.c
 * @Gitee: https://gitee.com/cpu_code
 * @CSDN: https://blog.csdn.net/qq_44226094
 */ 
/* 根据用户键入的整数求和 */
#include <stdio.h>

int main(void)
{
    long num;
    long sum = 0L; /* 把sum初始化为0 */
    int status;

    printf("Please enter an integer to be summed ");
    printf("(q to quit): ");
    status = scanf("%ld", &num);

    while (status == 1) /* == 的意思是“等于” */
    {
        sum = sum + num;

        printf("Please enter next integer (q to quit): ");
    
        status = scanf("%ld", &num);
    }

    printf("Those integers sum to %ld.\n", sum);

    return 0;
}

/*
Please enter an integer to be summed (q to quit): 5
Please enter next integer (q to quit): 4
Please enter next integer (q to quit): q
Those integers sum to 9.
*/