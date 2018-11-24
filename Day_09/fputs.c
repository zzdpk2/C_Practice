#include <stdio.h>
#include <string.h>

int main(){

    FILE *fp = NULL;
    fp = fopen("03.txt", "w");
    if(fp == NULL){
        perror("fopen");
        return -1;
    }

    char ch = 'a';
    while(ch <= 'z'){
        fputc(ch, fp);
        ch++;
    }

    char ch1[] = "abcdefg";
    for(int i = 0; i < strlen(ch1); i++)
        fputc(*(ch1+i), fp);

    fclose(fp);
    fp = NULL; 

    return 0;
}

int main01(){

    //1.打开文件
    FILE *fp = NULL;
    //以写的方式打开文件，如果文件不存在，自动新建
    fp = fopen("03.txt", "w");
    if(fp == NULL){
        perror("fopen");
        return -1;
    }
    //2.写文件 fputc(), 一次只能写一个字符
    // fputc('a', fp);
    // fputc('b', fp);
    // fputc('c', fp);
    // fputc('d', fp);

    fputc('a', stdout);
    fputc('b', stdout);
    fputc('c', stdout);
    fputc('d', stdout);

    //3.关闭文件
    fclose(fp);
    fp = NULL; 


    return 0;
}