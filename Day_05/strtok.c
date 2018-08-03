#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    char buf[] = "abc,mike,jiang,250";
    char tmp[100];

    strcpy(tmp, buf);

    //第一个调用
    //第一个参数写源字符串，第二个参数写切割后的字符串
    //返回值就是切割后的字符串
    //在匹配切割字符的地方，换成结束符
    //使用strtok会破坏原来字符串的结构
    //如果没有切割成功返回NULL

    char *p = strtok(buf, ",");
    printf("p1 = %s\n", p);

    //第二次调用，第一个参数需要写NULL
    // p = strtok(NULL, ",");
    // printf("p2 = %s\n", p);

    // p = strtok(NULL, ",");
    // printf("p3 = %s\n", p);

    while(p != NULL){
        printf("p = %s\n", p);
        p = strtok(NULL, ",");
    }

    system("pause");

    return 0;
}
