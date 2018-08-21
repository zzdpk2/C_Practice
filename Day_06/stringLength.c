#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    char* p = "            aaabbbcccddd           ";

    // char* p = "hello";

    char* head = p;
    // char* tail = p + sizeof(p) - sizeof(*p) - 1;
    char* tail = p + strlen(p) - 1;

    int i = 0;
    while(head != tail){
        if(*head != ' ')
            i++;
        if(*tail != ' ')
            i++;
        head++;
        tail--;
    }

    printf("Valid length: %d", i+1);

    getchar();

    return 0;
}
