#include <stdio.h>
#include <string.h>

struct Student{
    int age;
    char name[50];
    int score;
};

int main(int argc, char const *argv[])
{
    struct Student s;

    //define a struct type pointer
    struct Student *p = &s;

    p -> age = 18;
    strcpy(p -> name, "mike");
    p -> score = 59;
    printf("%d, %s, %d\n", p -> age, p ->name, p -> score);

    return 0;
}
