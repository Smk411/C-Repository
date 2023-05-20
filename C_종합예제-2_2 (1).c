#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void line_f(int a);
void cal_f(float *p1, float *p2, float *result);

int main() {
	float a = 0,b = 0;
	float result = 0;
	float *p1=&a;
	float *p2=&b;
	line_f(34);
	printf("첫번째 수를 입력: ");
	scanf("%f", &a);
	printf("두번째 수를 입력: ");
	scanf("%f", &b);
	line_f(34);
	line_f(34);
	cal_f(p1, p2,&result);
	printf("결과 : %.5f\n", sqrt(result));
	line_f(34);
	
	system("PAUSE");
	return 0;
}
void line_f(int a) {
	int i = 0;
	for (i = 0; i <= a; i++) {
		printf("-");
	}
	puts("");
}

void cal_f(float *p1, float *p2,float *result) {
	*result = pow(*p1, 2) + pow(*p2, 2);
	
}
