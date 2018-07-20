#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

#define _CRT_SECURE_NO_WARNINGS

int main(int argc, char* argv[])
{
	int a = 10;
	short b = 20;
	long c = 30;
	long long d = 40;
	
	long c1 = 10l;
	long long d1 = 10ll;

	printf("%d\n", a);
	//短整型 2byte
	printf("%hd\n", b);
	//长整型 4byte
	printf("%ld\n", c);
	//长长整型 8byte
	printf("%lld\n", d);\

	//sizeof(数据类型)  sizeof(变量名)
	unsigned int len = sizeof(int);

	printf("len: %d\n", len);

	system("pause");

	//return EXIT_SUCCESS;
	return 0;
}