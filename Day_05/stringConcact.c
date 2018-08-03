#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    char src[] = "hello mike";
    char dst[100] = "abc";

    strcat(dst, src);

    fputs(dst, stdout);

    system("pause");

    return 0;
}
