#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <string.h>

//1. 产生500个以内的随机数，以如下格式写入文件中(每写一个数字后换行)
//10
//20
//30
//提示:fputs sprintf

// 2.读取1中文件的内容，把文件的每行数字放在int a[1024]中，然后打印该数组
// fgets sscanf feof
int main(int argc, char const *argv[]){
    
    FILE *fp = fopen("lab.txt", "w");
    if(fp == NULL) perror("fopen");

    srand((unsigned) (time(NULL)));

    char targetString[2];

    for(int i = 0; i < 100; i++){
        sprintf(targetString, "%d", rand() % 100);
        fputs(targetString, fp);
        fputs("\n", fp);
        memset(targetString, 0, sizeof(targetString));
    }

    fclose(fp);
    fp = NULL;
    
    return 0;
}
