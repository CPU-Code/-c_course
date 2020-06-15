/*
 * @Author: cpu_code
 * @Date: 2020-06-15 16:49:58
 * @LastEditTime: 2020-06-15 16:51:51
 * @FilePath: \c_course\string\printout.c
 * @Gitee: https://gitee.com/cpu_code
 * @CSDN: https://blog.csdn.net/qq_44226094
 */ 
/* printout.c -- 使用转换说明 */
#include <stdio.h>

#define PI 3.141593

int main(void)
{
    int number = 7;
    float pies = 12.75;
    int cost = 7800;

    printf("number == %d and pies == %f \n", number, pies);
    printf("PI == %f.\n", PI);

    printf("'$' == %c and 2 * cost == %d\n", '$', 2 * cost);

    return 0;
}

/*
number == 7 and pies == 12.750000
PI == 3.141593.
'$' == $ and 2 * cost == 15600
*/