/*
 * @Author: cpu_code
 * @Date: 2020-06-15 20:20:09
 * @LastEditTime: 2020-06-15 20:52:11
 * @FilePath: \c_course\string\input.c
 * @Gitee: https://gitee.com/cpu_code
 * @CSDN: https://blog.csdn.net/qq_44226094
 */ 

// input.c -- 使用&
#include <stdio.h>


/**
%c              把输入解释成字符
%d              把输入解释成有符号十进制整数
%e、 %f、 %g、 %a   把输入解释成浮点数（C99标准新增了%a）
%E、 %F、 %G、 %A   把输入解释成浮点数（C99标准新增了%A）
%i          把输入解释成有符号十进制整数
%o          把输入解释成有符号八进制整数
%p          把输入解释成指针（地址）
%s          把输入解释成字符串。 从第1个非空白字符开始， 到下一个空白字符之前的所有字符都是输入
%u          把输入解释成无符号十进制整数
%x、 %X     把输入解释成有符号十六进制整数
*           抑制赋值（详见后面解释）
            示例： "%*d"
数字        最大字段宽度。 输入达到最大字段宽度处， 或第1次遇到空白字符时停止
        示例： "%10s"
hh      把整数作为signed char或unsigned char类型读取
        示例： "%hhd"、 "%hhu"
ll      把整数作为long long或unsigned long long类型读取（C99）
        示例： "%lld"、 "%llu"
h、 l或L
    "%hd"和"%hi"        表明把对应的值储存为short int类型
    "%ho"、 "%hx"和"%hu"    表明把对应的值储存为unsigned short int类型
    "%ld"和"%li"        表明把对应的值储存为long类型
    "%lo"、 "%lx"和"%lu"    表明把对应的值储存为unsigned long类型
    "%le"、 "%lf"和"%lg"    表明把对应的值储存为double类型
    在e、 f和g前面使用L而不是l， 表明把对应的值被储存为long double类型。 
    如果没有修饰符， d、 i、 o和x表明对应的值被储存为int类型， f和g表明把对应的值储存为float类型
j       在整型转换说明后面时， 表明使用intmax_t或uintmax_t类型（C99）
        示例： "%jd"、 "%ju"
z       在整型转换说明后面时， 表明使用sizeof的返回类型（C99）
        示例： "%zd"、 "%zo"
t       在整型转换说明后面时， 表明使用表示两个指针差值的类型（C99）
        示例： "%td"、 "%tx
 */
int main(void)
{
    int age; // 变量
    float assets; // 变量
    char pet[30]; // 字符数组， 用于储存字符串

    printf("Enter your age, assets, and favorite pet.\n");
    scanf("%d %f", &age, &assets); // 这里要使用&
    scanf("%s", pet); // 字符数组不使用&

    printf("age == %d , assets == %.2f , pet == %s\n", age, assets, pet);

    return 0;
}

/*
Enter your age, assets, and favorite pet.
15
25.55
5
age == 15 , assets == 25.55 , pet == 5
*/