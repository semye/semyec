//
// Created by yesheng on 2018/10/30.
// C语言字符串
//

#include <string.h>
#include <stdio.h>
#include <errno.h>

//数组最后一位是空字符
char greeting[] = {'H', 'e', 'l', 'l', 'o', '\0'};


//strcat 函数的使用 链接两个字符串
void catstr() {
    char hello1[] = "world!";
    char hello2[100] = "orld!";
    char *p = strcat(hello2, hello1);
    printf("%s\n", hello2);
    printf("%s\n", p);
}


/*
 * strchr函数的使用
 * 查找字符
 */
void chrstr() {
    char *s1 = "helloworld";
    char *res = strchr(s1, 'h');
    if (res == NULL) {
        printf("没有找到字符a\n");
    } else {
        printf("=>%s\n", res);
    }
}

//strcmp函数 字符串比较
//当s1<s2时，返回为负数
//当s1=s2时，返回值= 0
//当s1>s2时，返回正数
//从第一个字符开始比较ASCII码
//有的系统返回差值，有的系统只返回0,1和-1三个值
void cmpstr() {
    int result1 = strcmp("Aa", "Ab");
    int result2 = strcmp("Ab", "Aa");
    int result3 = strcmp("AA", "AA");
    printf("%d\n", result1);
    printf("%d\n", result2);
    printf("%d\n", result3);
}

//strcoll 根据环境比较字符串
//LC_COLLATE 设置
void collstr() {
    int result1 = strcoll("Aa", "Ab");
    int result2 = strcoll("Ab", "Aa");
    int result3 = strcoll("AA", "AA");
    printf("%d\n", result1);
    printf("%d\n", result2);
    printf("%d\n", result3);

}


//strcpy 函数的使用 复制字符串
void cpystr() {
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

//strcspn
//string complementary span的缩写
//用于查找子串
//例子中返回o前面的字符个数 hell 即4个
void cspanstr() {
    size_t sizet = strcspn("hello world", "o");
    printf("%zu\n", sizet);
}

//strerror
//获取errno的错误信息
void errorstr() {
    FILE *pf = fopen("unexist.txt", "rb");
    if (pf == NULL) {
        //stderr 按输出打印到屏幕
        fprintf(stderr, strerror(errno));
    }
}

//strlen 获取字符串长度
void lenstr() {
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

//strncat
// s2拼接到s1后
void ncatstr() {
    char p[20] = "hello world";
    char *p1 = "abc";
    strncat(p, p1, 1);
    printf("%s\n", p);
}


int main() {
    ncatstr();
    return 0;
}