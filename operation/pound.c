/*
 * @Author: cpu_code
 * @Date: 2020-06-16 18:24:23
 * @LastEditTime: 2020-06-16 18:28:23
 * @FilePath: \c_course\operation\pound.c
 * @Gitee: https://gitee.com/cpu_code
 * @CSDN: https://blog.csdn.net/qq_44226094
 */ 
/* 参数的函数 */
#include <stdio.h>

void pound(int n); // ANSI函数原型声明

int main(void)
{
    int times = 5;
    char ch = '!'; // ASCII码是33
    float f = 6.0f;

    pound(times);   // int类型的参数
    pound(ch);       // 和pound((int)ch);相同
    pound(f);       // 和pound((int)f);相同

    getchar();
    
    return 0;
}

void pound(int n) // ANSI风格函数头
{       // 表明该函数接受一个int类型的参数
    while (n-- > 0)
    {
        printf("#");
    }
    
    printf("\n");
}

/*
#####
#################################
######
*/