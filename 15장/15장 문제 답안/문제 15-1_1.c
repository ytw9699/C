#include <stdio.h>

int main(void)
{
	int num;

	printf("음의 정수 입력: ");
	scanf("%d", &num);
	if(num>=0)
	{
		printf("입력에 대한 절대값: %d ", num);
		return 0;
	}

	num= ~num;
	num+=1;
	printf("입력에 대한 절대값: %d \n", num);

	return 0;
}