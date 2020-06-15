/*
 * @Author: cpu_code
 * @Date: 2020-06-15 15:13:34
 * @LastEditTime: 2020-06-15 15:20:50
 * @FilePath: \c_course\string\talkback.c
 * @Gitee: https://gitee.com/cpu_code
 * @CSDN: https://blog.csdn.net/qq_44226094
 */ 
#include <stdio.h>
#include <string.h> // 提供strlen()函数的原型

//用C预处理器把字符常量DENSITY定义为62.4
#define DENSITY 62.4 // 人体密度（单位： 磅/立方英尺）

int main()
{
    float weight, volume;
    int size, letters;
    char name[40]; // name是一个可容纳40个字符的数组

    printf("Hi! What's your first name?\n");
    scanf("%s", name);
    printf("%s, what's your weight in pounds?\n", name);

    scanf("%f", &weight);

    size = sizeof name;

    //获取字符串的长度
    letters = strlen(name);
    volume = weight / DENSITY;

    printf("name == %s, volume == %2.2f \n", name, volume);
    printf("letters == %d is name of len \n", letters);
    printf("size == %d\n", size);

    return 0;
}

/*
Hi! What's your first name?
asdfg
asdfg, what's your weight in pounds?
52.6
name == asdfg, volume == 0.84
letters == 5 is name of len
size == 40
*/