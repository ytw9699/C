
#include <stdio.h>

int main(void)
{
	printf("boy\tapple\n");//수평탭 		 
	printf("mornimk\b\bng\n");//백스페이스 
	printf("up\rdown\n");// 캐리지 리턴	 
	printf("\a \n"); //경고음	 
	printf(" \"Double quotation mark\"  \n");//큰따옴표 
	printf(" \\backslash\\              \n");//역 슬래시 
	printf(" \' \?                      \n");//물음표와 작은따옴표를 출력하는 다른방법 
	printf(" ' ?                        \n");//물음표, 작은따옴표출력 원래 방법 

	return 0;
}
