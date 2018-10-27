#include <stdio.h>
#include <string.h>

//define a new struct
//the type of struct should be struct Student
//the vars inside struct can be given to value
struct Student
{
    int age;
    char name[50];
    int score;
};


int main(){

    //define the vars of struct 
    struct Student stu;

    //initialize, use{}
    //only can be initialized when define
    struct Student stu2 = {18, "Mike", 59};

    struct Student tmp;
    //if use normal var, use like tmp.age = 18 to give value
    tmp.age = 18;

    //tmp.name = "Mike";
    //wrong, name is the name of char array, the name is constant.
    strcpy(tmp.name, "Mike");
    tmp.score = 59;

    //if there is a pointer var,use -> instead of .
    struct Student *p;
    //if there is a pointer, the pointer should have pointed a legal position
    p = &tmp;
    p -> age = 18;
    strcpy(p -> name, "Mike1");
    p -> score = 60;

    //any struct var can be manipulated by . or ->
    (&tmp) -> age = 18;
    (*p).age = 20;

    return 0;
}




