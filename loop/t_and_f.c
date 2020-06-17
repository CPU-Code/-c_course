/*
 * @Author: cpu_code
 * @Date: 2020-06-17 11:19:12
 * @LastEditTime: 2020-06-17 14:55:39
 * @FilePath: \c_course\loop\t_and_f.c
 * @Gitee: https://gitee.com/cpu_code
 * @CSDN: https://blog.csdn.net/qq_44226094
 */ 
/* C中的真和假的值 */
#include <stdio.h>

int main(void)
{
    int true_val, false_val;

    true_val = (10 > 2); // 关系为真的值
    false_val = (10 == 2); // 关系为假的值

    printf("true = %d; false = %d \n", true_val, false_val);

    return 0;
}

/*
true = 1; false = 0
*/