#include <stdlib.h>
#include <stdio.h>

int main02(int argc, char* argv[])
{
	int value = 0;
	//cmd���� calc ������ notepad ���±� mspaint ��ͼ��
	//system("calc");
	value = system("cd D:\\Projects");
	printf("%d\n", value);
	//0��ʾ�ɹ���1��ʾʧ��
	getchar();
	return 0;
}