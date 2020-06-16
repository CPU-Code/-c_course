/*
 * @Author: cpu_code
 * @Date: 2020-06-16 20:52:22
 * @LastEditTime: 2020-06-16 20:53:42
 * @FilePath: \c_course\loop\when.c
 * @Gitee: https://gitee.com/cpu_code
 * @CSDN: https://blog.csdn.net/qq_44226094
 */ 
//何时退出循环
#include <stdio.h>

int main(void)
{
    int n = 5;

    while (n < 7) // 第7行
    {
        printf("n = %d\n", n);

        n++; // 第10行

        printf("Now n = %d\n", n); // 第11行
    }

    printf("The loop has finished.\n");

    return 0;
}

/*
n = 5
Now n = 6
n = 6
Now n = 7
The loop has finished.
*/