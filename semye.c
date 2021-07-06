#include <stdio.h>
#include "semye.h"
#include <float.h>

void test1() {
    printf("hello world!!\n");
}

/**
 * 整数类型
 */
void fun1() {
    char z = 127; //取值范围 -128~127  -2^7 ~ 2^7-1   1个字节   11111111~01111111
    unsigned char zz = 255; //0~255
    printf("%d\n", z);
    printf("%d\n", zz);
    printf("char 占用字节 %lu\n", sizeof(char));
    printf("unsigned char 占用字节 %lu\n", sizeof(unsigned char));
    printf("signed char 占用字节 %lu\n", sizeof(signed char));
    printf("int 占用字节 %lu\n", sizeof(int));
    printf("unsigned int 占用字节 %lu\n", sizeof(unsigned int));
    printf("short 占用字节 %lu\n", sizeof(short));
    printf("unsigned short 占用字节 %lu\n", sizeof(unsigned short));
    printf("long 占用字节 %lu\n", sizeof(long));
    printf("unsigned long 占用字节 %lu\n", sizeof(unsigned long));
}

// 浮点类型
// %E 为以指数形式输出单、双精度实数
void fun2() {

    float f = 111133.333333f; //4个字节 精度为小数点后六位 00000000000000000000000000000000
    float f2 = 111133.333333f; //4个字节 精度为小数点后六位 00000000000000000000000000000000
    printf("%f\n", f2+f);


    printf("float 占用字节 %lu\n", sizeof(float));
    printf("double 占用字节 %lu\n", sizeof(double));
    printf("long double 占用字节 %lu\n", sizeof(long double));
    printf("float 最小值: %E\n", FLT_MIN);
    printf("float 最大值: %E\n", FLT_MAX);
    printf("精度值: %d\n", FLT_DIG);
}