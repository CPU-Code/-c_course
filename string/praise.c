/*
 * @Author: cpu_code
 * @Date: 2020-06-15 16:05:44
 * @LastEditTime: 2020-06-15 16:08:17
 * @FilePath: \c_course\string\praise.c
 * @Gitee: https://gitee.com/cpu_code
 * @CSDN: https://blog.csdn.net/qq_44226094
 */ 
#include <stdio.h>

#define PRAISE "You are an extraordinary being."

int main(void)
{
    char name[40];

    printf("What's your name? ");
    //scanf() 遇到第1个空白（空格、 制表符或换行符） 时就不再读取输入
    scanf("%s", name);

    printf("Hello, %s. %s\n", name, PRAISE);

    return 0;
}

/*
What's your name? af
Hello, af. You are an extraordinary being.
*/