/*
 * @Author: cpu_code
 * @Date: 2020-05-28 20:27:01
 * @LastEditTime: 2020-05-28 20:28:10
 * @FilePath: \c_course\2_num\5_type_lib.c
 * @Gitee: https://gitee.com/cpu_code
 * @CSDN: https://blog.csdn.net/qq_44226094
 */ 

#include <stdio.h>
#include <inttypes.h> // 支持可移植类型

int main(void)
{
    int32_t me32;       // me32是一个32位有符号整型变量

    me32 = 45933945;

    printf("First, assume int32_t is int: ");
    printf("me32 = %d\n", me32);

    printf("Next, let's not make any assumptions.\n");
    printf("Instead, use a \"macro\" from inttypes.h: ");
    printf("me32 = %" "d" "\n", me32);

    return 0;
}
