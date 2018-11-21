#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    
    return 0;
}


int main01(){

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