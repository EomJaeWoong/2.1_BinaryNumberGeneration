#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int DivideNumber(int iInputNum);

void main()
{
	int iInputNum;

	//숫자 입력 받음.
	//유효한 범위 검사 후
	//재귀함수로 이진수를 구하여 출력한다
	while (1)
	{
		printf("숫자를 입력하세요 : ");
		scanf("%d", &iInputNum);

		if (iInputNum <= 0)
		{
			printf("유효한 숫자가 아닙니다.\n\n");
			continue;
		}

		DivideNumber(iInputNum);

		printf("\n\n");
	}
}

//이진수를 구해 출력
int DivideNumber(int iNum)
{
	if (iNum <= 0)
		return 0;

	DivideNumber(iNum / 2);
	printf("%d", iNum % 2);
}