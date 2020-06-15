/*
 * @Author: cpu_code
 * @Date: 2020-06-15 20:20:09
 * @LastEditTime: 2020-06-15 20:24:15
 * @FilePath: \c_course\string\input.c
 * @Gitee: https://gitee.com/cpu_code
 * @CSDN: https://blog.csdn.net/qq_44226094
 */ 

// input.c -- 使用&
#include <stdio.h>

int main(void)
{
    int age; // 变量
    float assets; // 变量
    char pet[30]; // 字符数组， 用于储存字符串

    printf("Enter your age, assets, and favorite pet.\n");
    scanf("%d %f", &age, &assets); // 这里要使用&
    scanf("%s", pet); // 字符数组不使用&

    printf("age == %d , assets == %.2f , pet == %s\n", age, assets, pet);

    return 0;
}

/*
Enter your age, assets, and favorite pet.
15
25.55
5
age == 15 , assets == 25.55 , pet == 5
*/