/*
 * @Author: cpu_code
 * @Date: 2020-06-17 18:59:44
 * @LastEditTime: 2020-06-17 19:04:42
 * @FilePath: \c_course\loop\boolean.c
 * @Gitee: https://gitee.com/cpu_code
 * @CSDN: https://blog.csdn.net/qq_44226094
 */ 

/*
运算符（优先级从高至低）    结合律
()                          从左往右
- + ++ -- sizeof            从右往左
* / %                        从左往右
+ -                      从左往右
< > <= >=               从左往右
== !=                    从左往右
=                       从右往左
*/
// 使用_Bool类型的变量 variable
#include <stdio.h>

int main(void)
{
    long num;
    long sum = 0L;

    //不支持_Bool类型， 可 _Bool 替换成 int
    _Bool input_is_good;

    printf("Please enter an integer to be summed ");
    printf("(q to quit): ");

    //==运算符 返回的值不是1 就是0
    input_is_good = (scanf("%ld", &num) == 1);
    while (input_is_good)
    {
        sum = sum + num;

        printf("Please enter next integer (q to quit): ");
        input_is_good = (scanf("%ld", &num) == 1);
    }
    
    printf("Those integers sum to %ld.\n", sum);

    return 0;
}