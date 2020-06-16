/*
 * @Author: cpu_code
 * @Date: 2020-06-16 18:15:59
 * @LastEditTime: 2020-06-16 18:20:00
 * @FilePath: \c_course\operation\convert.c
 * @Gitee: https://gitee.com/cpu_code
 * @CSDN: https://blog.csdn.net/qq_44226094
 */ 
/* 自动类型转换 */
#include <stdio.h>

int main(void)
{
    char ch;
    int i;
    float fl;

    fl = i = ch = 'C'; /* 第9行 */
    printf("ch = %c, i = %d, fl = %2.2f\n", ch, i, fl); /* 第10行 */

    ch = ch + 1; /* 第11行 */
    i = fl + 2 * ch; /* 第12行 */
    fl = 2.0 * ch + i; /* 第13行 */
    printf("ch = %c, i = %d, fl = %2.2f\n", ch, i, fl); /* 第14行 */

    //ch == 1107 % 265， 即83
    ch = 1107; /* 第15行 */
    printf("Now ch = %c\n", ch); /* 第16行 */

    ch = 80.89; /* 第17行 */
    printf("Now ch = %c\n", ch); /* 第18行 */

    getchar();
    
    return 0;
}

/*
ch = C, i = 67, fl = 67.00
ch = D, i = 203, fl = 339.00
Now ch = S
Now ch = P
*/