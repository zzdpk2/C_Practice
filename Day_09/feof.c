#include <stdio.h>

int main(int argc, char const *argv[]){

    FILE *fp = fopen("06.txt", "r");
    if(fp == NULL){
        perror("fopen");
        return 0;
    }

    while(1){ //if not to the end of the file

        printf("Not to the end of file.\n");
        int ch = fgetc(fp); //read the file, in order to assume whether it comes to the end of the file
        printf("ch = %c\n", ch);

        if(feof(fp))    break; 
    }

    fclose(fp); 
    fp = NULL;

    return 0;
}
