#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable : 4996)
typedef struct grade
{
	float avr;
	int sort;
	int ko;
	int en;
	int math;
	int grade;
	int num;
	int total;
	char name[10];
} GRADE;
void total_sum(GRADE *p, int count);
void linefu(int k);
void average_cal(GRADE *p, int count);
void grade_fuc(GRADE *p, int count);
void sort_func(GRADE *p, int count);
int main() {
	int i = 0;
	int s_num=0;
	int count = 0;
	GRADE *p=0;
	linefu(35);
	do
	{
		printf("성적처리 인원수 입력(최소 2명~최대 200명) : ");
		scanf("%d", &s_num);
		if (s_num >= 2 && s_num<=200) {
			break;
		}
		else {
			printf("다시입력하세요\n");
			continue;
		}
	} while (1);
	p = (GRADE*)malloc(sizeof(GRADE) *s_num);
	memset(p, 0, sizeof(p));
	linefu(35);
	for (i = 0; i < s_num; i++) {
		(p + i)->num = i + 1;
		printf("%d번 이름 입력하시오 : ",(p + i)->num);
		scanf("%s", &(p + i)->name);
		if (strcmp((p + i)->name, "exit") == 0) {
			count = i;
			break;
		}
		printf("%d번 국어점수를 입력하시오 : ", (p + i)->num);
		scanf("%d", &(p + i)->ko);
		printf("%d번 영어점수를 입력하시오 : ", (p + i)->num);
		scanf("%d", &(p + i)->en);
		printf("%d번 수학점수를 입력하시오 : ", (p + i)->num);
		scanf("%d", &(p + i)->math);
	}
	s_num=0;
	i = 0;
	total_sum(p, count);
	average_cal(p, count);
	grade_fuc(p, count);
	sort_func(p, count);
	linefu(35);
	linefu(45);
	printf("번호 이름 국어 영어 수학 총점 평균 등수\n");
	linefu(45);
	for (i = 0; i < count; i++) {
		printf("%2d%5s%6d%5d%5d%6d%6.2f%3d\n", (p + i)->num, (p + i)->name, (p + i)->ko, (p + i)->en, (p + i)->math, (p + i)->total, (p + i)->avr, (p + i)->grade);
	}
	linefu(45);
	free(p);
	return 0;
}
void total_sum(GRADE *p, int count) {
	int i = 0;
	for (i = 0; i < count; i++) {
		(p+i)->total = (p + i)->ko + (p + i)->en + (p + i)->math;
	}
}
void average_cal(GRADE *p, int count) {
	int i = 0;
	for (i = 0; i < count; i++) {
		(p + i)->avr = (p + i)->total / (float)3.0;
	}
}
void linefu(int k) {
	int j = 0;
	for (j = 0; j <= k; j++) {
		printf("-");
	}
	puts("");
}
void grade_fuc(GRADE *p, int count) {
	int i = 0;
	int j = 0;
	for (i = 0; i < count; i++) {
		(p + i)->grade = 1;
		for (j = 0; j < count; j++) {
			if ((p + i)->total < (p + j)->total) {
				(p + i)->grade++;
			}
		}
	}
}

void sort_func(GRADE *p, int count) {
	int i = 0;
	int j = 0;
	int tmp = 0;
	float tmp_f = 0;
	char tmp_c[10] = { 0 };

	for (i = 0; i < count; i++) {
		for (j = i; j < count; j++) {
			if ((p + i)->total < (p + j)->total) {
				tmp = (p + j)->total;
				(p + j)->total = (p + i)->total;
				(p + i)->total = tmp;
				tmp = (p + j)->grade;
				(p + j)->grade = (p + i)->grade;
				(p + i)->grade = tmp;
				tmp = (p + j)->num;
				(p + j)->num = (p + i)->num;
				(p + i)->num = tmp;
				tmp = (p + j)->ko;
				(p + j)->ko = (p + i)->ko;
				(p + i)->ko = tmp;
				tmp = (p + j)->math;
				(p + j)->math = (p + i)->math;
				(p + i)->math = tmp;
				tmp = (p + j)->en;
				(p + j)->en = (p + i)->en;
				(p + i)->en = tmp;
				tmp_f = (p + j)->avr;
				(p + j)->avr = (p + i)->avr;
				(p + i)->avr = tmp_f;
				strcpy(tmp_c, (p + j)->name);
				strcpy((p + j)->name, (p + i)->name);
				strcpy((p + i)->name, tmp_c);
			}
		}
	}
}