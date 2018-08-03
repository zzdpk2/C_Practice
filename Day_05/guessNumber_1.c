#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>
#include <time.h>
#include <math.h>

int typeNumber();

int main(int argc, char const *argv[])
{
    int savedArray[4] = {0};
    int genNumber = 0;
    int enteredNumber = typeNumber();

    srand((unsigned int)time(NULL));

    for(int i = 0; i < 4; i++){
        savedArray[i] = rand() % 10;
        genNumber += savedArray[i] * pow(10, i);
    }

    int i = 0;
    while(1){

        if(enteredNumber == genNumber){
            printf("Matched!");
            break;
        }else if(enteredNumber > genNumber){
            printf("The number you entered is too big!\nPlease reenter.\n");
            system("pause");
            system("cls");
            enteredNumber = typeNumber();
            i++;
        }
        else if(enteredNumber < genNumber){
            printf("The number you entered is too small!\nPlease reenter.\n");
            system("pause");
            system("cls");
            enteredNumber = typeNumber();
            i++;
        }

        if(i == 9){
            printf("The doctor aborted the program due to your bad luck!\n");
            printf("The mysterious number is : %d\n", genNumber);
            break;
        }
        
    }

    system("pause");
        
    return 0;
}


int typeNumber(){

    int enteredNumber = 0;
    printf("Please enter a 4-digit number: \n");
    scanf("%d", &enteredNumber);
    while(enteredNumber < 1000 || enteredNumber > 9999){
        printf("Wrong number, please reenter!\n");
        printf("Please enter a 4-digit number: \n");
        scanf("%d", &enteredNumber);
    }

    return enteredNumber;
}

