#include <stdio.h>

int main(void)
{
	int n1 = +2147483647;
	int n2 = -2147483646;

	printf("오버플로우 발생 전: %d \n", n1);
	n1 = n1+100;  // 오버플로우 발생 - 표현 가능한 최고 값을 위로 초과한 상황

	printf("오버플로우 발생 후: %d \n\n", n1);

	printf("언더플로우 발생 전: %d \n", n2);
	n2 = n2-100;  // 언더플로우 발생 -표현 가능한 최저 값을 아래로 초과한 상황

	printf("언더플로우 발생 후: %d \n", n2);
		
	return 0;
}
