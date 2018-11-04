#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student{
    int age;
    char name[50];
    int score;
};

int main(int argc, char const *argv[])
{
    struct Student s;

    //define a struct type pointer, pointing to heap
    // struct Student *p = &s;
    struct Student *p = (struct Student*)malloc(sizeof(struct Student));

    p -> age = 18;
    strcpy(p -> name, "mike");
    p -> score = 59;
    printf("%d, %s, %d\n", p -> age, p ->name, p -> score);

    if(p != NULL){
        free(p);
        p = NULL;
    }

    return 0;
}
