#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{

    // int *p = 0x1122;
    // *p = 100;

    // printf("\n");

    int *p;

    p = 0x1234;
    printf("p = %d\n", p);

    *p = 100;

    system("pause");

    return 0;
}
