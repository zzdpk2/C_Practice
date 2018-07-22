#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define _CRT_SECURE_NO_WARNINGS

int main(int argc, char const *argv[])
{
    //产生随机数
    //1、导入头文件 time.h stdlib.h
    //2、添加随机种子
    //3、添加随机数
    srand((unsigned int)time(NULL)); //每次随机数不一样

    for(int i = 0; i < 10; i++){

        int value = rand() % 10; //取0-9之间的随机数
        printf("%d\n", value);
        
    }

    return 0;
}
