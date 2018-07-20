#include <stdio.h>
#include <stdlib.h>

#define _CRT_SECRURE_NO_WARNINGS

int main(int argc, char const *argv[])
{
    char ch = 127;
    ch = ch + 2;
    printf("ch: %d\n", ch);
    system("pause");
    // return 0;
    return EXIT_SUCCESS;
}
