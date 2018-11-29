#include <stdio.h>

int main(int argc, char const *argv[]){
    
    char buf[] = "hello\n";
    // buf writes to stdout(screen)
    fputs(buf, stdout);
    

    return 0;
}
