/*
 * @Author: cpu_code
 * @Date: 2020-06-15 19:52:09
 * @LastEditTime: 2020-06-15 20:04:29
 * @FilePath: \c_course\string\floatcnv.c
 * @Gitee: https://gitee.com/cpu_code
 * @CSDN: https://blog.csdn.net/qq_44226094
 */ 
/* floatcnv.c -- 不匹配的浮点型转换 */
#include <stdio.h>

int main(void)
{
    float n1 = 3.0;
    double n2 = 3.0;
    long n3 = 2000000000;
    long n4 = 1234567890;

    //%e转换说明没有把整数转换成浮点数
    printf("n1 == %.1e , n2 == %.1e , n3 == %.1e , n4 == %.1e\n", n1, n2, n3, n4);
    printf("n3 == %ld , n4 == %ld\n", n3, n4);
    //%ld转换说明打印浮点数会失败
    printf("n1 == %ld , n2 == %ld , n3 == %ld , n4 == %ld\n", n1, n2, n3, n4);

    return 0;
}

/*
n1 == 3.0e+000 , n2 == 3.0e+000 , n3 == 3.1e+046 , n4 == 1.3e-307
n3 == 2000000000 , n4 == 1234567890
n1 == 0 , n2 == 1074266112 , n3 == 0 , n4 == 1074266112
*/