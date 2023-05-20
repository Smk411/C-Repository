#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define _CRT_SECURE_NO_WARNINGS
void total_sum(int* ko, int* en, int* math, int* total);
void linefu(int k);
void average_cal(int *total, float *avr);
void grade_fuc(int *total, int *grade);
void change_fuc(int *a, int *b);
void change_fuc_f(float *f1,float *f2);
void change_fuc_c(char (*name1)[10],char (*name2)[10]);
void sort_func(int *total, int *grade, int *num, int *ko, int *math, int *en, float *avr, char (*name)[10]);

int main() {

float *avr;
int ko[3] = { 0 }, en[3] = { 0 }, math[3] = { 0 }, *grade, num[3] = { 0 }, *total;
char name[3][10] = { 0 };
int *pk=ko;
int *pe=en;
int *pm=math;
int *pn=num;
int i = 0;
int num_s=3;
char *p_name[3]={name[0],name[1],name[2]};
linefu(35);
grade=(int*)malloc(sizeof(int)*num_s);
total=(int*)malloc(sizeof(int)*num_s);
avr=(float*)malloc(sizeof(int)*num_s);
for (i = 0; i <= 2; i++) {
	num[i] = i + 1;
	printf("%d번 이름 입력하시오 : ", (*(pn+i)));
	scanf("%s", (*(p_name+i)));
	printf("%d번 국어점수를 입력하시오 : ", (*(pn+i)));
	scanf("%d", &(*(pk+i)));
	printf("%d번 영어점수를 입력하시오 : ", (*(pn+i)));
	scanf("%d", &(*(pe+i)));
	printf("%d번 수학점수를 입력하시오 : ", (*(pn+i)));
	scanf("%d", &(*(pm+i)));
}
i = 0;
total_sum(ko, en, math, total);
average_cal(total, avr);
grade_fuc(total, grade);
sort_func(total, grade, num, ko, math, en, avr, name);

linefu(35);

linefu(45);
printf("번호 이름 국어 영어 수학 총점 평균 등수\n");
linefu(45);
for (i = 0; i <= 2; i++) {
	printf("%2d%5s%6d%5d%5d%6d%6.2f%3d\n", *(pn+i), *(p_name+i), *(pk+i), *(pe+i), *(pm+i), *(total+i), *(avr+i), *(grade+i));
}
linefu(45);

free(grade);
free(total);
free(avr);

return 0;
}
void total_sum(int* ko, int* en, int* math, int* total) {
int i = 0;
for (i = 0; i <= 2; i++) {
	*(total+i) = *(ko+i) + *(en+i) + *(math+i);
	}
}
void average_cal(int* totar, float* avr) {
int i = 0;
for (i = 0; i <= 2; i++) {
	*(avr+i) = *(totar+i) / (float)3.0;
	}
}
void linefu(int k) {
int j = 0;

for (j = 0; j <= k; j++) {
	printf("-");
	}
puts("");
}
void grade_fuc(int* total, int* grade) {
int i = 0;
int j = 0;
for (i = 0; i <= 2; i++) {
	*(grade+i) = 1;
	for (j = 0; j <= 2; j++) {
		if (*(total+i) < *(total+j)) {
			*(grade+i)+=1;
			}
		}
	}
}


void sort_func(int* total, int* grade, int* num, int* ko, int* math, int* en, float* avr, char *name) {
int i=0;
int j=0;

for(i=0;i<3;i++){
	for(j=0;j<3;j++){
		if(*(total+i)<*(total+j)){
			change_fuc(total+i,total+j);
			change_fuc(ko+i,ko+j);
			change_fuc(en+i,en+j);
			change_fuc(math+i,math+j);
			change_fuc(grade+i,grade+j);
			change_fuc_f(avr+i,avr+j);
			change_fuc_c(&name+i,&name+j);
			}
		}
	}

}

void change_fuc(int *a, int *b){
	int tmp=0;
	tmp=*b;
	*b=*a;
	*a=tmp;

}

void change_fuc_f(float *f1,float *f2){
	float tmp_f=0;
	tmp_f=*f2;
	*f2=*f1;
	*f1=tmp_f;

}

void change_fuc_c(char **name1,char **name2){
	char *tmp_c=NULL;

	tmp_c=*name1;
	*name1=*name2;
	*name2=tmp_c;


}