/*#include <stdio.h>
#define NUM 3

struct student {
	int number;
	char name[10];
	double grade;
};



int main(void) {

	struct student list[NUM];

	int i;
	for (i = 0; i < NUM; i++) {
		printf("학번을 입력하시오 : ");
		scanf("%d", &list[i].number);

		printf("이름을 입력하시오 : ");
		scanf("%s", &list[i].name);

		printf("학점을 입력하시오(실수): ");
		scanf("%lf", &list[i].grade);
	}
	printf("===========================\n");
	for (i = 0; i < NUM; i++) {
		
		printf("학번 : %d, 이름 : %s, 학점 : %lf\n", list[i].number, list[i].name, list[i].grade);
		//printf("===========================");

	}
	printf("========================");

	return 0;
}
*/