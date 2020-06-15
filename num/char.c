/*
 * @Author: cpu_code
 * @Date: 2020-05-28 20:20:42
 * @LastEditTime: 2020-05-28 20:24:36
 * @FilePath: \c_course\2_num\4_char.c
 * @Gitee: https://gitee.com/cpu_code
 * @CSDN: https://blog.csdn.net/qq_44226094
 */ 
#include <stdio.h>

int main(void)
{
    char ch;

    printf("Please enter a character.\n");
    
    scanf("%c", &ch);   /* 用户输入字符 */

    printf("char = %c ten =  %d.\n", ch, ch);

    return 0;
}

/* 
Please enter a character.
B
char = B ten =  66. 
*/