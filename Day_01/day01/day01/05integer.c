#include <stdio.h>

int main0501(int argc, char* argv[])
{
	//signed vs unsigned
	unsigned int a = 10;
	//%u输出一个无符号十进制整形数据
	printf("%u\n", a);

	return 0;
}

int main0502(int argc, char* argv[])
{
	//进制
	//二进制0-1 八进制0-7 十六进制0-9 10-15(a-f A-F)

	//int a = 10;
	//printf("%d\n", a);
	////十六进制整型
	//printf("%x\n", a);
	////八进制整型
	//printf("%o\n", a);

	//定义八进制
	int a = 0456;
	//定义十六进制
	int b = 0xabc;

	return 0;
}

