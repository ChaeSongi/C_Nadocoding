#include <stdio.h>
#include <time.h>

int main(void)
{
	// ������ ź�ٰ� ���� �л�/�Ϲ������� ����(�Ϲ���: 20��)
	/*int age = 15;
	if (age >= 20)
		printf("�Ϲ��� �Դϴ�.\n");
	else
		printf("�л��Դϴ�.\n");*/


		// �ʵ��л�(8-13)/ ���л�(14-16)/ ����л�(17-19)
		// if/ else if/ else
		/*int age = 29;
		if (age >= 8 && age <= 13)
		{
			printf("�ʵ��л��Դϴ�.\n");
		}
		else if (age >= 14 && age <= 16)
		{
			printf("���л��Դϴ�.\n");
		}
		else if (age >= 17 && age <= 19)
		{
			printf("����л��Դϴ�.\n");
		}
		else
		{
			printf("���߰� �л��� ���̰� �ƴմϴ�.\n");
		}*/

		// 1������ 40������ �ִ� �ݿ��� 1������ 5������ ���� ��ǥ�� �մϴ�.
		/*for (int i = 1; i <= 30; i++)
		{
			if (i >= 6)
			{
				printf("������ �л��� ���� ������. \n");
				break;
			}
			printf("%d�� �л��� ���� ��ǥ �غ� �Ͻÿ�\n", i);
		}*/

		// 1��~30������ �ִ� �ݿ��� 8�� �л��� ���� �Ἦ�̴�.
		// 7���� �����ϰ� 4������ 14������ ���� Ȱ���ϼ���.
		/*for (int i = 1; i <= 30; i++)
		{
			if (i >= 4 && i <= 14)
			{
				if (i == 7)
				{
					printf("%d �� �л��� �Ἦ�Դϴ�.\n", i);
					continue;
				}
				printf("%d�� �л��� ���� ��ǥ �غ� �Ͻÿ�.\n", i);
			}*/

			// ���� ���� ��
			/*srand(time(NULL));
			int i = rand() % 3; //0-2 qksghks
			if (i == 0)
			{
				printf("����\n");
			}
			else if (i == 2)
			{
				printf("����\n");
			}
			else if (i == 2)
			{
				printf("��\n");
			}
			else
			{
				printf("�����\n");
			}*/

			//switch

	//srand(time(NULL));
	//int i = rand() % 3;//0-2��ȯ
	/*int i = 1;
	switch (i)
	{
	case 0:printf("����\n"); break;
	case 1:printf("����\n"); break;
	case 2:printf("��\n"); break;
	default:printf("�����\n"); break;

	}*/
	// ������Ʈ UP&DOWN
	srand(time(NULL));
	int num = rand() % 100 + 1;//1-100 ������ ����
	printf("���� : %d\n", num);
	int answer = 0; //����
	int chance = 5; //��ȸ
	while (chance >0) //1 :�� 0: ����
	{
		printf("���� ��ȸ %d ��° \n", chance--);
		printf("���ڸ� ����������(1~100) : ");
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
			printf("�����Դϴ�.\n\n");
		}
		else
		{
			printf("�� �� ���� ������ �߻��Ͽ����ϴ�.\n\n");
			break;
		}

		if (chance == 0)
		{
			printf("��ȸ�� �� ����ϼ̽��ϴ�.\n\n");
		}

	}

	return 0;
}