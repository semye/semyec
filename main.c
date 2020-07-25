//
// Created by yesheng on 2020/7/24.
//

#include <stdio.h>
#include <assert.h>
#include <ctype.h>
#include <errno.h>
#include <limits.h>
#include <string.h>
#include <memory.h>
#include <stdlib.h>
#include <stdio.h>
#include <float.h>
#include <time.h>


/**
 * 结构体 通常在头文件中定义结构体
 * typedef 通常用来定义给类型取一个新名字
 *
 * 定义一个书籍的结构体
 */
typedef struct Book {
    char title[50];//书名
    char author[50];//作者
    char subject[100];//科目
    int book_id;//书籍id
} book;

/**
 * 结构体的使用
 */
void fun3() {
    struct Book book1;
    strcpy(book1.title, "c 语言");
    strcpy(book1.author, "c 语言1");
    strcpy(book1.subject, "c 语言2222");
    book1.book_id = 199;
    printf("书名:%s\n", book1.title);
    printf("作者:%s\n", book1.author);
    printf("科目:%s\n", book1.subject);
    printf("书籍id:%d\n", book1.book_id);
}


/**
 * 打印ASCII码
 */
void printAscii() {
    for (int i = 0; i < 127; ++i) {
        printf("%c\n", i);
    }
}

/**
 * 整数类型
 **/
void fun1() {
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
    printf("float 占用字节 %lu\n", sizeof(float));
    printf("double 占用字节 %lu\n", sizeof(double));
    printf("long double 占用字节 %lu\n", sizeof(long double));
    printf("float 最小值: %E\n", FLT_MIN);
    printf("float 最大值: %E\n", FLT_MAX);
    printf("精度值: %d\n", FLT_DIG);
}


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





//argc 参数个数
//argv[0] 存储程序的名称
int main(int argc, char *argv[]) {
    fun3();
    unsigned char a = '%';
    printf("%d\n", a);
    fun1();
    fun2();
    printf("参数个数:%d\n", argc);
    for (int i = 0; i < argc; i++) {
        printf("argv[%d]:%s\n", i, argv[i]);
    }
    printAscii();
    return 0;
}
