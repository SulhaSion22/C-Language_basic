/*#include <stdio.h>

int main(void)
{
	int i;
	int sum=0;
	int grade = 0;
	float average;


	for (i=1; i<=10; i++)
	{
		printf(" %d번째 점수를 입력하세요 : ", i);
		scanf_s("%d", &grade);
		//sum += grade;
		if (grade < 0)
			break;
		sum += grade;

	}
	average = (float)sum / (i-1);
	printf("평균 = %f", average);
	return 0;

}
*/