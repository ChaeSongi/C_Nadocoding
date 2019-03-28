#include <stdio.h>

int main(void)
{
	/*printf("Hello World!");*/

	// ++ 뿔뿔
	/*int b = 20;
	printf("b 는 %d\n", b++);
	printf("b 는 %d\n", ++b);
	printf("b는 %d\n", b);*/

	// 반복문 
	// for, while, do while

	//for (선언; 조건;증감)
	/*for (int i = 1; i <= 10; i++)
	{
		printf("Hello World! %d\n ", i);
	}*/

	// while(조건) {}
	/*int i = 1;
	while (i <= 10)
	{
		printf("Hello Wolrd %d\n", i++);
		//i++
	}*/

	// do {} while(조건);
	/*int i = 3;
	do {
		printf("Hello Wolrd %d\n",i++);
	} while (i<=10);*/

	// 2중 반복문

	/*for (int i = 1; i <= 3; i++)
	{
		printf("첫 번째 반복문 : %d\n", i);
		
		for (int j = 1; j <= 5; j++)
		{
			printf(" 두 번쨰 반복문 : %d\n", j);
		}
	}*/

	// 구구단(면접 볼 떄 이거 물어봤는데 ㅠㅠ)
	/*for (int i = 2; i <= 9; i++)
	{
		printf("%d단 계산\n", i);
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