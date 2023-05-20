#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
void total_sum(int ko[], int en[], int math[], int total[]);
void average_cal(int total[], float avr[]);
void linefu();
int main() {
	float avr[3] = { 0 };
	int ko[3] = { 0 }, en[3] = { 0 }, math[3] = { 0 },  num[3] = { 0 }, total[3] = { 0 };
    int i = 0;
	linefu();
	for (i = 0; i <= 2; i++) {
		num[i] = i + 1;
		printf("%d번 국어점수를 입력하시오 : ", num[i]);
		scanf_s("%d", &ko[i]);
		printf("%d번 영어점수를 입력하시오 : ", num[i]);
		scanf_s("%d", &en[i]);
		printf("%d번 수학점수를 입력하시오 : ", num[i]);
		scanf_s("%d", &math[i]);
	}
	i = 0;
	total_sum(ko, en, math, total);
	average_cal(total, avr);

	linefu();
	linefu();
	printf("번호 국어 영어 수학 총점 평균\n");
	linefu();
	for (i = 0; i <= 2; i++) {
		printf("%2d%6d%5d%5d%6d%6.2f\n", num[i], ko[i], en[i], math[i], total[i], avr[i]);
	}
	linefu();
}
void total_sum(int ko[], int en[], int math[], int total[]) {
	int i =0;
	for (i = 0; i <= 2; i++) {
		total[i] = ko[i] + en[i] + math[i];
	}
}
void average_cal(int totar[],float avr[]) {
	int i=0;
	for (i = 0; i <= 2; i++) {
		avr[i] = totar[i] / (float)3.0;
	}
}
void linefu() {
	printf("--------------------------------\n");
}