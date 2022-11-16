#include <stdio.h>
#include <math.h>


struct point {
	int x;
	int y;
};
double dist(struct point, struct point);

int main(void) {
	struct point p1, p2;
	double distance;

	printf("���� ��ǥ�� �Է��Ͻÿ�(x y) : ");
	scanf("%d %d", &p1.x, &p1.y);

	printf("���� ��ǥ�� �Է��Ͻÿ�(x, y) :");
	scanf("%d %d", &p2.x, &p2.y);

	distance = dist(p1, p2);

	printf("�� �� ������ �Ÿ��� %lf�Դϴ�.", distance);
	return 0;






}

double dist(struct point a1, struct point a2) {
	double dis;
	int xsub;
	int ysub;
	xsub = a1.x - a2.x;
	ysub = a1.y - a2.y;

	dis = sqrt(xsub * xsub + ysub * ysub);
	return dis;
}