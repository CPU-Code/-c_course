/*
 * @Author: cpu_code
 * @Date: 2020-06-15 16:39:12
 * @LastEditTime: 2020-06-15 16:42:17
 * @FilePath: \c_course\num\defines.c
 * @Gitee: https://gitee.com/cpu_code
 * @CSDN: https://blog.csdn.net/qq_44226094
 */ 
#include <stdio.h>
#include <limits.h> // 整型限制
#include <float.h> // 浮点型限制

/**
CHAR_BIT    char类型的位数
CHAR_MAX    char类型的最大值
CHAR_MIN    char类型的最小值
SCHAR_MAX   signed char类型的最大值
SCHAR_MIN   signed char类型的最小值
UCHAR_MAX   unsigned char类型的最大值
SHRT_MAX     short类型的最大值
SHRT_MIN     short类型的最小值
USHRT_MAX    unsigned short类型的最大值
INT_MAX  int类型的最大值
INT_MIN  int类型的最小值
UINT_MAX    unsigned int的最大值
LONG_MAX    long类型的最大值
LONG_MIN    long类型的最小值
ULONG_MAX   unsigned long类型的最大值
LLONG_MAX   long long类型的最大值
LLONG_MIN   long long类型的最小值
ULLONG_MAX   unsigned long long类型的最大值
FLT_MANT_DIG    float类型的尾数位数FLT_DIG float类型的最少有效数字位数（十进制）
FLT_MIN_10_EXP  带全部有效数字的float类型的最小负指数（以10为底）
FLT_MAX_10_EXP  float类型的最大正指数（以10为底）
FLT_MIN         保留全部精度的float类型最小正数
FLT_MAX          float类型的最大正数
FLT_EPSILON     1.00和比1.00大的最小float类型值之间的差值
 */

int main(void)
{
    printf("Some number limits for this system:\n");
    printf("Biggest int: %d\n", INT_MAX);
    printf("Smallest long long: %lld\n", LLONG_MIN);
    printf("One byte = %d bits on this system.\n", CHAR_BIT);
    printf("Largest double: %e\n", DBL_MAX);
    printf("Smallest normal float: %e\n", FLT_MIN);
    printf("float precision = %d digits\n", FLT_DIG);
    printf("float epsilon = %e\n", FLT_EPSILON);
    
    return 0;
}

/*
Some number limits for this system:
Biggest int: 2147483647
Smallest long long: -9223372036854775808
One byte = 8 bits on this system.
Largest double: 1.797693e+308
Smallest normal float: 1.175494e-038
float precision = 6 digits
float epsilon = 1.192093e-007
*/