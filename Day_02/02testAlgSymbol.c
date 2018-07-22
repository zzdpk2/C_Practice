#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a = 10;
    int b = 3;
    // a++; //后自增,先计算表达式的结果
    // ++a; //前自增,后计算表达式的结果
    printf("a/b: %d\n", a / b);
    int c = ++a * 10;
    // int c = a++ * 10;
    printf("c: %d\n", c);
    printf("a: %d\n", a);
    return 0;
}
