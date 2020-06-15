/*
 * @Author: cpu_code
 * @Date: 2020-06-15 16:22:47
 * @LastEditTime: 2020-06-15 16:24:28
 * @FilePath: \c_course\num\pizza.c
 * @Gitee: https://gitee.com/cpu_code
 * @CSDN: https://blog.csdn.net/qq_44226094
 */ 
#include <stdio.h>

#define PI 3.14159

int main(void)
{
    float area, circum, radius;

    printf("What is the radius of your pizza?\n");
    scanf("%f", &radius);

    area = PI * radius * radius;
    circum = 2.0 * PI *radius;

    // 结果被四舍五入为两位小数输出
    printf("circum == %1.2f, area == %1.2f\n", circum, area);

    return 0;
}

/*
What is the radius of your pizza?
12
circum == 75.40, area == 452.39
*/