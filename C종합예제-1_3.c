#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
int total_sum(int ko, int en, int math);
float average_cal(int total);

int main() {
	float avr[3]={0};
	int ko[3]={0},en[3]={0},math[3]={0},i=0,num[3]={0},total[3]={0};
	i = 0;
	printf("--------------------------------\n");
	for (i = 0; i <= 2; i++) {
		num[i]=i+1;
		printf("%d�� ���������� �Է��Ͻÿ� : ",num[i]);
		scanf_s("%d", &ko[i]);
		total[i]=total_sum(ko[i],en[i],math[i]);
		avr[i]=average_cal(total[i]);
		printf("%d�� ���������� �Է��Ͻÿ� : ",num[i]);
		scanf_s("%d",&en[i]);
		total[i]=total_sum(ko[i],en[i],math[i]);
		avr[i]=average_cal(total[i]);
		printf("%d�� ���������� �Է��Ͻÿ� : ",num[i]);
		scanf_s("%d",&math[i]);
		total[i]=total_sum(ko[i],en[i],math[i]);
		avr[i]=average_cal(total[i]);
	}
	printf("--------------------------------\n");

	printf("--------------------------------\n");
	printf("��ȣ ���� ���� ���� ���� ���\n");
	printf("--------------------------------\n");
	for (i = 0;i<=2;i++) {
		printf("%2d%6d%5d%5d%6d%6.2f\n",num[i],ko[i],en[i],math[i],total[i],avr[i]);
	}
	printf("--------------------------------\n");
}
int total_sum(int ko, int en, int math) {
	int total=ko+en+math;
	return(total);
}
float average_cal(int total) {
	float avr=total/3.0;
	return(avr);
}