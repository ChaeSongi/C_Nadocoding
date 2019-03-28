#include <stdio.h>
//선언
void p(int num);

int main(void)

{
	//function
	//계산기

	int num = 2;
	//printf("num은 %d 입니다.\n", num);//2
	// 2+3?
	p(num);
}

// 정의
void p(int num)
{
	printf("num은 %d입니다.\n", num);

}