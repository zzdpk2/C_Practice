#include <stdio.h>

int main(){

    FILE *p = NULL;

    //打开成员，返回一个有效地址,失败，返回NULL
    // p = fopen("./02.txt", "r");
    // "w"，文件不存在，创建在打开，文件存在，清空在打开
    // "r" 文件不存在，打开失败
    // "a" ，文件不存在，创建在打开，文件存在，光标自动切换文件末尾
    p = fopen("./02.txt", "w");
    if (p == NULL){
        perror("fopen failed!\n");
        return 0;
    }

    fclose(p);
    p = NULL;

    return 0;
}