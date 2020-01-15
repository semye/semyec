//
// Created by yesheng on 2018/10/30.
// c 语言 存储类
// auto 存储类是所有局部变量默认的存储类
// register 存储类用于定义存储在寄存器中而不是 RAM 中的局部变量 这意味着变量的最大尺寸等于寄存器的大小（通常是一个词），且不能对它应用一元的 '&' 运算符（因为它没有内存位置）。
// static 存储类指示编译器在程序的生命周期内保持局部变量的存在，而不需要在每次它进入和离开作用域时进行创建和销毁。因此，使用 static 修饰局部变量可以在函数调用之间保持局部变量的值。
//
//static 修饰符也可以应用于全局变量。当 static 修饰全局变量时，会使变量的作用域限制在声明它的文件内。
//
//全局声明的一个 static 变量或方法可以被任何函数或方法调用，只要这些方法出现在跟 static 变量或方法同一个文件中。
// extern 存储类用于提供一个全局变量的引用，全局变量对所有的程序文件都是可见的。当您使用 extern 时，对于无法初始化的变量，会把变量名指向一个之前定义过的存储位置。
//
//当您有多个文件且定义了一个可以在其他文件中使用的全局变量或函数时，可以在其他文件中使用 extern 来得到已定义的变量或函数的引用。可以这么理解，extern 是用来在另一个文件中声明一个全局变量或函数。
//
//extern 修饰符通常用于当有两个或多个文件共享相同的全局变量或函数的时候


/*
 * 四种存储类
 * auto 所有局部变量的默认存储类 默认保存在RAM中
 * register 定义的局部变量可能保存在寄存器中 不能对它应用一元的 '&' 运算符（因为它没有内存位置）
 * static 可修饰局部变量和全局变量  在修饰局部变量时，多次调用会无效
 * extern 提供一个全局变量的引用
 */
void four_() {
    {
        int month;
        auto int year;
    }
    int day;

    printf("%d\n", day);

    {
        register int *ye;
//   不能对 register的局部变量使用& 因为没有内存位置    printf("%p\n", &ye);
    }

    static int ss = 9;
    printf("%d\n", ss);
    ss--;
    printf("%d\n", ss);
}





extern int yesheng; //extern 提供全局的引用


int main() {
    return 0;
}
