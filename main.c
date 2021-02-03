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

#define READ_BUFF 100


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
void struct1() {
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


/**
 * strcpy 函数的使用 复制字符串
 * 把str1的内容复制到str2中
 * str2的大小必须大于等于str1的大小
 */
void cpystr() {
    char str1[] = "hello world!";
    char str2[100];
    strcpy(str2, str1);
    printf("str1的内容:%s\n", str1);
    printf("str1的内存地址:%p\n", &str1);
    printf("str2的内容:%s\n", str2);
    printf("str2的内存地址:%p\n", &str2);
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
        fprintf(stderr, "%s\n", strerror(errno));
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
 * 都是转成二进制进行计算
 * & | ^ ~  <<  >>
 */
void bit_() {

    //&  位上两个都是1则该位为1 否则为0
    printf("0 & 0 %d\n", 0 & 0);
    printf("0 & 1 %d\n", 0 & 1);
    printf("1 & 0 %d\n", 1 & 0);
    printf("1 & 1 %d\n", 1 & 1);

    //|


    //^  相同为0 不同为1


    //~取反
    printf("1:%d\n", 1);
    printf("~1:%d\n", ~1);

    // << 左移运算  把1转成二进制,左移
    printf("1 << 1 %d\n", 1 << 1);
    printf("1 << 2 %d\n", 1 << 2);
    printf("1 << 3 %d\n", 1 << 3);

    printf("0 << 30 %d\n", 0 << 30);
    printf("1 << 30 %d\n", 1 << 30);
    printf("2 << 30 %d\n", 2 << 30);
    printf("3 << 30 %d\n", 0x3 << 30);
    printf("取反3 << 30 %d\n", ~(0x3 << 30));


    // >> 右移运算  把1转成二进制 右移
    printf("1 >> 2 %d\n", 1 >> 2);

}


/*void *calloc(int num, int size);
在内存中动态地分配 num 个长度为 size 的连续空间，并将每一个字节都初始化为 0。所以它的结果是分配了 num*size 个字节长度的内存空间，并且每个字节的值都是0。*/

/*	void free(void *address);
该函数释放 address 所指向的内存块,释放的是动态分配的内存空间。*/

/*void *malloc(int num);
在堆区分配一块指定大小的内存空间，用来存放数据。这块内存空间在函数执行完成后不会被初始化，它们的值是未知的。*/

/*void *realloc(void *address, int newsize);
该函数重新分配内存，把内存扩展到 newsize。*/

/*
 * calloc函数的使用
 */
void calloc2() {
    printf("%zu\n", sizeof(char));
    char *p = calloc(5, sizeof(char));
    if (p == NULL) {
        perror("内存分配失败\n");
        return;
    }
    char *des1 = "hepwdfdghjdfghjhkgdfsfghjhepwdfdghjdfghjhkgdfsfghjhepwdfdghjdfghjhkgdfsfghjhepwdfdghjdfghjhkgdfsfghjhepwdfdghjdfghjhkgdfsfghj";
    strcpy(p, des1);
    printf("=====>%s\n", p);
    free(p);
}

/*
 * 动态内存分配
 */
void malloc1() {
    printf("动态内存分配");
    char *des = malloc(200 * sizeof(char));
    char *des1 = "hepwdfdghjdfghjhkgdfsfghj";
    strcpy(des, des1);
    printf("des===>%s\n", des);
    //释放分配的内存
    free(des);
}

/**
 * c语言预处理器
 * 内置宏
 */
void def() {
    printf("当前日期:%s\n", __DATE__);
    printf("当前时间:%s\n", __TIME__);
    printf("当前时间戳:%s\n", __TIMESTAMP__);
    printf("当前行数:%d\n", __LINE__);
}

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

//算术运算符
void fu1n() {
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
void fun21() {

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
void fun31() {
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
void fun41() {
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
void fun51() {
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

/*
 * 第一步：申请空间，使其大小为两个已经排序序列之和，该空间用来存放合并后的序列
 * 第二步：设定两个指针，最初位置分别为两个已经排序序列的起始位置
 * 第三步：比较两个指针所指向的元素，选择相对小的元素放入到合并空间，并移动指针到下一位置
 * 重复步骤3直到某一指针超出序列尾
 * 将另一序列剩下的所有元素直接复制到合并序列尾
 */
void merge_sort(int array1[], int array2[], int num) {

}

/*
 * 快速排序
 */
void quick_sort(int array[], int mum) {

}

/* 冒泡排序*/
void sort1() {
    int a[] = {52, 19, 28, 32, 4, 5, 6, 7, 8, 9, 0, 22, 55, 43, 15};
    int num = sizeof(a) / sizeof(int);
    printf("冒泡排序\n");
    bubble_sort(a, num);
}

/*
 * 选择排序
 */
void sort2() {
    int b[] = {52, 19, 28, 32, 4, 5, 6, 7, 8, 9, 0, 22, 55, 43, 15};
    int num1 = sizeof(b) / sizeof(int);
    printf("选择排序\n");
    selection_sort(b, num1);
}

/*
 * 插入排序
 */
void sort3() {
    printf("插入排序\n");
    int c[] = {52, 19, 28, 32, 4, 5, 6, 7, 8, 9, 0, 22, 55, 43, 15};
    int num2 = sizeof(c) / sizeof(int);
    insertion_sort(c, num2);
}


/*
 * 变量的值改变,内存地址不会改变,所以可以操作指针来改变变量的值
 * 定义指针时,如果没有确切的地址定义成空指针是一个很好的习惯
 * 能接受指针作为参数的函数，也能接受数组作为参数
 */
void fun1111() {
    int a = 3;
    int *p = &a;
    int *p1 = NULL;
    printf("内存地址%p\n", p1);
    printf("内存地址%p\n", p);
    a = 4;
    printf("内存地址%p\n", p);
    *p = 5;
    printf("a=%d\n", a);
    if (p) {
        printf("hello world!\n");
    }
}

const int MAX = 3;

/*指针的运算 递增指针*/
void fun2111() {
    int var[] = {10, 20, 30};
    int i, *p;
    p = var;
    for (i = 0; i < MAX; i++) {
        printf("var[%d]=%p\n", i, p);
        printf("var[%d]=%d\n", i, *p);
        p++;
    }
}

//指针的比较
//如果 p1 和 p2 指向两个相关的变量，比如同一个数组中的不同元素，则可对 p1 和 p2 进行大小比较。
void fun3111() {
    int var[] = {10, 20, 30};
    int *p1 = &var[2];
    int *p2 = &var[0];
    if (p2 < p1) {
        printf("指针的比较结果:p2<p1\n");
    }
}

//指针数组
void fun4() {
    int var[] = {10, 20, 30};
    int *ptr[MAX];
    for (int i = 0; i < MAX; ++i) {
        printf("%d\n", i);
        ptr[i] = &var[i];
    }
    for (int j = 0; j < MAX; ++j) {
        printf("Value of var[%d] = %d\n", j, *ptr[j]);
    }
}

//指向指针的指针
void fun5() {
    int a = 100;
    int *p = &a;
    int **p1 = &p;
    printf("存储变量a的内存地址%p\n", &a);
    printf("存储指针变量p的地址%p\n", &p);
    printf("存储指针变量p1的地址%p\n", &p1);

}

//传递指针给函数
void fun6(int *p) {
    printf("打印指针保存的变量的内存地址:%p", p);
}


//从函数返回指针
int *fun7() {
    static int r[10];
    /* 随机函数 设置种子 */
    srand((unsigned int) time(NULL));
    for (int j = 0; j < 10; ++j) {
        r[j] = rand();
        printf("%d\n", r[j]);
    }
    return r;
}

//函数指针
int maxXy(int x, int y) {
    return x > y ? x : y;
}

//函数指针的使用
int fun8() {
    //定义一个函数指针
    int (*p)(int, int) =&maxXy;
    //通过函数指针调用函数
    int s = p(1, 2);
    printf("%d\n", s);
    return 0;
}

void callyou(void) {
    printf("东西到货了,可以来拿了\n");
}

void callexecute(void *p()) {
    printf("东西没货,等到货再通知你\n");
    p();
}

//回调函数的使用
int fun9() {
    void (*p) = &callyou;
    callexecute(p);
    return 0;
}

/*
 * 指针交换两个变量
 */
void swapp(int *p1, int *p2) {
    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}


/*
 * 值交换
 */
void swapv(int v1, int v2) {
    int temp = v1;
    v1 = v2;
    v2 = temp;
}

//指向数组的指针
void fun() {
    /* 带有 5 个元素的整型数组 */
    double balance[5] = {1000.0, 2.0, 3.4, 17.0, 50.0};
    double *p;
    int i;

    p = balance;

    /* 输出数组中每个元素的值 */
    printf("使用指针的数组值\n");
    for (i = 0; i < 5; i++) {
        printf("*(p + %d) : %f\n", i, *(p + i));
    }

    printf("使用 balance 作为地址的数组值\n");
    for (i = 0; i < 5; i++) {
        printf("*(balance + %d) : %f\n", i, *(balance + i));
    }

}




// 数据类型
// 各种类型的存储大小与系统位数有关，但目前通用的以64位系统为主
// 1字节 8位
// float 单精度浮点值。单精度是这样的格式，1位符号，8位指数，23位小数。
// double 双精度浮点值。双精度是1位符号，11位指数，52位小数。
//
//
// 基本类型 整数类型和浮点类型
//
//         整数类型
//         类型            存储大小        值范围
//         char            1字节           -128~127 或0到255
//         unsigned char   1字节           0到255
//         signed char     1字节           -128~127
//         int             2 或 4 字节  2的31次方-1    -32,768 到 32,767 或 -2,147,483,648 到 2,147,483,647
//         unsigned int    2 或 4 字节     0到65,535 或 0到4,294,967,295
//         short           2 字节          -32,768 到 32,767
//         unsigned short  2 字节          0到 65,535
//         long            4 或 8 字节          -2,147,483,648 到 2,147,483,647
//         unsigned long   4 或 8 字节          0到4,294,967,295
//
//         浮点类型
//         类型            存储大小        值范围                    精度
//         float           4 字节         1.2E-38 到 3.4E+38       6 位小数
//         double          8 字节         2.3E-308 到 1.7E+308     15 位小数
//         long double     16 字节        3.4E-4932 到 1.1E+4932   19 位小数
//
// void类型
// 枚举类型
// 派生类型 指针类型、数组类型、结构类型、共用体类型和函数类型
//





const int b = 1;//定义常量


/*
 * 强制类型转换
 * double ←── float 高
 * ↑
 * long
 * ↑
 * unsigned
 * ↑
 * int ←── char,short 低
 *
 * float和double 默认打印都是小数点后6位
 */
void type_() {
    float f1 = 1.2f;
    printf("%f\n", f1);
    //通过%.nf可控制打印的小数点个数
    printf("%.2f\n", f1);

    double d1 = 1.222222222f;
    double d2 = 1.222222222f;
    double d3 = d1 * d2;
    printf("%f\n", d3);
}

// 枚举 数据类型
enum DAY {
    MON = 1, TUE, WEB, THU, FRI, SAT, SUN
} day;


// c 文件读写
//
// fopen打开一个文件或者创建一个文件
// mode
// r 打开一个已有的文本文件，允许读取文件
// w 打开一个文本文件，允许写入文件。如果文件不存在，则会创建一个新文件。在这里，您的程序会从文件的开头写入内容。如果文件存在，则该会被截断为零长度，重新写入。
// a 打开一个文本文件，以追加模式写入文件。如果文件不存在，则会创建一个新文件。在这里，您的程序会在已有的文件内容中追加内容。
// r+ 打开一个文本文件，允许读写文件。
// w+ 打开一个文本文件，允许读写文件。如果文件已存在，则文件会被截断为零长度，如果文件不存在，则会创建一个新文件。
// a+ 打开一个文本文件，允许读写文件。如果文件不存在，则会创建一个新文件。读取会从文件的开头开始，写入则只能是追加模式。

//如果文件是二进制文件 mode 后需要加个b,b是二进制的英文

//"rb", "wb", "ab", "rb+", "r+b", "wb+", "w+b", "ab+", "a+b"



/*
 * 创建文件
 */
void create_file(char *filename) {
    FILE *file = fopen(filename, "a+");
    fclose(file);
}

//fputc 写入字符
//fputs 写入字符串
void write_file() {
    FILE *file = fopen("123.txt", "a+");
    fputc(99, file);
    fputs("hello", file);
    fclose(file);
}

//fgetc 读取字符
//fgets 读取字符串
void read_file() {
    FILE *file = fopen("123.txt", "r");
    int c = fgetc(file);
    printf("%c\n", c);
    char ccc[100];
    fgets(ccc, 1024, file);
    printf("%s\n", ccc);
    fclose(file);

}

/*
 * 打开文件
 */
void open_file_use() {
    FILE *a1 = fopen("1111.txt", "rb");
    if (!a1) {
        perror("打开文件1111.txt失败\n");
    } else {
        printf("打开文件1111.txt成功\n");
        //用于保存读取的数据
        char a[1024];
        size_t ret_code = fread(a, sizeof *a, 1024, a1);
        printf("读取的字符====>%zu\n", ret_code);
        printf("文本的内容为====>%s\n", a);
        fclose(a1);
    }

}


void copy_file(char *filename, char *copy_filename) {
    FILE *fp1, *fp2;
    size_t c = 0;
    char buf[READ_BUFF];
    fp1 = fopen(filename, "rb");
    fp2 = fopen(copy_filename, "wb");
    if (fp1 == NULL || fp2 == NULL) {
        printf("open %s or %s failed:%s\n", filename, copy_filename, strerror(errno));
        return;
    }
    while ((c = (int) fread(buf, sizeof(char), READ_BUFF, fp1)) > 0) {
        fwrite(buf, sizeof(size_t), c, fp2);
    }
    fclose(fp1);
    fclose(fp2);
}


//getchar 从键盘获取字符
//putchar 显示到屏幕
void fun999() {
    int c = getchar();
    putchar(c);
    printf("\n====> %d", c);
}


// gets 从键盘获取字符串
// puts 显示到屏幕
void fun2999() {
    char abc[100];
    gets(abc);
    puts(abc);
}

// c 语言 存储类
// auto 存储类是所有局部变量默认的存储类
// register 存储类用于定义存储在寄存器中而不是 RAM 中的局部变量 这意味着变量的最大尺寸等于寄存器的大小（通常是一个词），且不能对它应用一元的 '&' 运算符（因为它没有内存位置）。
// static 存储类指示编译器在程序的生命周期内保持局部变量的存在，而不需要在每次它进入和离开作用域时进行创建和销毁。因此，使用 static 修饰局部变量可以在函数调用之间保持局部变量的值。
//
//static 修饰符也可以应用于全局变量。当 static 修饰全局变量时，会使变量的作用域限制在声明它的文件内。
//
//全局声明的一个 static 变量或方法可以被任何函数或方法调用，只要这些方法出现在跟 static 变量或方法同一个文件中。
// extern 存储类用于提供一个全局变量的引用，全局变量对所有的程序文件都是可见的。当您使用 extern 时，对于无法初始化的变量，会把变量名指向一个之前定义过的存储位置。
//
//当您有多个文件且定义了一个可以在其他文件中使用的全局变量或函数时，可以在其他文件中使用 extern 来得到已定义的变量或函数的引用。可以这么理解，extern 是用来在另一个文件中声明一个全局变量或函数。
//
//extern 修饰符通常用于当有两个或多个文件共享相同的全局变量或函数的时候



/*
 * 四种存储类
 * auto 所有局部变量的默认存储类 默认保存在RAM中
 * register 定义的局部变量可能保存在寄存器中 不能对它应用一元的 '&' 运算符（因为它没有内存位置）
 * static 可修饰局部变量和全局变量  在修饰局部变量时，多次调用会无效
 * extern 提供一个全局变量的引用
 */
void funyy() {
    {
        int month;
        auto int year;
    }
    int day = 2;
    printf("%d\n", day);
    register int *ye;
    //   不能对 register的局部变量使用& 因为没有内存位置
    // printf("%p\n", &ye);


    static int ss = 9;
    printf("%d\n", ss);
    ss--;
    printf("%d\n", ss);
}


extern int yesheng; //extern 提供全局的引用

/*
 * time函数的使用
 * 当前的时间戳 秒数
 */
time_t get_current_time() {
    time_t time_t = time(NULL);
    printf("当前时间%li\n", time_t);
    return time_t;
}


//argc 参数个数
//argv[0] 存储程序的名称
int main(int argc, char *argv[]) {
    printf("hello %s, %s world!\n", "semye", "haha");
    unsigned char a = '%';
//    printf("%d\n", a);
//    fun1();
//    fun2();
//    printf("参数个数:%d\n", argc);
//    for (int i = 0; i < argc; i++) {
//        printf("argv[%d]:%s\n", i, argv[i]);
//    }
//    printAscii();

    bit_();
    return 0;
}
