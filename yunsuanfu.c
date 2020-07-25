//
// Created by yesheng on 2020/1/16.
// c语言中0为假 非0为真
// 运算符
// 算术运算符 + - * / % ++ --
// 关系运算符  == != > >= < <=
// 逻辑运算符 && || ！
// 位运算符  & | ^ ~ 位运算符作用于位
//  位运算真值表
//  p	q	p & q	p | q	p ^ q
//  0	0	0	    0	    0
//  0	1	0	    1	    1
//  1	1	1	    1	    0
//  1	0	0	    1	    1
//
//
// 赋值运算符 = += -= *= /= %= <<= >>= &= ^= |=
// 杂项运算符  sizeof &取地址符  *指向变量 ?:

#include <stdio.h>

//算术运算符
void fun() {
    int a = 21;
    int b = 10;
    int c;

    c = a + b;
    printf("Line 1 - c 的值是 %d\n", c);
    c = a - b;
    printf("Line 2 - c 的值是 %d\n", c);
    c = a * b;
    printf("Line 3 - c 的值是 %d\n", c);
    c = a / b;
    printf("Line 4 - c 的值是 %d\n", c);
    c = a % b;
    printf("Line 5 - c 的值是 %d\n", c);
    c = a++;  // 赋值后再加 1 ，c 为 21，a 为 22
    printf("Line 6 - c 的值是 %d\n", c);
    c = a--;  // 赋值后再减 1 ，c 为 22 ，a 为 21
    printf("Line 7 - c 的值是 %d\n", c);
}

//关系运算符
void fun2() {

    int a = 21;
    int b = 10;
    int c;

    if (a == b) {
        printf("Line 1 - a 等于 b\n");
    } else {
        printf("Line 1 - a 不等于 b\n");
    }
    if (a < b) {
        printf("Line 2 - a 小于 b\n");
    } else {
        printf("Line 2 - a 不小于 b\n");
    }
    if (a > b) {
        printf("Line 3 - a 大于 b\n");
    } else {
        printf("Line 3 - a 不大于 b\n");
    }
    /* 改变 a 和 b 的值 */
    a = 5;
    b = 20;
    if (a <= b) {
        printf("Line 4 - a 小于或等于 b\n");
    }
    if (b >= a) {
        printf("Line 5 - b 大于或等于 a\n");
    }
}

//逻辑运算符
void fun3() {
    int a = 5;
    int b = 20;
    int c;

    if (a && b) {
        printf("Line 1 - 条件为真\n");
    }
    if (a || b) {
        printf("Line 2 - 条件为真\n");
    }
    /* 改变 a 和 b 的值 */
    a = 0;
    b = 10;
    if (a && b) {
        printf("Line 3 - 条件为真\n");
    } else {
        printf("Line 3 - 条件为假\n");
    }
    if (!(a && b)) {
        printf("Line 4 - 条件为真\n");
    }
}

/*位运算符*/
void fun4() {
    unsigned int a = 60;    /* 60 = 0011 1100 */
    unsigned int b = 13;    /* 13 = 0000 1101 */
    int c = 0;

    c = a & b;       /* 12 = 0000 1100 */
    printf("Line 1 - c 的值是 %d\n", c);

    c = a | b;       /* 61 = 0011 1101 */
    printf("Line 2 - c 的值是 %d\n", c);

    c = a ^ b;       /* 49 = 0011 0001 */
    printf("Line 3 - c 的值是 %d\n", c);

    c = ~a;          /*-61 = 1100 0011 */
    printf("Line 4 - c 的值是 %d\n", c);

    c = a << 2;     /* 240 = 1111 0000 */
    printf("Line 5 - c 的值是 %d\n", c);

    c = a >> 2;     /* 15 = 0000 1111 */
    printf("Line 6 - c 的值是 %d\n", c);
}

//赋值运算符
void fun5() {
    int a = 21;
    int c;

    c = a;
    printf("Line 1 - =  运算符实例，c 的值 = %d\n", c);

    c += a;
    printf("Line 2 - += 运算符实例，c 的值 = %d\n", c);

    c -= a;
    printf("Line 3 - -= 运算符实例，c 的值 = %d\n", c);

    c *= a;
    printf("Line 4 - *= 运算符实例，c 的值 = %d\n", c);

    c /= a;
    printf("Line 5 - /= 运算符实例，c 的值 = %d\n", c);

    c = 200;
    c %= a;
    printf("Line 6 - %s= 运算符实例，c 的值 = %d\n", "%", c);

    c <<= 2;
    printf("Line 7 - <<= 运算符实例，c 的值 = %d\n", c);

    c >>= 2;
    printf("Line 8 - >>= 运算符实例，c 的值 = %d\n", c);

    c &= 2;
    printf("Line 9 - &= 运算符实例，c 的值 = %d\n", c);

    c ^= 2;
    printf("Line 10 - ^= 运算符实例，c 的值 = %d\n", c);

    c |= 2;
    printf("Line 11 - |= 运算符实例，c 的值 = %d\n", c);
}

int main() {
    fun5();
    return 0;
}