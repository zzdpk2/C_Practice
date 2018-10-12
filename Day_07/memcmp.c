#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    int a[10];
    int b[10];

    for(int i = 0; i < 10; i++)
        a[i] = i + 1;

    for(int i = 0; i < 10; i++)
        b[i] = i + 1;

    // b[9] = 11;
    b[9] = 1;
    b[0] = 10;

    int flag = memcmp(a ,b, 10 * sizeof(int));

    if(flag < 0)
        printf("a < b\n");
    else if(flag == 0)
        printf("a = b\n");
    else
        printf("a > b\n");

    return 0;
}
