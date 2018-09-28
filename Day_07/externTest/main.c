#include <stdio.h>

//使用前，先声明
//声明函数,extern可有可无      
//声明可以多次
extern int a;
extern int b;
extern void test();

int main(int argc, char const *argv[])
{
    test();
    a = 100;
    b = 200;
    printf("\na: %d\nb: %d\n", a, b);

    return 0;
}
