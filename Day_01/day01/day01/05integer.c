#include <stdio.h>

int main0501(int argc, char* argv[])
{
	//signed vs unsigned
	unsigned int a = 10;
	//%u���һ���޷���ʮ������������
	printf("%u\n", a);

	return 0;
}

int main0502(int argc, char* argv[])
{
	//����
	//������0-1 �˽���0-7 ʮ������0-9 10-15(a-f A-F)

	//int a = 10;
	//printf("%d\n", a);
	////ʮ����������
	//printf("%x\n", a);
	////�˽�������
	//printf("%o\n", a);

	//����˽���
	int a = 0456;
	//����ʮ������
	int b = 0xabc;

	return 0;
}

