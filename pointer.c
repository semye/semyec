//
// Created by yesheng on 2018/10/30.
// 指针 *指针类型
// 指针是用来保存变量的内存地址的 它有自己的类型
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
 * 变量的值改变,内存地址不会改变,所以可以操作指针来改变变量的值
 * 定义指针时,如果没有确切的地址定义成空指针是一个很好的习惯
 * 能接受指针作为参数的函数，也能接受数组作为参数
 */
void fun1() {
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
void fun2() {
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
void fun3() {
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
    int (*p)(int, int)=&maxXy;
    //通过函数指针调用函数
    int s = p(1, 2);
    printf("%d\n", s);
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


int main() {
    int a;
    char b[10];

    char zz[] = "sa34567890-0897645324565789099dasfgh";
    printf("%s\n", zz);

    printf("a的变量地址%p\n", &a);
    printf("b的变量地址%p\n", &b);

    fun9();
    return 0;
}