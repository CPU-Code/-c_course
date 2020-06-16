/*
 * @Author: cpu_code
 * @Date: 2020-06-16 21:00:53
 * @LastEditTime: 2020-06-16 21:02:16
 * @FilePath: \c_course\loop\while.c
 * @Gitee: https://gitee.com/cpu_code
 * @CSDN: https://blog.csdn.net/qq_44226094
 */ 
/* while1.c -- 注意花括号的使用 */
/* 糟糕的代码创建了一个无限循环 */
#include <stdio.h>

int main(void)
{
    int n = 0;

    while (n < 3)
        printf("n is %d\n", n);
        n++;

    printf("That's all this program does\n");

    return 0;
}

/*
n is 0
n is 0
...
n is 0
n is 0
*/