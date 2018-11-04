#include <stdio.h>
#include <string.h>
#include <stdlib.h>

union Test{
    unsigned char a;
    unsigned short b;
    unsigned int c;
};

int main(int argc, char const *argv[]){

    printf("%lu\n", sizeof(union Test));

    return 0;
}
