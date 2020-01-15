//
// Created by yesheng on 2018/10/30.
// C 语言的输入输出
// gets  puts
//

#include <stdio.h>

//getchar 从键盘获取字符
//putchar 显示到屏幕
void fun1() {
    int c = getchar();
    putchar(c);
    printf("\n====> %d", c);
}


// gets 从键盘获取字符串
// puts 显示到屏幕
void fun2() {
    char abc[100];
    gets(abc);
    puts(abc);
}

int main() {
    fun2();
    return 0;
}