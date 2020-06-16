/*
 * @Author: cpu_code
 * @Date: 2020-06-16 11:06:29
 * @LastEditTime: 2020-06-16 11:08:41
 * @FilePath: \c_course\operation\squares.c
 * @Gitee: https://gitee.com/cpu_code
 * @CSDN: https://blog.csdn.net/qq_44226094
 */ 
#include <stdio.h>

int main(void)
{
    int num = 16;

    while (num < 21)
    {
        printf("num == %4d  and  num * num == %6d\n", num, num * num);
        num = num + 1;
    } 

    return 0;
}

/*
num ==   16  and  num * num ==    256
num ==   17  and  num * num ==    289
num ==   18  and  num * num ==    324
num ==   19  and  num * num ==    361
num ==   20  and  num * num ==    400
*/