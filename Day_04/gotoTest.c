#include <stdio.h>

int main(int argc, char const *argv[])
{
    goto Mike;
    
    printf("1111111111\n");
    printf("2222222222\n");

    Mike:
        printf("goto success!");

    return 0;
}
