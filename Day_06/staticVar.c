#include <stdio.h>

void fun(){
    int i = 0;
    i++;
    printf("fun i = %d\n", i);
}

void static_fun(){
    static int i = 0;
    i++;
    printf("static_fun i = %d\n", i);
}

int main(int argc, char const *argv[])
{
    static_fun();
    static_fun();
    static_fun();

    return 0;
}
