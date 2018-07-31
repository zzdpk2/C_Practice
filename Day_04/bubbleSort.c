#include <stdio.h>

int main(int argc, char const *argv[])
{
    int targetArray[5] = {0};
    int arraylength = sizeof(targetArray) / sizeof(targetArray[0]);

    printf("Please type 5 elements: \n");
    for(int i = 0; i < arraylength; i++)
        scanf("%d", &targetArray[i]);
    
    for(int i = 0; i < arraylength - 1; i++){
        for(int j = 0; j < arraylength - 1 - i; j++){
            if (targetArray[j] > targetArray[j+1]){
                int temp = targetArray[j];
                targetArray[j] = targetArray[j+1];
                targetArray[j+1] = temp;
            }
        }
    }
    printf("Sorted Array: \n");
    for(int i = 0; i < arraylength; i++)
        printf("%d\n", targetArray[i]);

    return 0;
}

