//
// Created by yesheng on 2018/10/30.
//


#include <stdio.h>

/*
 * 打印ASCII码
 */
void ascii() {
    for (int i = 0; i < 127; ++i) {
        printf("%c\n", i);
    }
}

void main() {
    ascii();
}