#include <stdio.h>
#include <string.h>

struct Info
{
    int age;
    char name[50];
};


struct Student{
    struct Info info;
    int score;
};

int main(int argc, char const *argv[])
{
    struct Student s;
    s.info.age = 18;
    strcpy(s.info.name, "mike");
    s.score = 59;

    struct Student *p = &s;
    p->info.age = 20;
    strcpy(p->info.name, "mike_1");
    p->score = 63;

    //init
    struct Student tmp = {18, "mike_2", 59};
    printf("%d, %s, %d\n", tmp.info.age, tmp.info.name, tmp.score);

    return 0;
}
