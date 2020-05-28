/*
 * @Author: cpu_code
 * @Date: 2020-05-28 16:09:13
 * @LastEditTime: 2020-05-28 16:11:43
 * @FilePath: \c_course\1_first_c\4_multiply.c
 * @Gitee: https://gitee.com/cpu_code
 * @CSDN: https://blog.csdn.net/qq_44226094
 */ 

#include <stdio.h>

int main(void)
{
    int feet, fathoms;
    
    fathoms = 2;
    feet = 6 * fathoms;     /* 乘法 */
    printf("feet == %d and fathoms == %d \n", feet, fathoms);
    printf("6 * fathoms == %d \n", 6 * fathoms);
    
    return 0;
}

/* 输出结果
feet == 12 and fathoms == 2
6 * fathoms == 12
*/