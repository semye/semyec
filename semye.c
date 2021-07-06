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
    printf("%f\n", f2 + f);


    printf("float 占用字节 %lu\n", sizeof(float));
    printf("double 占用字节 %lu\n", sizeof(double));
    printf("long double 占用字节 %lu\n", sizeof(long double));
    printf("float 最小值: %E\n", FLT_MIN);
    printf("float 最大值: %E\n", FLT_MAX);
    printf("精度值: %d\n", FLT_DIG);
}

/**
 * 打印ASCII码
 */
void printAscii() {
    printf("打印ASCII码\n");
    for (int i = 0; i < 127; ++i) {
        printf("%c\n", i);
    }
}

/*
 * 值交换
 */
void swapv(int v1, int v2) {
    int temp = v1;
    v1 = v2;
    v2 = temp;
    printf("交换后的v1:%d\n",v1);
    printf("交换后的v2:%d\n",v2);
}

void bubble_sort(int array[], int num) {
    int temp;
    for (int j = 0; j < num - 1; j++) {
        for (int i = 0; i < num - 1 - j; i++) {
            if (array[i] > array[i + 1]) {
                //交换两个数字的位置
                temp = array[i];
                array[i] = array[i + 1];
                array[i + 1] = temp;
            }
        }
    }

    for (int k = 0; k < num; k++) {
        printf("%d ", array[k]);
    }
}

/*
 * 首先在未排序序列中找到最小（大）元素，存放到排序序列的起始位置，
 * 然后，再从剩余未排序元素中继续寻找最小（大）元素，然后放到已排序序列的末尾。
 * 以此类推，直到所有元素均排序完毕。
 */
void selection_sort(int array[], int num) {
    for (int i = 0; i < num - 1; i++) {
        int m = i;
        for (int j = i + 1; j < num; j++) {
            if (array[j] < array[m]) {
                m = j;
            }
        }
        int temp = array[m];
        array[m] = array[i];
        array[i] = temp;
    }
    for (int k = 0; k < num; k++) {
        printf("%d ", array[k]);
    }
}

/*
 * 插入排序
 */
void insertion_sort(int array[], int num) {
    for (int i = 1; i < num; i++) {
        for (int j = i; j > 0 && array[j] < array[j - 1]; j--) {
            int temp = array[j];
            array[j] = array[j - 1];
            array[j - 1] = temp;
        }
    }
    for (int k = 0; k < num; k++) {
        printf("%d ", array[k]);
    }
}