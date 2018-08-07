#include <stdio.h>

int main(int argc, char const *argv[])
{

    int a[] = {5, 100, 32, 45, 21, 67, 32, 68, 41, 99, 13, 71};

    int length = sizeof(a) / sizeof(*a);

    int max_temp = *a;
    int max_sub = 0;

    for(int i = 1; i < length - 1; i++){
        if(*a < *(a+i)){
            max_temp = *(a+i);
            *(a+i) = *a;
            *a = max_temp;
        }
    }

    max_sub = *(a+1);
    for(int i = 1; i < length - 1; i++){
        if(max_sub < *(a+i))
            max_sub = *(a+i);
    }

    printf("max_sub: %d\n", max_sub);
        
    getchar();
    return 0;
}
