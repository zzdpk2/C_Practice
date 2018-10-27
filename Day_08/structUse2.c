#include <stdio.h>

//define two vars of Student s1, s2
struct Student
{
    int age;
    char name[50];
    int score;
} s1 = {18, "mike", 95}, s2;

//struct without name, only can use for one time
struct
{
    int age;
    char name[50];
    int score;
} s3, s4;

int main(int argc, char const *argv[])
{
    printf("%d, %s, %d\n", s1.age, s1.name, s1.score);
    return 0;
}






