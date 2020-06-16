/*
 * @Author: cpu_code
 * @Date: 2020-06-16 21:04:55
 * @LastEditTime: 2020-06-16 21:07:00
 * @FilePath: \c_course\loop\while_semicolon.c
 * @Gitee: https://gitee.com/cpu_code
 * @CSDN: https://blog.csdn.net/qq_44226094
 */ 
/* while2.c -- 注意分号的位置 */
#include <stdio.h>

int main(void)
{
    int n = 0;

    while (n++ < 3); /* 第7行 */
    printf("n is %d\n", n); /* 第8行 */
    printf("That's all this program does.\n");

    return 0;
}

/*
n is 4
That's all this program does.
*/