//
// Created by yesheng on 2018/10/30.
// 枚举 数据类型
//

#include <stdio.h>

enum DAY {
    MON = 1, TUE, WEB, THU, FRI, SAT, SUN
} day;

int main() {
    printf("%d\n", day);
    printf("%p\n", &day);
    day = FRI;
    printf("%d\n", day);
    printf("%p\n", &day);
    day = SUN;
    printf("%d\n", day);
    printf("%p\n", &day);
    return 0;
}