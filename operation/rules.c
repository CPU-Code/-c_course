/*
 * @Author: cpu_code
 * @Date: 2020-06-16 15:15:49
 * @LastEditTime: 2020-06-16 15:17:27
 * @FilePath: \c_course\operation\rules.c
 * @Gitee: https://gitee.com/cpu_code
 * @CSDN: https://blog.csdn.net/qq_44226094
 */ 
/* rules.c -- 优先级测试 */

/**
运算符          结合律
()              从左往右
+ -（ 一元）     从右往左
* /              从左往右
+ -（ 二元）     从左往右
=               从右往左
 */
#include <stdio.h>

int main(void)
{
    int top, score;

    top = score = -(2 + 5) * 6 + (4 + 3 * (2 + 3));
    printf("top == %d, score == %d\n", top, score);

    return 0;
}

/*
top == -23, score == -23
*/