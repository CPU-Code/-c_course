/*
 * @Author: cpu_code
 * @Date: 2020-06-15 15:02:26
 * @LastEditTime: 2020-06-15 15:06:29
 * @FilePath: \c_course\num\platinum.c
 * @Gitee: https://gitee.com/cpu_code
 * @CSDN: https://blog.csdn.net/qq_44226094
 */ 
#include <stdio.h>

int main(void)
{
    float weight; /* 你的体重 */
    float value; /* 价格 */

    /* 获取用户的输入 */
    scanf("%f", &weight);

    /* 14.5833为单价*/
    value = weight * 14.5833;

    printf("value == %.2f\n", value);

    return 0;
}

/*
23
value == 335.42
*/