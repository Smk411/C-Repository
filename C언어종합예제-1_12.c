#include <stdio.h>
#include <string.h>
#include <process.h>
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

#include "total.h"
#include "grade.h"
#include "line.h"
#include "sort.h"
#include "average.h"


int main() {

	int i=0;

	FILE *input,*output;
	struct struct1 stu1[3];
	struct struct1 *p;
	p = stu1;
	memset(p, 0, sizeof(p));

	if((input=fopen("input.txt","r"))==NULL){
		printf("Can not open file\n");
		exit(0);
	}
	
	for(i=0;i<=2;i++){
		(*(p + i)).num=i+1;
		fscanf(input,"%s%d%d%d",&stu1[i].name,&stu1[i].ko,&stu1[i].en,&stu1[i].math);
		printf("%s %d %d %d\n",(*(p + i)).name,(*(p + i)).ko,(*(p + i)).en,(*(p + i)).math);
		
	}
	i=0;
	fclose(input);
	
	total_sum(stu1);
	average_cal(stu1);
	grade_fuc(stu1);
	sort_func(stu1);
	
	output=fopen("output.txt","w");

	linefu(45);
	printf("번호 이름 국어 영어 수학 총점 평균 등수\n");
	linefu(45);
	for (i = 0; i <= 2; i++) {
		printf("%2d%5s%6d%5d%5d%6d%6.2f%3d\n", (*(p + i)).num, (*(p + i)).name, (*(p + i)).ko, (*(p + i)).en, (*(p + i)).math, (*(p + i)).total, (*(p + i)).avr, (*(p + i)).grade);
	}
	linefu(45);
	
}
