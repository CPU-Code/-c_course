/*
 * @Author: cpu_code
 * @Date: 2020-05-28 17:46:10
 * @LastEditTime: 2020-05-28 17:55:02
 * @FilePath: \c_course\2_num\1_float.c
 * @Gitee: https://gitee.com/cpu_code
 * @CSDN: https://blog.csdn.net/qq_44226094
 */ 

#include <stdio.h>

int main(void)
{
    float num; /* 浮点数类型， 以便处理更大范围的数据, 可储存带小数的数字 */
    float value;

    /* 获取用户的输入 */
    scanf("%f", &num);

    value = 88.0 * num * 1.34;

    printf("value == %.2f \n", value);
    
    return 0;
}

/* 输出结果：
2.2
value == 259.42
*/