#include <stdlib.h>
#include <stdio.h>

int main(void)
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