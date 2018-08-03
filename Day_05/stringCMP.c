#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    char str1[10] = {" "};
    char str2[10] = {" "};

    printf("Please enter str1:\n");
    scanf("%s", str1);

    printf("Please enter str2:\n");
    scanf("%s", str2);

    int result = strcmp(str1, str2);

    if (result == 0)
        printf("[%s] == [%s]\n", str1, str2);
    else if (result > 0)
        printf("[%s] > [%s]\n", str1, str2);
    else if (result < 0)
        printf("[%s] < [%s]\n", str1, str2);

    system("pause");

    return 0;
}
