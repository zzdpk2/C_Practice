#include <stdio.h>

void swap(int *m, int *n);
void sort(int *array, int length);
//void sort(int array[], int length);
void printArray(int *array, int length);
//void printArray(int array[], int length);

int main(int argc, char const *argv[])
{
    int array[] = {3,5,7,9,2,10,56,8};
    int length = sizeof(array) / sizeof(*array);
    printf("Before sort:\n");
    printArray(array, length);
    printf("Sorted:\n");
    sort(array, length);
    printArray(array, length);

    // getchar();

    return 0;
}

void swap(int *m, int *n){
    int tmp = *m;
    *m = *n;
    *n = tmp;
}

void sort(int *array, int length){

    for(int i = 0; i < length - 1; i++){
        for(int j = 0; j < length - i - 1; j++){
            if(*(array+j) > *(array+j+1))
                swap((array+j),(array+j+1));
        }
    }
    array = NULL;
}

void printArray(int *array, int length){

    // printf("length: %d\n", length);

    for(int i = 0; i < length; i++)
        printf("%d\n", *(array+i));

    array = NULL;

}
