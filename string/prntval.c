/*
 * @Author: cpu_code
 * @Date: 2020-06-15 20:07:13
 * @LastEditTime: 2020-06-15 20:09:34
 * @FilePath: \c_course\string\prntval.c
 * @Gitee: https://gitee.com/cpu_code
 * @CSDN: https://blog.csdn.net/qq_44226094
 */ 
/* prntval.c -- printf()的返回值 */
#include <stdio.h>

int main(void)
{
    int bph2o = 212;
    int rv;

    rv = printf("bph2o == %d \n", bph2o);
    printf("rv == %d \n", rv);

    return 0;
}

/*
bph2o == 212
rv == 14
*/