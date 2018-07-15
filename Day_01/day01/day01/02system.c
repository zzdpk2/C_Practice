#include <stdlib.h>
#include <stdio.h>

int main(void)
{
	int value = 0;
	//cmd命令 calc 计算器 notepad 记事本 mspaint 画图板
	//system("calc");
	value = system("cd D:\\Projects");
	printf("%d\n", value);
	//0表示成功，1表示失败
	getchar();
	return 0;
}