#include <stdio.h>
#define SIZE 3


void array_copy(int src[SIZE][SIZE], int dst[SIZE][SIZE]);

int main(void) {
	int src[SIZE][SIZE] = { {100, 30, 67}, {89, 50, 12}, {19, 60, 90} };
	int dst[SIZE][SIZE];

	array_copy(src, dst);

	printf("<원본 2차원 배열>\n");

	int i, k;
	for (i = 0; i < SIZE; i++) {
		for (k = 0; k < SIZE; k++) {
			printf("% d ", src[i][k]);
		}
		printf("\n");
	}


	printf("<복사본 2차원 배열>\n");

	for (i = 0; i < SIZE; i++) {
		for (k = 0; k < SIZE; k++) {
			printf("% d ", dst[i][k]);
		}
		printf("\n");
	}




	return 0;



}

void array_copy(int src[SIZE][SIZE], int dst[SIZE][SIZE]) {
	int* p, *endp;
	int* q, * endq;
	p = &src[0][0];
	endp = &src[SIZE - 1][SIZE - 1];

	q = &dst[0][0];
	endq = &dst[SIZE - 1][SIZE - 1];

	while (p <= endp) {
		while (q <= endq) {

			*q = *p;
			p++;
			q++;
		}
	

	}
}
