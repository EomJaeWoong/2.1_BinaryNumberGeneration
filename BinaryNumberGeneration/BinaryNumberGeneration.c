#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int DivideNumber(int iInputNum);

void main()
{
	int iInputNum;

	//���� �Է� ����.
	//��ȿ�� ���� �˻� ��
	//����Լ��� �������� ���Ͽ� ����Ѵ�
	while (1)
	{
		printf("���ڸ� �Է��ϼ��� : ");
		scanf("%d", &iInputNum);

		if (iInputNum <= 0)
		{
			printf("��ȿ�� ���ڰ� �ƴմϴ�.\n\n");
			continue;
		}

		DivideNumber(iInputNum);

		printf("\n\n");
	}
}

//�������� ���� ���
int DivideNumber(int iNum)
{
	if (iNum <= 0)
		return 0;

	DivideNumber(iNum / 2);
	printf("%d", iNum % 2);
}