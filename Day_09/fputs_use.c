#include <stdio.h>

int main(int argc, char const *argv[]){

    FILE *fp = fopen("11.txt", "w");

    // char *p1 = "hello\n";
    // fputs(p1, fp);
    // char *p2 = "abc\n";
    // fputs(p2, fp);
    // char *p3 = "mike\n";
    // fputs(p3, fp);

    // pointer array, every element is a pointer
    char *p[] = {"hello\n","abc\n","mike\n"};
    for (int i = 0; i < sizeof(p)/sizeof(*p); i++)
        fputs(p[i], fp);

    fclose(fp);

    return 0;
}


int main01(int argc, char const *argv[]){
    
    char buf[] = "hello\n";
    // buf writes to stdout(screen)
    fputs(buf, stdout);

    char *p = "mike";
    fputs(p, stdout);


    return 0;
}
