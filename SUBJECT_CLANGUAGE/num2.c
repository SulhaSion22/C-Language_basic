#include <stdio.h>


void delete_space(char* s);



int main(void) {


	int i;
	char sent[50];
	printf("���ڿ��� �Է��Ͻÿ� : ");
	
	gets_s(sent, 50);

	delete_space(sent);


	


	return 0;

}

void delete_space(char* s) {

	int i;

	for (i = 0; s[i]!='\0'; i++) {

		if (s[i]!=' '){
			printf("%c", s[i]);
			



		}
	}


}
