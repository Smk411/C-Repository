#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
int main() {
	float avr = 0;
	int ko=0,en=0,math=0,num = 0,total=0;
	printf("--------------------------------\n");
	printf("��ȣ�� �Է��Ͻÿ� : ");
	scanf_s("%d", &num);
	printf("���������� �Է��Ͻÿ� : ");
	scanf_s("%d", &ko);
	printf("���������� �Է��Ͻÿ� : ");
	scanf_s("%d", &en);
	printf("���������� �Է��Ͻÿ� : ");
	scanf_s("%d", &math);
	printf("--------------------------------\n");
	total = ko + math + en;
	avr = total / 3.0;
	printf("--------------------------------\n");
	printf("��ȣ ���� ���� ���� ���� ���\n");
	printf("--------------------------------\n");
	printf("%2d%6d%5d%5d%6d%6.2f\n", num, ko, en, math, total, avr);
	printf("--------------------------------\n");

}