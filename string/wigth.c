/*
 * @Author: cpu_code
 * @Date: 2020-06-15 17:04:11
 * @LastEditTime: 2020-06-15 17:04:51
 * @FilePath: \c_course\string\wigth.c
 * @Gitee: https://gitee.com/cpu_code
 * @CSDN: https://blog.csdn.net/qq_44226094
 */ 
/* width.c -- 字段宽度 */
#include <stdio.h>

#define PAGES 959

int main(void)
{
    printf("*%d*\n", PAGES);
    printf("*%2d*\n", PAGES);
    printf("*%10d*\n", PAGES);
    printf("*%-10d*\n", PAGES);

    return 0;
}

/*
*959*
*959*
*       959*
*959       *
*/