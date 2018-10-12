#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    int b[10] = {0};

    //处理一些代码，把b内部元素改了

    //这种方法，不可以清零数组，没有b[10]这个元素
    //b[10] = {0};

    //循环清空
    int i = 0;
    int n = sizeof(b) / sizeof(b[0]);
    for(i = 0; i < n; i++)
        b[i] = 0;

    //直接到位的清空方法
    memset(b, 0, sizeof(b));

    // char str[10];
    int str[10];
    memset(str, 'a', sizeof(str));
    for(i = 0; i < 10; i++)
        // printf("%c ", str[i]);
        printf("%d  ", str[i]);
    printf("\n");

    return 0;
}


int main01(int argc, char const *argv[])
{
    int a;
    memset(&a, 0, sizeof(a));
    printf("a = %d\n", a);

    // memset(&a, 10, sizeof(a));
    // printf("a1 = %d\n", a);

    //中间参数虽然是整型，但是以字符处理
    memset(&a, 97, sizeof(a));
    printf("a = %c\n", a);

    int b[10];
    //b数组清零
    memset(b, 0, sizeof(b));
    memset(b, 0, 10 * sizeof(int));


    return 0;
}
