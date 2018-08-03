#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int a = 10;
    char ch = 'd';
    char buf[] = "hello";
    char dst[100] = { " " };

    sprintf(dst, "a = %d, ch = %c, buf = %s\n", a, ch, buf);

    printf("dst = %s", dst);

    system("pause");

    return 0;
}
