#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    char* p = "                 123456789             ";
    char* start = p;
    char* end = p + strlen(p) - 1;

    while(*start == ' ' && *start != '\0')
        start++;

    while(*end == ' ' && end != p)
        end--;

    printf("Valid length: %d", (end - start + 1));

    // getchar();

    return 0;
}
