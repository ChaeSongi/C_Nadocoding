#include <stdio.h>


main()
{

	// ������ �������� ���� ��
	int a, i, j;
	printf("���ڸ� �Է��ϼ���\n");
	scanf("%d", &a);
	printf("%d�� �Ҽ��ΰ���?\n", a);

	i = a - 1;
	j = 2;
	while (1)
	{
		if (j <= i)
		{
			if (a%j == 0)
			{
				printf("�Ҽ��ƴ�");
				break;
			}
			else
				j++;
		}
		else
		{
			printf("�Ҽ�");
			break;
		}
	}

}