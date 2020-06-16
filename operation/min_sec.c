/*
 * @Author: cpu_code
 * @Date: 2020-06-16 15:22:36
 * @LastEditTime: 2020-06-16 15:24:32
 * @FilePath: \c_course\operation\min_sec.c
 * @Gitee: https://gitee.com/cpu_code
 * @CSDN: https://blog.csdn.net/qq_44226094
 */ 
// min_sec.c -- 把秒数转换成分和秒
#include <stdio.h>

#define SEC_PER_MIN 60 // 1分钟60秒

int main(void)
{
    int sec, min, left;

    printf("Convert seconds to minutes and seconds!\n");
    printf("Enter the number of seconds (<=0 to quit):\n");

    scanf("%d", &sec); // 读取秒数
    while (sec > 0)
    {
        min = sec / SEC_PER_MIN; // 截断分钟数
        left = sec % SEC_PER_MIN; // 剩下的秒数

        printf("%d seconds is %d minutes, %d seconds.\n", sec, min, left);
        printf("Enter next value (<=0 to quit):\n");

        scanf("%d", &sec);
    }
    printf("Done!\n");
    return 0;
}

/*
Convert seconds to minutes and seconds!
Enter the number of seconds (<=0 to quit):
95
95 seconds is 1 minutes, 35 seconds.
Enter next value (<=0 to quit):
15
15 seconds is 0 minutes, 15 seconds.
*/