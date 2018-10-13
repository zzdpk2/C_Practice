#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int *p;

    p = (int *)malloc(sizeof(int));

    if(p == NULL){
        printf("Allocate failed!\n");
        return -1;
    }

    *p = 10;
    
    printf("*p = %d\n", *p);

    free(p);

    return 0;
}
