/*#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int* p, * endp;
	unsigned char image[10][10];

	p = &image[0][0];
	endp = &image[9][9];

	while (p <= endp) {
		*p = rand() % 256;
		p++;

	}
	int i, k;
	for (i = 0; i < 10; i++){
		for (k = 0; i < 10; k++) {
			if (image[i][k] < 128) {
				image[i][k] = 0;
			}
			else {
				image[i][k] = 255;
			}
		}

	}

	for (i = 0; i < 10; i++) {
		for (k = 0; k < 10; k++) {
			printf("%d ", image[i][k]);
		}
		printf("\n");
	}

	
	return 0;
}
*/