#include <stdio.h>
#include <string.h>

struct Student
{
    int age;
    char name[50];
    int score;
};

int main(int argc, char const *argv[])
{

    struct Student a[5] = {
        {18, "aa", 100},
        {19, "ab", 90},
        {20, "ac", 80},
        {28, "ad", 70},
        {38, "ae", 60}
    };
        // the other way
    // struct Student a[5] = {
    //     18, "aa", 100,
    //     19, "ab", 90,
    //     20, "ac", 80,
    //     28, "ad", 70,
    //     38, "ae", 60
    // };

    //求平均分
    double ave = 0;
    int num = sizeof(a)/sizeof(*a);
    for(int i = 0; i < num; i++)
        ave += (a[i].score/num);
    
    printf("ave: %.2f", ave);

    return 0;
}

int main01(int argc, char const *argv[])
{
    struct Student s;

    struct Student a[5];
    //manipulate element
    a[0].age = 18;
    strcpy(a[0].name, "aaa");
    a[0].score = 59;

    //manipulate the address of specific el ement
    (a+1) -> age = 100;
    strcpy((a+1)->name, "DD");
    (a+1) -> score = 59;

    //manipulate element
    (*(a+2)).age = 20;
    strcpy((*(a+2)).name, "lilly");
    ( *(a+2)).score = 62;

    //manipulate by pointer
    struct Student *p = a;
    p = &a[0];

    p[3].age = 21;
    strcpy(p[3].name, "mike");
    p[3].score = 100;

    for(int i = 0; i < sizeof(a)/sizeof(*a); i++)
        printf("%d, %s, %d\n", (p+i)->age, (p+i)->name, (p+i)->score);



    return 0;
}
