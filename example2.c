/*#include <stdio.h>

void array_copy(int*A, int* B, int size);
void array_print(int* A, int* B, int size);



int main(void) {
	
	int A[10] = { 1,2,3 };
	int B[10] = { 0 };

	array_copy(A, B, 10); //A[10]�̶�� �Լ� �Ű������� ������ ����(B[10]��������)
	array_print(A, B, 10);

	return 0;
	
}



void array_copy(int*A, int* B, int size) {
	
	int i;
	for (i = 0; i < size; i++) {
		B[i] = A[i];
	}
}


void array_print(int* A, int* B, int size) {
	int i;


	for (i = 0; i < size; i++) { 
		printf("%d ", A[i]);
	}
	printf("\n");

	for (i = 0; i < size; i++) {
		printf("%d ", B[i]);
	}
}

*/