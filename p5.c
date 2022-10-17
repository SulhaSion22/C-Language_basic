#include <stdio.h>

void search(int A[], int size, int num);

int main(void)
{
	int A[10] = { 100, 200, 100, 100, 200, 100, 100, 100, 100, 100 };

	search(A, 10, 200);
	return 0;

}

void search(int A[], int size, int num)
{
	int i;
	for (i = 0; i < size; i++)
	{
		if (A[i] == num)
		{
			printf("%d  ", i);
		}

	}
}