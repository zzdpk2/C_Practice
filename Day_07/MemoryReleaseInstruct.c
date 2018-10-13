#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int *p = NULL;

    p = (int *)malloc(sizeof(int));

    if(p == NULL){
        printf("Allocate failed!\n");
        return -1;
    }

    *p = 10;
    
    printf("*p = %d\n", *p);

    //释放养成习惯
    if(NULL != p){

        free(p);
        p = NULL; //这一步很重要

    }

    return 0;
}
