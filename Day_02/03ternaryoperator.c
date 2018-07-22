#include <stdio.h>
#include <stdlib.h>

#define _CRT_SECURE_NO_WARNINGS
#define MAX(a,b) (a)>(b)?(a):(b)

int main(int argc, char const *argv[])
{
    // int a = scanf("%d", &a);
    // int b = scanf("%d", &b);
    // int c = scanf("%d", &c);
    int a = 10;
    int b = 20;
    int c = 5;

    // int c = a > b ? printf("%d\n", a) : printf("%d\n", b); 
    // int c = a > b ? a : b;
    // if(a > b)
    //     printf("a");
    // else 
    //     printf("b");
    //求三个数的最大值
    // printf("Max: %d\n", a > b ? (a > c ? a : c) : (b > c ? b : c));
    printf("%d\n", MAX(a, MAX(b,c)));
    system("pause");
    return EXIT_SUCCESS;
}
