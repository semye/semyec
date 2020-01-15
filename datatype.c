//
// Created by yesheng on 2018/10/30.
// 数据类型
// 各种类型的存储大小与系统位数有关，但目前通用的以64位系统为主
// 1字节 8位
// float 单精度浮点值。单精度是这样的格式，1位符号，8位指数，23位小数。
// double 双精度浮点值。双精度是1位符号，11位指数，52位小数。
//
//
// 基本类型 整数类型和浮点类型
//
//         整数类型
//         类型            存储大小        值范围
//         char            1字节           -128~127 或0到255
//         unsigned char   1字节           0到255
//         signed char     1字节           -128~127
//         int             2 或 4 字节     -32,768 到 32,767 或 -2,147,483,648 到 2,147,483,647
//         unsigned int    2 或 4 字节     0到65,535 或 0到4,294,967,295
//         short           2 字节          -32,768 到 32,767
//         unsigned short  2 字节          0到 65,535
//         long            4 或 8 字节          -2,147,483,648 到 2,147,483,647
//         unsigned long   4 或 8 字节          0到4,294,967,295
//
//         浮点类型
//         类型            存储大小        值范围                    精度
//         float           4 字节         1.2E-38 到 3.4E+38       6 位小数
//         double          8 字节         2.3E-308 到 1.7E+308     15 位小数
//         long double     16 字节        3.4E-4932 到 1.1E+4932   19 位小数
//
// void类型
// 枚举类型
// 派生类型 指针类型、数组类型、结构类型、共用体类型和函数类型
//

#include <stdio.h>
#include <float.h>

// 整形类型
void fun1() {
    printf("char size %lu\n", sizeof(char));
    printf("unsigned char size %lu\n", sizeof(unsigned char));
    printf("signed char size %lu\n", sizeof(signed char));
    printf("int size %lu\n", sizeof(int));
    printf("unsigned int size %lu\n", sizeof(unsigned int));
    printf("short size %lu\n", sizeof(short));
    printf("unsigned short size %lu\n", sizeof(unsigned short));
    printf("long size %lu\n", sizeof(long));
    printf("unsigned long size %lu\n", sizeof(unsigned long));
}

// 浮点类型
// %E 为以指数形式输出单、双精度实数
void fun2() {
    printf("float size %lu\n", sizeof(float));
    printf("double size %lu\n", sizeof(double));
    printf("long double size %lu\n", sizeof(long double));
    printf("float 最小值: %E\n", FLT_MIN);
    printf("float 最大值: %E\n", FLT_MAX);
    printf("精度值: %d\n", FLT_DIG);
}

const int b = 1;//定义常量


/*
 * 强制类型转换
 * double ←── float 高
 * ↑
 * long
 * ↑
 * unsigned
 * ↑
 * int ←── char,short 低
 *
 * float和double 默认打印都是小数点后6位
 */
void type_() {
    float f1 = 1.2f;
    printf("%f\n", f1);
    //通过%.nf可控制打印的小数点个数
    printf("%.2f\n", f1);

    double d1 = 1.222222222f;
    double d2 = 1.222222222f;
    double d3 = d1 * d2;
    printf("%f\n", d3);
}

int main() {
    int a = 0;
    printf("%d\n", a);
    printf("%d\n", b);
    fun2();
    return 0;
}