#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Test{
    int a;
};

typedef struct Test2{
    int a;
}Test2;

Test2 tmp;

int main(int argc, char const *argv[])
{
    typedef int int64;

    int64 a = 64;

    Test2 tmp = {5};

    printf("tmp: %d\n", tmp.a);

    return 0;
}
