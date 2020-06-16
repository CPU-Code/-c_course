/*
 * @Author: cpu_code
 * @Date: 2020-06-16 15:37:10
 * @LastEditTime: 2020-06-16 15:38:17
 * @FilePath: \c_course\operation\post_pre.c
 * @Gitee: https://gitee.com/cpu_code
 * @CSDN: https://blog.csdn.net/qq_44226094
 */ 
/* post_pre.c -- 前缀和后缀 */

#include <stdio.h>

int main(void)
{
    int a = 1, b = 1;
    int a_post, pre_b;

    a_post = a++; // 后缀递增
    pre_b = ++b; // 前缀递增

    printf("a   a_post   b   pre_b \n");
    printf("%1d %5d %5d %5d\n", a, a_post, b, pre_b);
    
    return 0;
}

/*
a   a_post   b   pre_b
2     1     2     2
*/