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

    union Test obj;
    printf("%p, %p, %p, %p\n", &obj, &obj.a, &obj.b, &obj.c);

    obj.c = 0x44332211;
    printf("obj.a: %x\n obj.b: %x\n obj.c: %x\n", &obj.a, &obj.b, &obj.c);

    obj.a = 0xaa;
    printf("obj.a: %x\n obj.b: %x\n obj.c: %x\n", &obj.a, &obj.b, &obj.c);

    return 0;
}
