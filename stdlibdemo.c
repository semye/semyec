//
// Created by yesheng on 2018/10/30.
// stdlib头文件
//
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/*
 * stdlib
 * abs函数的使用
 */
void abs_() {
    int a = -100;
    int b = 100;
    int abs_a = abs(a);
    int abs_b = abs(b);
    printf("%d的绝对值为%d\n", a, abs_a);
    printf("%d的绝对值为%d\n", b, abs_b);
}

/*
 * stdlib
 * div函数的使用
 */
void div_() {
    //求n/m，商和余数分别存放到结果结构的对应成员里
    div_t div1 = div(1, 2);

    printf("1/2  商为===>%d,余数为===>%d\n", div1.quot, div1.rem);
}


/*
 * stdlib
 * 将字节字符串转换成浮点值
 */
void atof_() {
    //把字符串转成double类型
    const char *a = "9.01";
    double x = atof(a);
    int y = atoi(a);
    printf("x=====>%f\n", x);
    printf("y=====>%d\n", y);

    double xx = strtol(a, NULL, 0);
    printf("%f\n", xx);
}

/*
 * stdlib
 * rand函数的使用
 *
 */
void rand_(time_t time_t) {
    //生成一个0到RAND_MAX的随机整数
    printf("RAND_MAX===>%i\n", RAND_MAX);
    srand((unsigned int) time_t);//设置rand函数的种子
    int rand1 = rand(); // NOLINT
    printf("随机数为%d\n", rand1 % 6);
}

/*
 * stdlib
 * random函数的使用
 */
void random_(time_t time_t) {
    srandom((unsigned int) time_t);//设置random函数的种子
    long random1 = random();
    printf("随机数为%li\n", random1 % 6);
}


int main() {
    abs_();
    atof_();
    div_();
    return 0;
}

