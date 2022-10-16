#include <stdio.h>

int main(void)
{
	int x = -20;
	int y = 30;
	int age = 22;

	int absolute_value = (x > 0) ? x : -x;
	int max_value = (x > y) ? x : y;
	int min_value = (x < y) ? x : y;
	(age > 20) ? printf("성인\n") : printf("청소년\n");
	printf("%d %d %d", absolute_value, max_value, min_value);
	return 0;



}