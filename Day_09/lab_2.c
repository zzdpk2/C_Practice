#include <stdio.h>
#include <string.h>

// 2.读取1中文件的内容(lab.txt)，把文件的每行数字放在int a[1024]中，然后打印该数组
// fgets sscanf feof

int main(int argc, char const *argv[]){
    
    FILE *fp = fopen("lab.txt", "r");
    if(fp == NULL) perror("fopen");

    int a[1024];
    char buf[10];
    int i = 0;
    int num;
    // while(!feof(fp)){
    while(1){
        // if(feof(fp)) break;
        fgets(buf, sizeof(buf), fp);
        // printf("buf: %s\n", buf);
        if(feof(fp)){
            num = i;
            break;
        }
        sscanf(buf, "%d", &a[i]); 
        // printf("buf = %s\n", buf);
        i++;
        // if(i == 5) break;
    }

    for(i = 0; i < num; i++)
        printf("%d\n", *(a+i));

    fclose(fp);
    fp = NULL;
    
    return 0;
}
