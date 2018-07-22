#include <stdio.h>
#include <stdlib.h>

#define _CRT_SECURE_NO_WARNINGS

int main(int argc, char const *argv[])
{
    int score = 0;
    scanf("%d", &score);
    // switch(score > 90){
    //     case 1: //如果成立....
    //     case 0: //如果不成立....
    //     default:
    //         break;    
    // }
    switch(score/10){
        case 10:
            printf("优秀\n");
            break;
        case 9:
            printf("优秀\n");
            break;
        case 8:
            printf("良好\n");
            break;
    }
    system("pause");
    return 0;
}
