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
    return 0;
}