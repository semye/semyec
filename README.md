# C语言学习笔记

## C语言标准库头文件

[头文件文档](https://zh.cppreference.com/w/c/header)

- assert.h
- ctype.h
- errno.h
- limits.h
- locale.h
- math.h
- setjmp.h
- signal.h
- stdarg.h
- stddef.h
- stdio.h
- stdlib.h
- string.h
- time.h
- float.h

95起

- iso646.h
- wchar.h
- wctype.h

99起

- complex.h
- fenv.h
- inttypes.h
- stdbool.h
- stdint.h
- tgmath.h

11起

- stdalign.h
- stdatomic.h
- stdnoreturn.h
- threads.h
- uchar.h

## 函数调用

- 传值调用
- 引用调用
- 使用指针


## 编译

gcc 指定文件名 默认生成 a.out 

gcc 必须指定main函数

```
gcc main.c
```

-o 指定生成的可执行文件名

指定多个文件
```
gcc main.c semye.c
```

-c 生成object 文件