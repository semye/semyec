//
// Created by yesheng on 2018/10/30.
// 内存分配
// stdlib.h
// calloc
//
/*void *calloc(int num, int size);
在内存中动态地分配 num 个长度为 size 的连续空间，并将每一个字节都初始化为 0。所以它的结果是分配了 num*size 个字节长度的内存空间，并且每个字节的值都是0。*/

/*	void free(void *address);
该函数释放 address 所指向的内存块,释放的是动态分配的内存空间。*/

/*void *malloc(int num);
在堆区分配一块指定大小的内存空间，用来存放数据。这块内存空间在函数执行完成后不会被初始化，它们的值是未知的。*/

/*void *realloc(void *address, int newsize);
该函数重新分配内存，把内存扩展到 newsize。*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

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


int main() {
    calloc2();
    return 0;
}
