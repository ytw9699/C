#include <stdio.h>

int main(void)
{
	int num=10;
	int * ptr;

	ptr=&num;
	printf("포인터 ptr이 가리키는 변수 값: %d \n", *ptr);
	//ptr에 저장된 주소값의 메모리 공간을 참조하라는 뜻 즉 변수 num을 참조하라는 뜻 
	//변수의 이름을 이용해서 직접 접근하는 것이 아니고 포인터 변수를 이용해서 간접적으로
	//접근할때 사영되는 연산자이기 때문에 간접 참조 연산자라고 한다. 
	 printf("num에 저장된 값: %d \n\n", num);

	*ptr=20;//ptr이 가리키는 변수 num 에 20을 저장하라는 의미	 
	printf("포인터 ptr이 가리키는 변수 값: %d \n", *ptr);
	printf("num에 저장된 값: %d \n\n", num);
 
	(*ptr)++;//변수 num의 값을 1증가	 
	printf("포인터 ptr이 가리키는 변수 값: %d \n", *ptr);
	printf("num에 저장된 값: %d \n\n", num);

	return 0;
}
