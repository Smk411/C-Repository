#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
int total_sum(int ko, int en, int math);
float average_cal(int total);

int main() {
	float avr = 0;
	int ko = 0, en = 0, math = 0, num = 0, total = 0;
	printf("--------------------------------\n");
	printf("번호를 입력하시오 : ");
	scanf_s("%d", &num);
	printf("국어점수를 입력하시오 : ");
	scanf_s("%d", &ko);
	printf("영어점수를 입력하시오 : ");
	scanf_s("%d", &en);
	printf("수학점수를 입력하시오 : ");
	scanf_s("%d", &math);
	printf("--------------------------------\n");
	total = total_sum(ko, en, math);
	avr = average_cal(total);
	printf("--------------------------------\n");
	printf("번호 국어 영어 수학 총점 평균\n");
	printf("--------------------------------\n");
	printf("%2d%6d%5d%5d%6d%6.2f\n", num, ko, en, math, total, avr);
	printf("--------------------------------\n");

}
int total_sum(int ko, int en, int math) {
	int total = ko + en + math;
	return(total);
}
float average_cal(int total) {
	float avr= total / 3.0;;
	return(avr);
}