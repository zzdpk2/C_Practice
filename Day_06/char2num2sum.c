#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int get_sum(char target[], int length);

int main(int argc, char const *argv[])
{
    // char target[] = "12, 43, 65, 13, 97, 54, 19";
    char target[] = "1, 1, 1, 2, 3";
    // char* p = strtok(target, ",");
    int length = sizeof(target) / sizeof(*target);
    printf("%d\n", get_sum(target, length));

    return 0;
}

int get_sum(char target[], int length){

    int sum = 0;
    char array_c[512] = {0};
    char* p = strtok(target, ",");

    int i = 0;
    while(p != NULL){
        // i = atoi(p);
        sscanf(p, "%d", &i);
        sum += i;
        p = strtok(NULL, ",");
    }
    return sum;
}


