#include <stdio.h>

//声明函数,extern可有可无
extern void test();

int main(int argc, char const *argv[])
{
    test();
    return 0;
}
