#include <stdio.h>
#include <stdlib.h>

#define _CRT_SECURE_NO_WARNINGS;

int main(int argc, char const *argv[])
{
	int targetArray[10] = { 0 };
	int length = sizeof(targetArray) / sizeof(targetArray[0]);
	int temp = 0;

	printf("Please enter the value of targetArray: \n");
	for (int i = 0; i < length; i++)
		scanf("%d", &targetArray[i]);

	for (int i = 0; i < (length / 2); i++) {
		temp = targetArray[i];
		targetArray[i] = targetArray[length - 1 - i];
		targetArray[length - 1 - i] = temp;
	}

	printf("Reversed Array: \n");
	for (int i = 0; i < length; i++)
		printf("%d\n", targetArray[i]);

	system("pause");

	return 0;
}
