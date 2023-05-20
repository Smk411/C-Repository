#include <stdio.h>
#include <string.h>
#include <stdlib.h>


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
void total_sum(struct struct1 *p,int count);
void linefu(int k);
void average_cal(struct struct1 *p,int count);
void grade_fuc(struct struct1 *p,int count);
void sort_func(struct struct1 *p,int count);

int main() {
	int i = 0;
	int count=0;
	struct struct1 stu1[100];
	struct struct1 *p;
	p = stu1;
	memset(p, 0, sizeof(p));
	

	linefu(35);

	for (i = 0; i < 100; i++) {
		(*(p + i)).num = i + 1;
		
		printf("%d번 이름 입력하시오 : ", (p+i)->num);
		scanf("%s", &(p+i)->name);
		if(strcmp((p+i)->name,"exit")==0){
			count=i;
			break;
		}
		printf("%d번 국어점수를 입력하시오 : ", (p+i)->num);
		scanf("%d", &(p+i)->ko);
		printf("%d번 영어점수를 입력하시오 : ", (p+i)->num);
		scanf("%d", &(p+i)->en);
		printf("%d번 수학점수를 입력하시오 : ", (p+i)->num);
		scanf("%d", &(p+i)->math);
		
	}
	
	i = 0;
	total_sum(stu1,count);
	
	average_cal(stu1,count);
	grade_fuc(stu1,count);
	sort_func(stu1,count);

	linefu(35);

	linefu(45);
	printf("번호 이름 국어 영어 수학 총점 평균 등수\n");
	linefu(45);
	
	for (i = 0; i < count; i++) {

		printf("%2d%5s%6d%5d%5d%6d%6.2f%3d\n", (p+i)->num, (p+i)->name, (p+i)->ko, (p+i)->en, (p+i)->math, (p+i)->total, (p+i)->avr, (p+i)->grade);
	}
	linefu(45);
	

	return 0;
}
void total_sum(struct struct1 *p,int count) {
	int i = 0;
	//printf("%d받음\n",count);
	for (i = 0; i<count; i++) {
		(p+i)->total = (p+i)->ko + (p+i)->en + (p+i)->math;
	}
}
void average_cal(struct struct1 *p,int count) {
	int i = 0;
	for (i = 0; i<count; i++) {
		(p+i)->avr = (p+i)->total / (float)3.0;
	}
}
void linefu(int k) {
	int j = 0;

	for (j = 0; j <= k; j++) {
		printf("-");
	}
	puts("");
}
void grade_fuc(struct struct1 *p,int count) {
	int i = 0;
	int j = 0;
	for (i = 0; i<count; i++) {
		(p+i)->grade = 1;
		for (j = 0; j<count; j++) {
			if ((p+i)->total < (p+j)->total) {
				(p+i)->grade++;
			}
		}
	}
}

void sort_func(struct struct1 *p,int count) {
	int i = 0;
	int j = 0;
	int tmp = 0;
	float tmp_f = 0;
	char tmp_c[10] = { 0 };

	for (i = 0; i<count; i++) {
		for (j = i; j<count; j++) {
			if ((p+i)->total < (p+j)->total) {
				tmp = (p+j)->total;
				(p+j)->total = (p+i)->total;
				(p+i)->total = tmp;
				tmp = (p+j)->grade;
				(p+j)->grade = (p+i)->grade;
				(p+i)->grade = tmp;
				tmp = (p+j)->num;
				(p+j)->num = (p+i)->num;
				(p+i)->num = tmp;
				tmp = (p+j)->ko;
				(p+j)->ko = (p+i)->ko;
				(p+i)->ko = tmp;
				tmp = (p+j)->math;
				(p+j)->math = (p+i)->math;
				(p+i)->math = tmp;
				tmp = (p+j)->en;
				(p+j)->en = (p+i)->en;
				(p+i)->en = tmp;
				tmp_f = (p+j)->avr;
				(p+j)->avr = (p+i)->avr;
				(p+i)->avr = tmp_f;
				strcpy(tmp_c,(p+j)->name);
				strcpy((p+j)->name,(p+i)->name);
				strcpy((p+i)->name,tmp_c);


			}

		}
	}

}

