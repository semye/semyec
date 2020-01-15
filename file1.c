//
// Created by yesheng on 2018/10/30.
// c 文件读写
//
// fopen打开一个文件或者创建一个文件
// mode
// r 打开一个已有的文本文件，允许读取文件
// w 打开一个文本文件，允许写入文件。如果文件不存在，则会创建一个新文件。在这里，您的程序会从文件的开头写入内容。如果文件存在，则该会被截断为零长度，重新写入。
// a 打开一个文本文件，以追加模式写入文件。如果文件不存在，则会创建一个新文件。在这里，您的程序会在已有的文件内容中追加内容。
// r+ 打开一个文本文件，允许读写文件。
// w+ 打开一个文本文件，允许读写文件。如果文件已存在，则文件会被截断为零长度，如果文件不存在，则会创建一个新文件。
// a+ 打开一个文本文件，允许读写文件。如果文件不存在，则会创建一个新文件。读取会从文件的开头开始，写入则只能是追加模式。

//如果文件是二进制文件 mode 后需要加个b,b是二进制的英文

//"rb", "wb", "ab", "rb+", "r+b", "wb+", "w+b", "ab+", "a+b"


#include <stdio.h>
#include <errno.h>
#include <string.h>

/*
 * 创建文件
 */
void create_file(char *filename) {
    FILE *file = fopen(filename, "a+");
    fclose(file);
}

//fputc 写入字符
//fputs 写入字符串
void write_file() {
    FILE *file = fopen("123.txt", "a+");
    fputc(99, file);
    fputs("hello", file);
    fclose(file);
}

//fgetc 读取字符
//fgets 读取字符串
void read_file() {
    FILE *file = fopen("123.txt", "r");
    int c = fgetc(file);
    printf("%c\n", c);
    char ccc[100];
    fgets(ccc, 1024, file);
    printf("%s\n", ccc);
    fclose(file);

}

/*
 * 打开文件
 */
void open_file_use() {
    FILE *a1 = fopen("1111.txt", "rb");
    if (!a1) {
        perror("打开文件1111.txt失败\n");
    } else {
        printf("打开文件1111.txt成功\n");
        //用于保存读取的数据
        char a[1024];
        size_t ret_code = fread(a, sizeof *a, 1024, a1);
        printf("读取的字符====>%zu\n", ret_code);
        printf("文本的内容为====>%s\n", a);
        fclose(a1);
    }

}

#define READ_BUFF 100


void copy_file(char *filename, char *copy_filename) {
    FILE *fp1, *fp2;
    size_t c = 0;
    char buf[READ_BUFF];
    fp1 = fopen(filename, "rb");
    fp2 = fopen(copy_filename, "wb");
    if (fp1 == NULL || fp2 == NULL) {
        printf("open %s or %s failed:%s\n", filename, copy_filename, strerror(errno));
        return;
    }
    while ((c = (int) fread(buf, sizeof(char), READ_BUFF, fp1)) > 0) {
        fwrite(buf, sizeof(size_t), c, fp2);
    }
    fclose(fp1);
    fclose(fp2);
}


int main() {
    read_file();
}
