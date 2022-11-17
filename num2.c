#include <stdio.h>


void delete_space(char* s);

int main(void) {


	int i;
	char sent[50];
	char* p = &sent;
	printf("문자열을 입력하시오 : ");
	//scanf("%s", &sent);
	gets_s(sent, 50);

	delete_space(&sent);

	for (i = 0; i < 50; i++) {
		while (sent[i] != '\0')
		{
			printf("%c", sent[i]);
		}

	}
	


	return 0;

}

void delete_space(char* s) {

	int i;
	for (i = 0; i < 50; i++) {
		if (s[i] = ' ') {
			while (i < 50) {
				s[i] = s[i + 1];
			}
		}
	}


}