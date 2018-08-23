#include <stdio.h>
#include <string.h>
#include <math.h>

int my_atoi(char const* str);
int convert2Num(char* str, int flag);

int main(int argc, char const *argv[])
{
    printf("num: %d\n", my_atoi("+123"));
    getchar();
    return 0;
}

int my_atoi(char const* str){
    
    char flag = *str;
    char buf[sizeof(str)/sizeof(*str)] = {'0'};
    int num = 0;

    if(*str == '+'){
        str++;
        strcpy(buf, str);
        num = convert2Num(buf, 1);
    }else if(*str == '-'){
        str++;
        strcpy(buf, str);
        num = convert2Num(buf, -1);
    }else if(*str >= 48 && *str <= 57){
        strcpy(buf, str);
        num = convert2Num(buf, 1);
    }

    return num;
}

int convert2Num(char* str, int flag){

    int buf[(sizeof(str)/sizeof(*str)) - 1] = {0};
    int i = 0, num = 0;

    while(*(str+i) != '\0'){
        buf[i] = *(str+i) - 48;
        i++;
    }

    return num;

}
