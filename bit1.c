//
// Created by yesheng on 2018/10/30.
// 位运算符
//

#include <stdio.h>

/*
 * 位运算符的使用
 * & | ^ ~  <<  >>
 */
void bit_() {

    //&  位上两个都是1则该位为1 否则为0
    printf("%d\n", 0 & 0);
    printf("%d\n", 0 & 1);
    printf("%d\n", 1 & 0);
    printf("%d\n", 1 & 1);

    //|


    //^  相同为0 不同为1


    //~取反
    printf("%d\n", 63);
    printf("%d\n", ~63);

    //<<

    printf("%d\n", 63 << 2);

    //>>

    printf("%d\n", 63 >> 2);

}

int main() {
    bit_();
    return 0;
}