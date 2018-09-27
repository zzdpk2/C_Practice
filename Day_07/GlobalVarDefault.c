#include <stdio.h>

int a = 10;

//1次是定义，3次是声明
int b;
int b;
int b;
int b;

//1.如果定义一个全局变量，没有赋值(初始化),无法确定是定义,还是声明
//2.如果定义一个全局变量，有赋值(初始化),那么一定是定义

int main(int argc, char const *argv[])
{
    //只有声明没有定义是无法给变量赋值的
    // extern int b = 10;
    


    return 0;
}
