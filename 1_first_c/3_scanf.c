/*
 * @Author: cpu_code
 * @Date: 2020-05-28 15:36:12
 * @LastEditTime: 2020-05-28 16:06:46
 * @FilePath: \c_course\1_first_c\3_scanf.c
 * @Gitee: https://gitee.com/cpu_code
 * @CSDN: https://blog.csdn.net/qq_44226094
 */ 
#include <stdio.h>

int main()  /* 函数名 */
{
    int dogs;   /* 定义一个名为num的变量 */
    
    printf("How many dogs do you have?\n");
    scanf("%d", &dogs);         /* 输入信息，& 取地址 */
    printf("So you have %d dog(s)!\n", dogs);
    
    return 0;
}

/* 输出结果：
How many dogs do you have?
2
So you have 2 dog(s)!
*/