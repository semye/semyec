//
// Created by yesheng on 2020/7/24.
//

#include <stdio.h>
#include <assert.h>
#include <ctype.h>
#include <errno.h>
#include <limits.h>

//argc 参数个数
//argv[0] 存储程序的名称
int main(int argc, char *argv[]) {
    printf("参数个数:%d\n", argc);
    for (int i = 0; i < argc; i++) {
        printf("argv[%d]:%s\n", i, argv[i]);
    }
    return 0;
}
