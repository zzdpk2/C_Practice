#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    //1. 在{}内部定义的变量就是局部变量
    //2.只有执行到定义变量的这个语句，系统才会给这个变量分配空间
    //3.当离开{}，这个非static局部变量就会自动释放。
    //4.局部变量的作用域在当前的{}，离开此{}就无法使用此变量
    //5.{}的普通局部变量，加不加auto关键字等价，普通局部变量也叫自动变量

    int temp = 10;
    // auto int b = 11;

    {
        int a = 10;
        a = 11; //ok，还在作用域内部
    }


    return 0;
}

