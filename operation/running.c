/*
 * @Author: cpu_code
 * @Date: 2020-06-16 18:31:01
 * @LastEditTime: 2020-06-16 20:32:38
 * @FilePath: \c_course\operation\running.c
 * @Gitee: https://gitee.com/cpu_code
 * @CSDN: https://blog.csdn.net/qq_44226094
 */ 

#include <stdio.h>

const int S_PER_M = 60;          // 1分钟的秒数
const int S_PER_H = 3600;       // 1小时的秒数
const double M_PER_K = 0.62137; // 1公里的英里数

int main(void)
{
    double distk, distm; // 跑过的距离（分别以公里和英里为单位）
    double rate;         // 平均速度（以英里/小时为单位）
    int min, sec;        // 跑步用时（以分钟和秒为单位）
    int time;             // 跑步用时（以秒为单位）
    double mtime;       // 跑1英里需要的时间， 以秒为单位
    int mmin, msec;         // 跑1英里需要的时间， 以分钟和秒为单位

    scanf("%lf", &distk); // %lf表示读取一个double类型的值
    scanf("%d", &min);

    printf("Now enter the seconds:\n");
    scanf("%d", &sec);

    time = S_PER_M * min + sec;     // 把时间转换成秒
    distm = M_PER_K * distk;         // 把公里转换成英里
    rate = distm / time * S_PER_H;  // 英里/秒×秒/小时 = 英里/小时

    mtime = (double) time / distm;   // 时间/距离 = 跑1英里所用的时间
    mmin = (int) mtime / S_PER_M;    // 求出分钟数
    msec = (int) mtime % S_PER_M;   // 求出剩余的秒数

    printf("distk == %1.2f km , distm == %1.2f miles , min ==  %d min, sec == %d sec.\n", distk, distm, min, sec);
    printf("mmin == %d min \n", mmin);
    printf("msec == %d sec.\nrate == %1.2f mph.\n", msec, rate);
    
    return 0;
}

/*
53.1
15
Now enter the seconds:
35
distk == 53.10 km , distm == 32.99 miles , min ==  15 min, sec == 35 sec.
mmin == 0 min
msec == 28 sec.
rate == 127.04 mph.
*/