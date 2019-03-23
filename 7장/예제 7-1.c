#include <stdio.h>

int Increment(int n)//함수의 이름+입력	 
{//함수의 몸체
	n++;//함수의 기능	 
	return n;//함수의 출력	 
} //함수의 몸체

int main(void)
{
	int num = 2;

	num = Increment(num); //함수의 호출	 
	printf("num: %d \n", num);

	num = Increment(num);
	printf("num: %d \n", num);

	num = Increment(num);
	printf("num: %d \n", num);

	return 0;
}
