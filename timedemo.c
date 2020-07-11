//
// Created by yesheng on 2018/10/30.
//

#include <time.h>
#include <stdio.h>

/*
 * time函数的使用
 * 当前的时间戳 秒数
 */
time_t get_current_time() {
    time_t time_t = time(NULL);
    printf("当前时间%li\n", time_t);
    return time_t;
}


int main() {
    get_current_time();
    size_t abc = 1;
    clock_t clock1 = clock();
    time_t is = time(NULL);
    printf("%lu\n", abc);
    printf("%lu\n", clock1);
    printf("%lu\n", is);
    return 0;
}