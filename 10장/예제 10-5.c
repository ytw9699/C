#include <stdio.h>

int main(void)
{
	int num;

	printf("1에서 3 사이의 정수 입력: ");
	scanf("%d", &num);

	switch(num)
	{
	case 1://num이 1이면 여기서부터 시작	 
		printf("A1 ");
		printf("A2 ");
	case 2://num이 2이면 여기서부터 시작
		printf("B1 ");
		printf("B2 ");
	case 3://num이 3이면 여기서부터 시작
		printf("C1 ");
		printf("C2 ");
	default://이도 저도 아니면 여기서부터 시작 
		printf("Default! \n");
	}

	return 0;
}
