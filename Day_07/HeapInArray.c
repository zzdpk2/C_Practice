#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int *p = NULL;
    p = (int *)malloc(10 * sizeof(int));
    p[0] = 1;
    *(p+0) = 1;

    free(p);
    p = NULL;

    return 0;
}
