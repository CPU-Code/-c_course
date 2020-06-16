/*
 * @Author: cpu_code
 * @Date: 2020-06-16 09:44:23
 * @LastEditTime: 2020-06-16 09:46:58
 * @FilePath: \c_course\operation\choes.c
 * @Gitee: https://gitee.com/cpu_code
 * @CSDN: https://blog.csdn.net/qq_44226094
 */ 

#include <stdio.h>


//用#define指令创建符号常量
#define ADJUST 7.31     // 字符常量

int main(void)
{
    //const限定符的不可更改的变量
    const double SCALE = 0.333;     // const变量
    double shoe, foot;
    shoe = 9.0;
    foot = SCALE * shoe + ADJUST;

    printf("shoe == %10.1f \nfoot == %15.2f \n", shoe, foot);

    return 0;
}

/*
shoe ==        9.0
foot ==           10.31
*/