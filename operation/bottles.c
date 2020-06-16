/*
 * @Author: cpu_code
 * @Date: 2020-06-16 15:40:38
 * @LastEditTime: 2020-06-16 15:44:41
 * @FilePath: \c_course\operation\bottles.c
 * @Gitee: https://gitee.com/cpu_code
 * @CSDN: https://blog.csdn.net/qq_44226094
 */ 
#include <stdio.h>

#define MAX 100

int main(void)
{
    int count = MAX + 1;

    // > is 大于， < is 小于
    while (--count > 0) 
    {
        printf("count == %d , " "count == %d \n", count, count);

        printf("count - 1 == %d \n\n", count - 1);
    } 

    return 0;
}

/*
count == 3 , count == 3
count - 1 == 2

count == 2 , count == 2
count - 1 == 1

count == 1 , count == 1
count - 1 == 0

*/