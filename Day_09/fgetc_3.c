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
    fputc('a' ,fp);
    fputc('b' ,fp);
    fputc('c' ,fp);
    fputc(-1 ,fp);
    fputc('d' ,fp);
    fputc(-1 ,fp);
    fputc('e' ,fp);

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

        if(feof(fp))
            break;

        ch = fgetc(fp);
        printf("ch = %c\n", ch);

    }
    
    // while(ch != EOF){
    //     ch = fgetc(fp);
    //     printf("char = %c\n", ch);
    // }
        
}

int main(){

    // write_file();

    read_file();

    return 0;
}


