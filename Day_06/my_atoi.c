#include <stdio.h>
#include <string.h>
#include <math.h>

int my_atoi(char* str);
int convert2Num(char* str, int flag);

int main(int argc, char const *argv[])
{
    char array[4] = " ";
    printf("Please enter the String: \n");
    scanf("%s", array);
    printf("num: %d\n", my_atoi(array));
    // printf("num: %d\n", my_atoi("-123"));
    // getchar();
    return 0;
}

int my_atoi(char* str){
    
    char flag = *str;
    char buf[sizeof(str)/sizeof(*str)] = {'0'};
    int num = 0;

    if(*str == '+'){
        strcpy(buf, str+1);
        num = convert2Num(buf, 1);
    }else if(*str == '-'){
        strcpy(buf, str+1);
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
    int length =  sizeof(buf)/sizeof(*buf);

    while(*(str+i) != '\0'){
        buf[i] = *(str+i) - 48;
        i++;
    }

    // for(i = 0; i < length; i++ )
    //     printf("buf[%d]: %d\n", i, buf[i]);

    for(i = 0; i < length; i++)
        num = num + (buf[i] * ceil(pow(10, length - 1 - i)));

    num *= flag;

    return num;

}
