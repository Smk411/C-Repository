#include <stdio.h>
#include <string.h>
#define _CRT_SECURE_NO_WARNINGS

struct struct1
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
};
void total_sum(struct struct1 x[]);
void linefu(int k);
void average_cal(struct struct1 y[]);
void grade_fuc(struct struct1 z[]);
void sort_func(struct struct1 s[]);

int main() {
	struct struct1 stu1[3];
	memset(stu1, 0, sizeof(stu1));
	int i = 0;

	linefu(35);

	for (i = 0; i <= 2; i++) {
		stu1[i].num = i + 1;
		printf("%d번 이름 입력하시오 : ", stu1[i].num);
		scanf_s("%s", stu1[i].name, 10);
		printf("%d번 국어점수를 입력하시오 : ", stu1[i].num);
		scanf_s("%d", &stu1[i].ko);
		printf("%d번 영어점수를 입력하시오 : ", stu1[i].num);
		scanf_s("%d", &stu1[i].en);
		printf("%d번 수학점수를 입력하시오 : ", stu1[i].num);
		scanf_s("%d", &stu1[i].math);
	}
	i = 0;
	total_sum(stu1);
	average_cal(stu1);
	grade_fuc(stu1);
	sort_func(stu1);
	
	linefu(35);
	
	linefu(45);
	printf("번호 이름 국어 영어 수학 총점 평균 등수\n");
	linefu(45);
	for (i = 0; i <= 2; i++) {
		
		printf("%2d%5s%6d%5d%5d%6d%6.2f%3d\n", stu1[i].num, stu1[i].name, stu1[i].ko, stu1[i].en, stu1[i].math, stu1[i].total, stu1[i].avr, stu1[i].grade);
	}
	linefu(45);
	memset(stu1, 0, sizeof(stu1));
	for (i = 0; i <= 2; i++) {

		printf("%2d%5s%6d%5d%5d%6d%6.2f%3d\n", stu1[i].num, stu1[i].name, stu1[i].ko, stu1[i].en, stu1[i].math, stu1[i].total, stu1[i].avr, stu1[i].grade);
	}
}
void total_sum(struct struct1 x[]) {
	int i = 0;
	for (i = 0; i <= 2; i++) {
		x[i].total = x[i].ko + x[i].en + x[i].math;
	}
}
void average_cal(struct struct1 y[]) {
	int i = 0;
	for (i = 0; i <= 2; i++) {
		y[i].avr = y[i].total / (float)3.0;
	}
}
void linefu(int k) {
	int j = 0;

	for (j = 0; j <= k; j++) {
		printf("-");
	}
	puts("");
}
void grade_fuc(struct struct1 z[]) {
	int i = 0;
	int j = 0;
	for (i = 0; i <= 2; i++) {
		z[i].grade = 1;
		for (j = 0; j <= 2; j++) {
			if (z[i].total < z[j].total) {
				z[i].grade++;
			}
		}
	}
}

void sort_func(struct struct1 s[]) {
	int i = 0;
	int j = 0;
	int tmp = 0;
	float tmp_f = 0;
	char tmp_c[10] = { 0 };

	for (i = 0; i <= 2; i++) {
		for (j = i; j <= 2; j++) {
			if (s[i].total < s[j].total) {
				tmp = s[j].total;
				s[j].total = s[i].total;
				s[i].total = tmp;
				tmp = s[j].grade;
				s[j].grade = s[i].grade;
				s[i].grade = tmp;
				tmp = s[j].num;
				s[j].num = s[i].num;
				s[i].num = tmp;
				tmp = s[j].ko;
				s[j].ko = s[i].ko;
				s[i].ko = tmp;
				tmp = s[j].math;
				s[j].math = s[i].math;
				s[i].math = tmp;
				tmp = s[j].en;
				s[j].en = s[i].en;
				s[i].en = tmp;
				tmp_f = s[j].avr;
				s[j].avr = s[i].avr;
				s[i].avr = tmp_f;

				strcpy_s(tmp_c, 10, s[j].name);
				strcpy_s(s[j].name, 10, s[i].name);
				strcpy_s(s[i].name, 10, tmp_c);


			}

		}
	}

}

