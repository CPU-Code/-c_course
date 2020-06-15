/*
 * @Author: cpu_code
 * @Date: 2020-06-15 16:11:50
 * @LastEditTime: 2020-06-15 16:16:49
 * @FilePath: \c_course\string\praise_lu.c
 * @Gitee: https://gitee.com/cpu_code
 * @CSDN: https://blog.csdn.net/qq_44226094
 */ 

#include <stdio.h>
#include <string.h> /* 提供strlen()函数的原型 */

#define PRAISE "You are an extraordinary being."

int main(void)
{
    char name[40];

    printf("What's your name? ");
    scanf("%s", name);

    printf("name == %s and PRAISE == %s\n", name, PRAISE);
    printf("strlen(name) == %zd and sizeof name == %zd \n", strlen(name), sizeof name);
    printf("strlen(PRAISE) == %zd \n", strlen(PRAISE));

    printf("sizeof PRAISE == %zd \n", sizeof PRAISE);
    return 0;
}

/*
What's your name? af
name == af and PRAISE == You are an extraordinary being.
strlen(name) == zd and sizeof name == zd
strlen(PRAISE) == zd
sizeof PRAISE == zd
*/