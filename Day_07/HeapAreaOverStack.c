#include <stdio.h>
#include <string.h>
#include <stdlib.h>


//堆区越界
int main(int argc, char const *argv[])
{
    char *p = NULL;

    p = (char *)malloc(0);
    if(p == NULL){
        
        printf("Allocate failed!\n");
        return 0;
        
    }

    strcpy(p, "MikeJiang");
    printf("%s\n", p);

    return 0;
}
