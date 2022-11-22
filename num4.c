/*#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int* p, * endp;
	unsigned int image[10][10];


	p = &image[0][0];
	endp = &image[9][9];

	while (p <= endp) {
		*p = rand() % 256;
		p++;

	}
	p = &image[0][0];

	while (p <= endp) {
		if (*p < 128) {
			*p = 0;
		}
		else {
			*p = 255;
		}
		p++;
	}


	int i, k;

	for (i = 0; i < 10; i++) {
		for (k = 0; k < 10; k++) {
			printf("%d ", image[i][k]);
		}
		printf("\n");
	}


	return 0;
}
*/