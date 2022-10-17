#include <stdio.h>
#define SIZE 5

int get_array_avg(int a[], int b); //정수 배열과 배열 길이 입력 받음
void print_array(int values[], int n);




int main(void)
{
	
	int data[SIZE] = { 1,2,3,4,5 };
	double result;

	result = get_array_avg(data, SIZE);
	printf(" 배열 원소들의 평균 = %f\n", result);
	print_array(data, SIZE);

	return 0;
}




int get_array_avg(int a[], int b)
{
	int i;
	int sum=0;
	for (i = 0; i < b; i++)
	{
		sum += a[i];

	}

	return sum / b;
}



void print_array(int values[], int n)
{
	int i;
	for (i = 0; i < n; i++)
	{
		printf("%d ", values[i]);
	}
}

