//
// Created by yesheng on 2018/10/30.
// 算法
//
#include "stdio.h"


void bubble_sort(int array[], int num) {
    int temp;
    for (int j = 0; j < num - 1; j++) {
        for (int i = 0; i < num - 1 - j; i++) {
            if (array[i] > array[i + 1]) {
                //交换两个数字的位置
                temp = array[i];
                array[i] = array[i + 1];
                array[i + 1] = temp;
            }
        }
    }

    for (int k = 0; k < num; k++) {
        printf("%d ", array[k]);
    }
}

/*
 * 首先在未排序序列中找到最小（大）元素，存放到排序序列的起始位置，
 * 然后，再从剩余未排序元素中继续寻找最小（大）元素，然后放到已排序序列的末尾。
 * 以此类推，直到所有元素均排序完毕。
 */
void selection_sort(int array[], int num) {
    for (int i = 0; i < num - 1; i++) {
        int m = i;
        for (int j = i + 1; j < num; j++) {
            if (array[j] < array[m]) {
                m = j;
            }
        }
        int temp = array[m];
        array[m] = array[i];
        array[i] = temp;
    }
    for (int k = 0; k < num; k++) {
        printf("%d ", array[k]);
    }
}


/*
 * 插入排序
 */
void insertion_sort(int array[], int num) {
    for (int i = 1; i < num; i++) {
        for (int j = i; j > 0 && array[j] < array[j - 1]; j--) {
            int temp = array[j];
            array[j] = array[j - 1];
            array[j - 1] = temp;
        }
    }
    for (int k = 0; k < num; k++) {
        printf("%d ", array[k]);
    }
}

/*
 * 第一步：申请空间，使其大小为两个已经排序序列之和，该空间用来存放合并后的序列
 * 第二步：设定两个指针，最初位置分别为两个已经排序序列的起始位置
 * 第三步：比较两个指针所指向的元素，选择相对小的元素放入到合并空间，并移动指针到下一位置
 * 重复步骤3直到某一指针超出序列尾
 * 将另一序列剩下的所有元素直接复制到合并序列尾
 */
void merge_sort(int array1[], int array2[], int num) {

}

/*
 * 快速排序
 */
void quick_sort(int array[], int mum) {

}

/* 冒泡排序*/
void sort1() {
    int a[] = {52, 19, 28, 32, 4, 5, 6, 7, 8, 9, 0, 22, 55, 43, 15};
    int num = sizeof(a) / sizeof(int);
    printf("冒泡排序\n");
    bubble_sort(a, num);
}

/*
 * 选择排序
 */
void sort2() {
    int b[] = {52, 19, 28, 32, 4, 5, 6, 7, 8, 9, 0, 22, 55, 43, 15};
    int num1 = sizeof(b) / sizeof(int);
    printf("选择排序\n");
    selection_sort(b, num1);
}

/*
 * 插入排序
 */
void sort3() {
    printf("插入排序\n");
    int c[] = {52, 19, 28, 32, 4, 5, 6, 7, 8, 9, 0, 22, 55, 43, 15};
    int num2 = sizeof(c) / sizeof(int);
    insertion_sort(c, num2);
}


int main() {
    return 0;
}