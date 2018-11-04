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


    p -> age = 18;
    strcpy(p->name, "mike");
    p -> score = 59;

    return 0;
}
