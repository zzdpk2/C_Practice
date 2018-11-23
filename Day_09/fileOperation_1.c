#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

int main(){
    
    //printf函数是往标准输出函数写内容
    fprintf(stdout, "before aaaaaaaaaa\n");
    int k = close(1); //1代表标准输出设备，关闭了，1就是空闲数字
    printf("close ret: %d\n", k); //0 OK, -1 Failed


    int fd = open("01.txt", O_WRONLY, 0777);  //fd的值open会找最少可用的
    // fd = 1 和 01.txt关联了，所以写到了文件里
    printf("fd: %d\n", fd);

    // dup(1);

    printf("after bbbbbbbb\n");
    printf("after cccccccc\n");

    return 0;
}


int main01(int argc, char const *argv[]){
    printf("before aaaaaaaaaaa\n");
    // fclose(stdout);
    close(1);

    stdout = fopen("./01.txt", "w");

    if(stdout == NULL){
        printf("Fopen failed!\n");
        return -1; 
    }
    printf("aaaaaaaaaaaaaaa\n");
    fclose(stdout); //关闭标准输出文件指针

    printf("bbbbbbbbbbbbbb\n");

    //打印库函数调用失败的原因
    perror("mike");
    // close(stderr);
    perror("jiang");

    int a;
    printf("请输入a: ");
    fclose(stdin);
    scanf("%d", &a);
    printf("a = %d\n", a);

    return 0;
}
