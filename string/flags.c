/*
 * @Author: cpu_code
 * @Date: 2020-06-15 17:39:29
 * @LastEditTime: 2020-06-15 17:40:33
 * @FilePath: \c_course\string\flags.c
 * @Gitee: https://gitee.com/cpu_code
 * @CSDN: https://blog.csdn.net/qq_44226094
 */ 
/* flags.c -- 演示一些格式标记 */

#include <stdio.h>

int main(void)
{
    printf("%x %X %#x\n", 31, 31, 31);
    printf("**%d**% d**% d**\n", 42, 42, -42);
    printf("**%5d**%5.3d**%05d**%05.3d**\n", 6, 6, 6, 6);

    return 0;
}

/*
1f 1F 0x1f
**42** 42**-42**
**    6**  006**00006**  006**
*/