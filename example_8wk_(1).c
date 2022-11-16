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

	printf("점의 좌표를 입력하시오(x y) : ");
	scanf("%d %d", &p1.x, &p1.y);

	printf("점의 좌표를 입력하시오(x, y) :");
	scanf("%d %d", &p2.x, &p2.y);

	distance = dist(p1, p2);

	printf("두 점 사이의 거리는 %lf입니다.", distance);
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