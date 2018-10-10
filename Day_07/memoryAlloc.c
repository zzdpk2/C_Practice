#include <stdio.h>

int a; //未初始化
int c;
int d; //bss area will increase

void fun(){ 

    static int b = 10;  //初始化

}

int main(int argc, char const *argv[])
{
    
    return 0;
}
