#include <stdio.h>

int main(int argc, char const *argv[])
{
    char buf[] = "hello";
    char *p1 = buf;
    *p1 = 'a';
    p1 = NULL;

    //const修饰*，指针所指向的内存不能修改
    const char *p2 = buf;
    // *p2 = 'a';
    p2 = NULL;

    return 0;
}
