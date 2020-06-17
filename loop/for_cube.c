/*
 * @Author: cpu_code
 * @Date: 2020-06-17 19:16:01
 * @LastEditTime: 2020-06-17 19:17:33
 * @FilePath: \c_course\loop\for_cube.c
 * @Gitee: https://gitee.com/cpu_code
 * @CSDN: https://blog.csdn.net/qq_44226094
 */ 
/* 使用for循环创建一个立方表 */
#include <stdio.h>

int main(void)
{
    int num;

    printf("    n   cubed\n");
    for (num = 1; num <= 6; num++)
    {
        printf("%5d %5d\n", num, num*num*num);
    }
    
    return 0;
}

/*
    n   cubed
    1     1
    2     8
    3    27
    4    64
    5   125
    6   216
*/