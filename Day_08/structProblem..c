#include <stdio.h>
#include <string.h>

struct Student{

    int age;
    char name[50];
    int score;

};

void setStudent(struct Student *ps1){

    ps1 -> age = 22;
    strcpy(ps1 -> name, "jiang");
    ps1 -> score = 77;

}

void outputStudent(const struct Student *ps1){

    printf("%d, %s, %d\n", ps1->age, ps1->name, ps1->score);

}

int main(int argc, char const *argv[])
{
    struct Student s1 = {18, "mike", 59};
    struct Student *p1 = &s1;
    setStudent(p1);

    return 0;
}
