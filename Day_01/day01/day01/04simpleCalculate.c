#include <stdio.h>

int main04(int argc, char* argv[])
{
	//�������ͱ���a,b,c
	int a;
	int b;
	int c;

	//__asm
	//{
	//	mov a, 3    //3��ֵ����a��Ӧ��λ��
	//	mov b, 4    //4��ֵ����b��Ӧ��λ��
	//	mov eax, a  //��a�ڴ��ֵ����eax�Ĵ���
	//	add eax, b  //eax��b���,�������eax
	//	mov c, eax  //eax��ֵ����c��		
	//}

	__asm
	{
		mov a, 10
		mov b, 20
		mov eax, a
		add eax, b
		mov c, eax
	}

	printf("%d\n", c); //���c

	return 0;

}
