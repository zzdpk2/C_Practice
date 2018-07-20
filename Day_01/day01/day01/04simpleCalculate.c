#include <stdio.h>

int main04(int argc, char* argv[])
{
	//定义整型变量a,b,c
	int a;
	int b;
	int c;

	//__asm
	//{
	//	mov a, 3    //3的值放在a对应的位置
	//	mov b, 4    //4的值放在b对应的位置
	//	mov eax, a  //把a内存的值放在eax寄存器
	//	add eax, b  //eax和b相加,结果放在eax
	//	mov c, eax  //eax的值放在c中		
	//}

	__asm
	{
		mov a, 10
		mov b, 20
		mov eax, a
		add eax, b
		mov c, eax
	}

	printf("%d\n", c); //输出c

	return 0;

}
