/*
 * @Author: cpu_code
 * @Date: 2020-06-15 20:53:08
 * @LastEditTime: 2020-06-15 20:59:02
 * @FilePath: \c_course\string\varwid.c
 * @Gitee: https://gitee.com/cpu_code
 * @CSDN: https://blog.csdn.net/qq_44226094
 */ 
/* varwid.c -- 使用变宽输出字段 */
#include <stdio.h>

int main(void)
{
    unsigned width, precision;
    int number = 256;
    double weight = 242.5;

    printf("Enter a field width:\n");
    scanf("%d", &width);

    printf("number == :%*d:\n", width, number);
    printf("Now enter a width and a precision:\n");
    
    scanf("%d %d", &width, &precision);
    printf("Weight == %*.*f\n", width, precision, weight);
    printf("Done!\n");

    return 0;
}

/*
Enter a field width:
5
number == :  256:
Now enter a width and a precision:
5
9
Weight == 242.500000000
Done!
*/