#include <stdio.h>
#include <time.h>

int main(void)
{
	// 버스를 탄다고 가정 학생/일반인으로 구분(일반인: 20세)
	/*int age = 15;
	if (age >= 20)
		printf("일반인 입니다.\n");
	else
		printf("학생입니다.\n");*/


		// 초등학생(8-13)/ 중학생(14-16)/ 고등학생(17-19)
		// if/ else if/ else
		/*int age = 29;
		if (age >= 8 && age <= 13)
		{
			printf("초등학생입니다.\n");
		}
		else if (age >= 14 && age <= 16)
		{
			printf("중학생입니다.\n");
		}
		else if (age >= 17 && age <= 19)
		{
			printf("고등학생입니다.\n");
		}
		else
		{
			printf("초중고 학생의 나이가 아닙니다.\n");
		}*/

		// 1번부터 40번까지 있는 반에서 1번에서 5번까지 조별 발표를 합니다.
		/*for (int i = 1; i <= 30; i++)
		{
			if (i >= 6)
			{
				printf("나머지 학생은 집에 가세요. \n");
				break;
			}
			printf("%d번 학생은 조별 발표 준비를 하시오\n", i);
		}*/

		// 1번~30번까지 있는 반에서 8번 학생은 오늘 결석이다.
		// 7번을 제외하고 4번부터 14번까지 조별 활동하세요.
		/*for (int i = 1; i <= 30; i++)
		{
			if (i >= 4 && i <= 14)
			{
				if (i == 7)
				{
					printf("%d 번 학생은 결석입니다.\n", i);
					continue;
				}
				printf("%d번 학생은 조별 발표 준비를 하시오.\n", i);
			}*/

			// 가위 바위 보
			/*srand(time(NULL));
			int i = rand() % 3; //0-2 qksghks
			if (i == 0)
			{
				printf("가위\n");
			}
			else if (i == 2)
			{
				printf("바위\n");
			}
			else if (i == 2)
			{
				printf("보\n");
			}
			else
			{
				printf("몰라요\n");
			}*/

			//switch

	//srand(time(NULL));
	//int i = rand() % 3;//0-2반환
	/*int i = 1;
	switch (i)
	{
	case 0:printf("가위\n"); break;
	case 1:printf("바위\n"); break;
	case 2:printf("보\n"); break;
	default:printf("몰라요\n"); break;

	}*/
	// 프로젝트 UP&DOWN
	srand(time(NULL));
	int num = rand() % 100 + 1;//1-100 사이의 숫자
	printf("숫자 : %d\n", num);
	int answer = 0; //정답
	int chance = 5; //기회
	while (chance >0) //1 :참 0: 거짓
	{
		printf("남은 기회 %d 번째 \n", chance--);
		printf("숫자를 맞혀보세요(1~100) : ");
		scanf_s("%d", &answer);

		if (answer > num)
		{
			printf("Down \n\n");
		}
		else if (answer < num)
		{
			printf("UP \n\n");
		}
		else if (answer == num)
		{
			printf("정답입니다.\n\n");
		}
		else
		{
			printf("알 수 없는 오류가 발생하였습니다.\n\n");
			break;
		}

		if (chance == 0)
		{
			printf("기회를 다 사용하셨습니다.\n\n");
		}

	}

	return 0;
}