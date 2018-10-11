#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    int a;
    memset(&a, 0, sizeof(a));
    printf("a = %d\n", a);

    // memset(&a, 10, sizeof(a));
    // printf("a1 = %d\n", a);

    //中间参数虽然是整型
    memset(&a, 97, sizeof(a));
    printf("a = %c\n", a);

    int b[10];
    memset(b, 0, sizeof(b));
    memset(b, 0, 10 * sizeof(int));


    return 0;
}
