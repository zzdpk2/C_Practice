#include <stdio.h>

int main(int argc, char const *argv[]){

    //1.打开文件， 文件路径， argv[1]
    FILE *fp = fopen(argv[1], "r");
    if(fp == NULL)
        perror("open");

    //2.读取文件内容，将内容显示
    char ch;
    while(1){
        ch = fgetc(fp);
        if(feof(fp)) break;
        printf("%c", ch);
    }
    //3.关闭文件
    fclose(fp);    
    return 0;
}
