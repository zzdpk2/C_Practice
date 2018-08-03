#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    char src[] = "ddda123abcd";
    char *p = strchr(src, 'a');
    printf("p = %s\n", p);

    char buf[] = "abcdefg";
    char *p1 = strstr(buf, "cde");

    if(p1 == NULL)
        printf("Fail!\n");
    else
        printf("p1 = %s\n", p1);

    system("pause");

    return 0;
}
