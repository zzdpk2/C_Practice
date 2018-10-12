#include <stdio.h>
#include <string.h>

void giveValue(int TargetArr[], int length);
void outputValue(int TargetArr[], int length);

int main(int argc, char const *argv[])
{
    int a[10];
    int b[10];
    int length_a = sizeof(a) / sizeof(*a);
    int length_b = sizeof(b) / sizeof(*b);

    giveValue(a ,length_a);
    outputValue(a, length_a);

    //第三个参数是指拷贝内存的总大小
    memcpy(b, a, 10 * sizeof(int));
    //memcpy(b, a, sizeof(a));

    //使用memcpy不要出现内存重叠
    // memcpy(&a[2], a, 5 * sizeof(int));

    //防止内存重叠，请使用memmove 
    memmove(&a[2], a, 5 * sizeof(int));

    return 0;
}

void giveValue(int TargetArr[], int length){

    for(int i = 0; i < length; i++)
        TargetArr[i] = i + 1;

}

void outputValue(int TargetArr[], int length){

    for(int i = 0; i < length; i++)
        printf("%d\n", TargetArr[i]);    

}

int main01(int argc, char const *argv[])
{
    //以字符串初始化，自动在末尾隐藏一个结束符'\0'
    char p[] = "hello\0mike";
    char buf[100];
    printf("sizeof(p) = %lu\n", sizeof(p));
    strncpy(buf, p, sizeof(p)); //遇到\0结束，memcpy不会，而是整段拷贝
    printf("buf1 = %s\n", buf);
    printf("buf1 = %s\n", buf + strlen("hello") + 1);
    
    memset(buf, 0, sizeof(buf));
    //指定多长拷贝多长，不会因为\0结束
    memcpy(buf, p, sizeof(p));

    printf("buf3 = %s\n", buf);
    printf("buf4 = %s\n", buf + strlen("hello") + 1);




    return 0;
}
