/*
 * @Author: cpu_code
 * @Date: 2020-06-17 19:13:11
 * @LastEditTime: 2020-06-17 19:14:02
 * @FilePath: \c_course\loop\sweetie_for.c
 * @Gitee: https://gitee.com/cpu_code
 * @CSDN: https://blog.csdn.net/qq_44226094
 */ 
// sweetie2.c -- 使用for循环的计数循环
#include <stdio.h>

int main(void)
{
    const int NUMBER = 6;
    int count;

    for (count = 1; count <= NUMBER; count++)
    {
        printf("Be my Valentine!\n");
    }

    return 0;
}

/*
Be my Valentine!
Be my Valentine!
Be my Valentine!
Be my Valentine!
Be my Valentine!
Be my Valentine!
*/