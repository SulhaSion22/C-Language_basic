/*#include <stdio.h>

double f(double k);
double formula(double(*pf)(double), int n);
int main(void)
{
	int n;
	double result;
	printf("���� n�� �Է��Ͻÿ� : ");
	scanf("%d", &n);
	result=formula(f, n);
	printf("%f\n", result);
	return 0;

}
double f(double k)
{
	return 1.0 / k;
}
double formula(double(*pf)(double), int n)
{
	double result = 0.0;
	for (int i = 1;i <= n; i++)
	{
		result += pf(n) * pf(n) + pf(n) + 1;
	}
	return result;
}
*/