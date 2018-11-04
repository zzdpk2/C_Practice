#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define CHAR_LENGTH 50

//1. pointer points to stack
struct Student{
    int age;
    char* name;
    int score;
};

static struct Student point2stack(struct Student *p){
    
    struct Student s;
    p = &s;

    char buf[CHAR_LENGTH];
    (p -> name) = buf;
    p -> age = 18;
    strcpy(p -> name, "mike");
    p -> score = 60;

    printf("%d, %s, %d\n", p -> age, p -> name, p ->score);

    return s;
}

//2. pointer points to heap area
struct Student* point2heap(struct Student *p){

    p = (struct Student*) malloc (sizeof(struct Student));
    p -> age = 18;

    p -> name = (char*) malloc (strlen("mike2") + 1); 
    strcpy(p -> name, "mike2");
    p -> score = 59;

    return p;
}

int main(int argc, char const *argv[]){   
    
    return 0;
}

