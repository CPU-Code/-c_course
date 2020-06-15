/*
 * @Author: cpu_code
 * @Date: 2020-05-28 20:00:08
 * @LastEditTime: 2020-05-28 20:24:51
 * @FilePath: \c_course\2_num\3_pri_type.c
 * @Gitee: https://gitee.com/cpu_code
 * @CSDN: https://blog.csdn.net/qq_44226094
 */ 
#include <stdio.h>

/* 
    short 类型， 可以使用 h 前缀。 
    %hd 表示以十进制，显示 short 类型的整数， 
    %ho 表示以八进制，显示 short 类型的整数。 
    h 和 l 前缀都可以和 u 一起使用， 用于表示无符号类型 
*/

int main(void)
{
    unsigned int uint = 3000000000;     /* int 为32位和 short 为16位的系统 */
    short short_t = 200;
    long long_t = 65537;
    long long llong = 12345678908642;

    printf("uint = %u and not %d\n", un, un);
    printf("short_t = %hd and %d\n", end, end);
    printf("long_t = %ld and not %hd\n", big, big);
    printf("llong = %lld and not %ld\n", verybig, verybig);
    
    return 0;
}

/* 输出结果：
uint = 3000000000 and not -1294967296
short_t = 200 and 200
long_t = 65537 and not 1
llong= 12345678908642 and not 1942899938
 */