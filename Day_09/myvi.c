#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[]){
    
    //1.open file with "w", argv[1]
    FILE *fp = fopen(argv[1], "w");

    //use fgets(), put the result into a char array
    char buf[1024];
    while(1){
        
        //默认遇到换行符，结束读取,换行符放在buf里

        fgets(buf, sizeof(buf), stdin);

        if(strncmp(buf, ":wq", 3) == 0) break;

        // int i = 0;
        // while(buf[i] != '\0' ){
        //     fputc(buf[i], fp);
        //     i++;
        // }

        for(int i = 0; i < strlen(buf); i++) 
            fputc(buf[i], fp);
    
    }

    //close file
    fclose(fp);

    return 0;
}
