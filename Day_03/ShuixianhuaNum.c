#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int num = 0, result = 0, digit = 0, scale = 0;
    printf("Please enter the scale:\n");
    scanf("%d", &scale);

    for(int i = 10; i < scale; i++){
        num = i;
        result = 0;
        while(num > 0){
            digit = num % 10;
            result += digit * digit * digit;
            num /= 10;
        }
        if(result == i)
            printf("%d\n", i);
    }

    system("pause");

    return 0;
}
