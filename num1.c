/*#include <stdio.h>

void get_sum_diff(int x, int y, int* p_sum, int* p_diff);

int main(void) {
	int x, y, sum=0, diff=0;
	int* p_sum = &sum;
	int* p_diff = &diff;

	printf("두 개의 정수를 입력하시오 : ");
	scanf("%d %d", &x, &y);

	get_sum_diff(x, y, &sum, &diff);
	return 0;

}

void get_sum_diff(int x, int y, int* p_sum, int* p_diff) {

	*p_sum = x + y;

	if (x >= y) {
		*p_diff = x - y;
	}
	else {
		*p_diff = y - x;
	}
	
	printf(" 두 수의 합은 %d입니다.\n", *p_sum);
	printf(" 두 수의 차는 %d입니다.\n", *p_diff);

}
*/
