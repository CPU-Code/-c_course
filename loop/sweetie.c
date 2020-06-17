/*
 * @Author: cpu_code
 * @Date: 2020-06-17 19:09:59
 * @LastEditTime: 2020-06-17 19:11:26
 * @FilePath: \c_course\loop\sweetie.c
 * @Gitee: https://gitee.com/cpu_code
 * @CSDN: https://blog.csdn.net/qq_44226094
 */ 
// 一个计数循环
#include <stdio.h>

int main(void)
{
    const int NUMBER = 6;
    int count = 1; // 初始化

    while (count <= NUMBER) // 测试
    {
        printf("Be my Valentine!\n"); // 行为
        count++; // 更新计数
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