/*
 * @Author: cpu_code
 * @Date: 2020-06-17 14:56:47
 * @LastEditTime: 2020-06-17 14:57:59
 * @FilePath: \c_course\loop\truth.c
 * @Gitee: https://gitee.com/cpu_code
 * @CSDN: https://blog.csdn.net/qq_44226094
 */ 
//哪些值为真
#include <stdio.h>

int main(void)
{
    int n = 3;

    while (n)
        printf("%2d is true\n", n--);

    printf("%2d is false\n", n);

    n = -3;

    while (n)
        printf("%2d is true\n", n++);

    printf("%2d is false\n", n);

    return 0;
}

/*
 3 is true
 2 is true
 1 is true
 0 is false
-3 is true
-2 is true
-1 is true
 0 is false
*/