/*#include <stdio.h>

struct point {
	int x;
	int y;

};

int equal(struct point* p1, struct point* p2);

int main(void) {

	struct point p1, p2;
	int result;
	printf("2���� ������ �� ��(p1)�� ��ǥ�� �Է��Ͻÿ� : ");
	scanf("%d %d", &p1.x, &p1.y);

	printf("2���� ������ �� ��(p2)�� ��ǥ�� �Է��Ͻÿ� : ");
	scanf("%d %d", &p2.x, &p2.y);

	result = equal(&p1, &p2);

	if (result == 1) {
		printf("(%d, %d) == (%d, %d)", p1.x, p1.y, p2.x, p2.y);
	}
	else if (result == 0) {
		printf("(%d, %d) != (%d, %d)", p1.x, p1.y, p2.x, p2.y);
	}
	else {
		printf("�߸� �Է��ϼ̽��ϴ�.");
	}
	return 0;


}

int equal(struct point* p1, struct point* p2) {
	if (p1->x == p2->x && p1->y == p2->y) {
		return 1;
	}
	else {
		return 0;
	}
}
*/