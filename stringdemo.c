//
// Created by yesheng on 2018/10/30.
// C语言字符串
//

#include <string.h>
#include <stdio.h>

//数组最后一位是空字符
char greeting[] = {'H', 'e', 'l', 'l', 'o', '\0'};

//strcpy 函数的使用 复制字符串
void fun1() {
    char hello1[] = "hello world!";
    size_t size = sizeof(hello1);
    printf("%zu\n", size);
    char hello2[size];
    strcpy(hello2, hello1);
    printf("%s\n", hello1);
    printf("%p\n", &hello1);
    printf("%s\n", hello2);
    printf("%p\n", &hello2);
}

//strcat 函数的使用 链接两个字符串
void fun2() {
    char hello1[] = "world!";
    char hello2[100] = "orld!";
    char *p = strcat(hello2, hello1);
    printf("%s\n", hello2);
    printf("%s\n", p);
}

//strlen 获取字符串长度
void fun3() {
    char p[] = "hello world";
    size_t len = strlen(p);
    printf("%zu\n", len);
    //sizeof多计算一个\0
    size_t size = sizeof(p);
    printf("%zu\n", size);

    char s1[100] = "yesheng1";
    size_t len1 = strlen(s1);
    //不会显示\0
    printf("s1字符串的长度为:%lu\n", len1);
}


/*
 * strchr函数的使用
 * 查找字符
 */
void fun4() {
    char *s1 = "helloworld";
    char *res = strchr(s1, 'h');
    if (res == NULL) {
        printf("没有找到字符a\n");
    } else {
        printf("=>%s\n", res);
    }
}


int main() {
    fun4();
    return 0;
}