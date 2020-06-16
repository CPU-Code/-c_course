/*
 * @Author: cpu_code
 * @Date: 2020-06-16 11:09:45
 * @LastEditTime: 2020-06-16 12:42:31
 * @FilePath: \c_course\operation\wheat.c
 * @Gitee: https://gitee.com/cpu_code
 * @CSDN: https://blog.csdn.net/qq_44226094
 */ 
#include <stdio.h>

#define SQUARES 64 // 棋盘中的方格数

int main(void)
{
    const double CROP = 2E16; // 世界小麦年产谷粒数
    double current, total;
    int count = 50;

    printf("square grains total ");
    printf("fraction of \n");
    printf("count     current ");
    printf("     total      total/CROP\n");
    total = current = 1.0; /* 从1颗谷粒开始 */
    printf("%4d  %13.2e %12.2e %12.2e\n", count, current, total, total / CROP);
    while (count < SQUARES)
    {
        count = count + 1;
        current = 2.0 * current; /* 下一个方格谷粒翻倍 */
        total = total + current; /* 更新总数 */
        printf("%4d  %13.2e %12.2e %12.2e\n", 
        count, current,total, total / CROP);
    }

    printf("That's all.\n");

    return 0;
}

/*
square grains total fraction of
count     current      total      total/CROP
  50      1.00e+000    1.00e+000    5.00e-017
  51      2.00e+000    3.00e+000    1.50e-016
  52      4.00e+000    7.00e+000    3.50e-016
  53      8.00e+000    1.50e+001    7.50e-016
  54      1.60e+001    3.10e+001    1.55e-015
  55      3.20e+001    6.30e+001    3.15e-015
  56      6.40e+001    1.27e+002    6.35e-015
  57      1.28e+002    2.55e+002    1.27e-014
  58      2.56e+002    5.11e+002    2.55e-014
  59      5.12e+002    1.02e+003    5.12e-014
  60      1.02e+003    2.05e+003    1.02e-013
  61      2.05e+003    4.10e+003    2.05e-013
  62      4.10e+003    8.19e+003    4.10e-013
  63      8.19e+003    1.64e+004    8.19e-013
  64      1.64e+004    3.28e+004    1.64e-012
That's all.
*/