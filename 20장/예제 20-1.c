#include <stdio.h>

void ArrPrintf(int arg[]);

int main(void)
{
	int arr[8]={1, 2, 3,4};
	ArrPrintf(arr);

	return 0;
}

void ArrPrintf(int arg[])
{
printf("%d", sizeof(arg));
printf("%d", sizeof(int));

}
