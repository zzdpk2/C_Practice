#include <stdio.h>
#include <stdlib.h>

int my_strlen(char str[]);

int main(int argc, char const *argv[])
{
    
    return 0;
}

int my_strlen(char str[]){
    int i = 0;
    while(str[i] != '\0')
        i++;
    return i;
}