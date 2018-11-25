#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[]){
    
    //1.open file with "w", argv[1]
    FILE *fp = fopen(argv[1], "w");

    //use fgets(), put the result into a char array
    char buf[1024];
    while(1){
        
        fgets(buf, sizeof(buf), stdin);

        if()
    
    }

    //clsoe file


    return 0;
}
