/*
 * @Author: cpu_code
 * @Date: 2020-06-16 09:14:25
 * @LastEditTime: 2020-06-16 09:15:24
 * @FilePath: \c_course\string\skip.c
 * @Gitee: https://gitee.com/cpu_code
 * @CSDN: https://blog.csdn.net/qq_44226094
 */ 
/* skiptwo.c -- 跳过输入中的前两个整数 */
#include <stdio.h>

int main(void)
{
    int n;

    printf("Please enter three integers:\n");
    scanf("%*d %*d %d", &n);

    printf("The last integer was %d\n", n);

    return 0;
}

/*
Please enter three integers:
2568 412 89
The last integer was 89
*/