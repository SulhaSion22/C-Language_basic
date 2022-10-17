#include <stdio.h>
#define SIZE 5

int get_array_avg(int a[], int b); //���� �迭�� �迭 ���� �Է� ����
void print_array(int values[], int n);




int main(void)
{
	
	int data[SIZE] = { 1,2,3,4,5 };
	double result;

	result = get_array_avg(data, SIZE);
	printf(" �迭 ���ҵ��� ��� = %f\n", result);
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

