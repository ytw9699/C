#include <stdio.h>
void ClearReadBuffer(void);

int main(void)
{
	int ch;
	char str[20];

	/* 문자의 입력과 출력 */
	if((ch=getchar())==EOF)
	{
		printf("문자 READ 실패 \n");
		return -1;
	}
	else
	{
		if(putchar(ch)==EOF)
			printf("문자 WRITE 실패 \n");
		putchar('\n');
	}

	/* fflush(stdin) 대행 */
	ClearReadBuffer();

	/* 문자열의 입력과 출력 */
	if(gets(str)==NULL)
	{
		printf("문자열 READ 실패 \n");
		return -1;
	}
	else
	{
		if(puts(str)==EOF)
			printf("문자열 WRITE 실패 \n");
	}

	return 0;
}

void ClearReadBuffer(void)
{
	while(getchar()!='\n');
}
