//
// Created by yesheng on 2018/10/30.
// c语言预处理器
// 内置宏
//

#include <stdio.h>

int main() {
    printf("当前日期:%s\n", __DATE__);
    printf("当前时间:%s\n", __TIME__);
    printf("当前时间戳:%s\n", __TIMESTAMP__);
    printf("当前行数:%d\n", __LINE__);
    return 0;
}