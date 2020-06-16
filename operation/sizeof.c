/*
 * @Author: cpu_code
 * @Date: 2020-06-16 15:18:11
 * @LastEditTime: 2020-06-16 15:19:38
 * @FilePath: \c_course\operation\sizeof.c
 * @Gitee: https://gitee.com/cpu_code
 * @CSDN: https://blog.csdn.net/qq_44226094
 */ 
// sizeof.c -- 使用sizeof运算符
// 使用C99新增的%zd转换说明 -- 如果编译器不支持%zd， 请将其改成%u或%lu
#include <stdio.h>

int main(void)
{
    int n = 0;
    size_t intsize;

    intsize = sizeof (int);
    printf("n == %d, n == %zd bytes; intsize == %zd bytes.\n", n, sizeof n, intsize);

    return 0;
}

/*
n == 0, n == zd bytes; intsize == zd bytes.
*/