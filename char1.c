#include <stdio.h>

/**
 * 打印ASCII码
 */
void ascii() {
    for (int i = 0; i < 127; ++i) {
        printf("%c\n", i);
    }
}

int main() {
    ascii();
    return 0;
}