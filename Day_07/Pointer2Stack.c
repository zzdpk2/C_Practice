#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    
    int a = 0; //定义一个栈区普通变量
    int *p = &a; //指针指向栈区空间

    *p = 10;

    printf("*p = %d\n", *p);


    return 0;
}
