#include <stdio.h>
#include <string.h>

struct Student{

    int age;
    char name[50];
    int score;

};

int main(int argc, char const *argv[])
{
    int a = 10;
    int b;
    
    b = a;

    struct Student s1 = {18, "mike", 59};
    struct Student s2;

    s2 = s1;

    printf("%d, %s, %d\n", s2.age, s2.name, s2.score);

    return 0;
}
