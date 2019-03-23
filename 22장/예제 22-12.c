#include <stdio.h>

int main(void)
{
	int num=5;
	int *p1 = &num;
	int *p2 = &num;
	
	*p1 = *p1 + *p2;
	
	printf("%d %d %d", num, *p1, *p2);


	return 0;
}
