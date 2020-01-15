//
// Created by yesheng on 2018/10/30.
// c语言 错误处理
//


#include <errno.h>
#include <stdio.h>
#include <string.h>


int main() {
    FILE *pf = fopen("unexist.txt", "rb");
    if (pf == NULL) {
        //stderr 按输出打印到屏幕
        fprintf(stderr, strerror(errno));
    }
    return 0;
}

