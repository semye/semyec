//
// Created by yesheng on 2018/10/30.
// c语言预处理器
//

#include <stdio.h>

int main() {
    printf("%s\n", __DATE__);
    printf("%s\n", __TIME__);
    printf("%s\n", __TIMESTAMP__);
    printf("%d\n", __LINE__);
    return 0;
}