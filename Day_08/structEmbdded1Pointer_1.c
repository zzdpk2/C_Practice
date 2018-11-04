#include <stdlib.h>
#include <stdio.h>
#include <string.h>

struct Student{
    int age;
    char *name;
    int score;
};

int main(int argc, char const *argv[])
{
    struct Student *p;

    //Allocate memory for p
    p = (struct Student *)malloc(sizeof(struct Student));
    if(p == NULL){
        printf("Allocate error!\n");
        return 0;
    }

    p -> name = (char*) malloc (strlen("mike") + 1);

    p -> age = 18;
    strcpy(p->name, "mike");
    p -> score = 59;

    printf("%d, %s, %d\n", p -> age, p -> name, p -> score);

    // getchar();

    return 0;
}
