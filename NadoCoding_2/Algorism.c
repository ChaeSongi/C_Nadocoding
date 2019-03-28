#include <stdio.h>


main()
{

	// 나누어 떨어지지 않을 때
	int a, i, j;
	printf("숫자를 입력하세요\n");
	scanf("%d", &a);
	printf("%d는 소수인가요?\n", a);

	i = a - 1;
	j = 2;
	while (1)
	{
		if (j <= i)
		{
			if (a%j == 0)
			{
				printf("소수아님");
				break;
			}
			else
				j++;
		}
		else
		{
			printf("소수");
			break;
		}
	}

}