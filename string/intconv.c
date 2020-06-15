/*
 * @Author: cpu_code
 * @Date: 2020-06-15 19:27:09
 * @LastEditTime: 2020-06-15 19:43:49
 * @FilePath: \c_course\string\intconv.c
 * @Gitee: https://gitee.com/cpu_code
 * @CSDN: https://blog.csdn.net/qq_44226094
 */ 
/* intconv.c -- 不匹配的整型转换 */
#include <stdio.h>

#define PAGES 336
#define WORDS 65618

int main(void)
{
    short num = PAGES;
    short mnum = -PAGES;

    printf("num as short == %hd , unsigned short ==  %hu\n", num, num);
    printf("-num as short == %hd , unsigned short == %hu\n", mnum, mnum);
    printf("num as int == %d , char == %c\n", num, num);
    printf("WORDS as int == %d, short == %hd , char == %c\n",WORDS, WORDS, WORDS);

    return 0;
}

/*
num as short == 336 , unsigned short ==  336
-num as short == -336 , unsigned short == 65200
num as int == 336 , char == P
WORDS as int == 65618, short == 82 , char == R
*/