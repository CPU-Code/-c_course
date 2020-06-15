/*
 * @Author: cpu_code
 * @Date: 2020-06-15 19:21:15
 * @LastEditTime: 2020-06-15 19:23:18
 * @FilePath: \c_course\string\stringf.c
 * @Gitee: https://gitee.com/cpu_code
 * @CSDN: https://blog.csdn.net/qq_44226094
 */ 
/* stringf.c -- 字符串格式 */
#include <stdio.h>

#define BLURB "Authentic imitation!"

int main(void)
{
    printf("[%2s]\n", BLURB);
    printf("[%24s]\n", BLURB);
    //.5告诉printf()只打印5个字符
    printf("[%24.5s]\n", BLURB);
    //-标记使得文本左对齐输出
    printf("[%-24.5s]\n", BLURB);

    return 0;
}

/*
[Authentic imitation!]
[    Authentic imitation!]
[                   Authe]
[Authe                   ]
*/