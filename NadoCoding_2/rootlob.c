#include <stdio.h>

int main(void)
{
	/*printf("Hello World!");*/

	// ++ �Ի�
	/*int b = 20;
	printf("b �� %d\n", b++);
	printf("b �� %d\n", ++b);
	printf("b�� %d\n", b);*/

	// �ݺ��� 
	// for, while, do while

	//for (����; ����;����)
	/*for (int i = 1; i <= 10; i++)
	{
		printf("Hello World! %d\n ", i);
	}*/

	// while(����) {}
	/*int i = 1;
	while (i <= 10)
	{
		printf("Hello Wolrd %d\n", i++);
		//i++
	}*/

	// do {} while(����);
	/*int i = 3;
	do {
		printf("Hello Wolrd %d\n",i++);
	} while (i<=10);*/

	// 2�� �ݺ���

	/*for (int i = 1; i <= 3; i++)
	{
		printf("ù ��° �ݺ��� : %d\n", i);
		
		for (int j = 1; j <= 5; j++)
		{
			printf(" �� ���� �ݺ��� : %d\n", j);
		}
	}*/

	// ������(���� �� �� �̰� ����ôµ� �Ф�)
	/*for (int i = 2; i <= 9; i++)
	{
		printf("%d�� ���\n", i);
		for (int j = 1; j <= 9; j++)
		{
			printf("%d x %d = %d\n", i, j, i*j);
		}
	}*/

	//*
	 
	for (int i = 0; i < 6; i++)
	{
		printf("%d", i);
		for (int j = 0; j <= i; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
	
}