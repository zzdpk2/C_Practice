#include <stdio.h>
#include <string.h>

void write_file(){

    //1.open file
    FILE *fp = fopen("04.txt", "w");
    if(fp == NULL){
        perror("fopen");
        return;
    }
    //2.write file
    char *p = "abcedf";
    for(int i = 0; i < strlen(p); i++)
        fputc(*(p+i), fp);

    //3.close file
    fclose(fp);

}

void read_file(){

    FILE *fp = fopen("04.txt", "r");
    if(fp == NULL){
        perror("fopen");
        return;
    }
    
    char ch;
    while(1){

        ch = fgetc(fp);

        if(ch == EOF)   break;

        printf("ch = %c\n", ch);

    }
    
    // while(ch != EOF){
    //     ch = fgetc(fp);
    //     printf("char = %c\n", ch);
    // }
        
}

int main(){

    write_file();

    read_file();

    return 0;
}


