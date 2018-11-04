#include <stdio.h>
#include <string.h>
#include <stdlib.h>


struct Student{
    int age;
    char *name;
    int score;
};

//Pointer points to heap area
int main(int argc, char const *argv[]){
    
    struct Student s;
    s.age = 18;

    // struct Student *ps = (struct Student *) malloc (sizeof(struct Student));
    s.name = (char *) malloc (strlen("mike123123") + 1);

    strcpy(s.name, "mike"); 
    s.score = 59;
    
    printf("%d, %s, %d\n", s.age, s.name, s.score);

    return 0;
}


//Pointer points to stack area
int main02(int argc, char const *argv[]){
    
    struct Student s;
    s.age = 18;

    char buf[100];
    s.name = buf; //Points to stack area
    strcpy(s.name, "mike"); 
    s.score = 59;

    return 0;
}


//pointer points to data area
int main01(int argc, char const *argv[]){
    
    struct Student s;
    s.age = 18;
    s.name = "mike"; //pointer saves the first address of string
    s.score = 59;

    return 0;
}
