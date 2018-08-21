#include <stdio.h>
#include <string.h>
#include <math.h>

int my_atoi(char *str);

int main(int argc, char const *argv[])
{
    printf("num: %d\n", my_atoi("+123"));
    getchar();
    return 0;
}

int my_atoi(char *str){
    int num = 0, i = 0;
    // int length = strlen(str);

    while(*(str+i) != '\0'){
        if(*(str+i) >= 48 && *(str+i) <= 57){
            int tempNum = *(str+i) - 48;
            num += tempNum * pow(10, i);
            i++;
        }
    }

    return num;
}

