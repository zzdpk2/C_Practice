#include <stdio.h>

void my_strcpy(char *dst, char *src);
// void my_strcpy(char dst[], char src[]);

int main(int argc, char const *argv[])
{
    
    char src[] = "hello mike";
    char dst[100];
    // char *p; //段错误

    my_strcpy(dst, src);  
    // my_strcpy(p, src); 
    printf("dst = %s\n", dst);

    // getchar();

    return 0;
}


void my_strcpy(char *dst, char *src){

    int i = 0;
    while( *(src+i) != '\0'){
        *(dst+i) = *(src+i);
        i++;
    }
    *(dst+i) = '\0';

    // *(src+i) = '\0';

}