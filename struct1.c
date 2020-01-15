//
// Created by yesheng on 2018/10/30.
// 结构体 通常在头文件中定义结构体
// typedef 通常用来定义给类型取一个新名字
//


#include <stdio.h>
#include <memory.h>


//定义一个书籍的结构体
typedef struct Book {
    char title[50];//书名
    char author[50];//作者
    char subject[100];//科目
    int book_id;//书籍id
} book;


int main() {
    struct Book book1;
    struct Book *book2;

    strcpy(book1.title, "c 语言");
    strcpy(book1.author, "c 语言1");
    strcpy(book1.subject, "c 语言2222");
    book1.book_id = 199;

    printf("书名:%s\n", book1.title);
    printf("作者:%s\n", book1.author);
    printf("subject:%s\n", book1.subject);
    printf("book_id:%d\n", book1.book_id);


    return 0;
}