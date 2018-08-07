#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    char src[100] = "hello";
    char dst[100];

    int i = 0;
    while(*(src+i) != '\0'){
        *(dst+i) = *(src+i);
        i++;
    }

    *(dst+i+1)= '\0';

    printf("dst : %s\n", dst);

    // for(int j = 0; j <= i; j++)
    //     printf("%c",*(dst+j));

    // getchar();

    return 0;
}
