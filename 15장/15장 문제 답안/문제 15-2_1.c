#include <stdio.h>

void ShowBitList(unsigned short num);

int main(void)
{
	unsigned short num1=0xffff;
	unsigned short num2=0xff00;

	unsigned short bitMask=0xAAAA;
	
	printf("num1 비트 열: "); ShowBitList(num1);
	printf("num2 비트 열: "); ShowBitList(num2);
	printf("mask 비트 열: ");  ShowBitList(bitMask);

	num1&=bitMask;
	num2&=bitMask;

	printf("num1 마스킹 결과: "); 	ShowBitList(num1);
	printf("num2 마스킹 결과: "); 	ShowBitList(num2);
	return 0;
}

void ShowBitList(unsigned short num)
{
	int intLen, i;
	intLen=sizeof(unsigned short)*8;

	for(i=0; i<intLen; i++)
	{
		if(i!=0 && i%8==0)
			printf(" ");

		printf("%d", num>>((intLen-1)-i) & 1);
	}
	printf("\n");
}
