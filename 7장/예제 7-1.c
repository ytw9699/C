#include <stdio.h>

int Increment(int n)//�Լ��� �̸�+�Է�	 
{//�Լ��� ��ü
	n++;//�Լ��� ���	 
	return n;//�Լ��� ���	 
} //�Լ��� ��ü

int main(void)
{
	int num = 2;

	num = Increment(num); //�Լ��� ȣ��	 
	printf("num: %d \n", num);

	num = Increment(num);
	printf("num: %d \n", num);

	num = Increment(num);
	printf("num: %d \n", num);

	return 0;
}
