#include <stdio.h>
#include <stdlib.h>
void line_f(int a);
void add_f(float a, float b);
void subtract_f(float a, float b);
void multiple_f(float a, float b);
void divide_f(float a, float b);
int main() {
	float a = 0, b = 0;
	char count=0;
	line_f(34);
	printf("ù��° ���� �Է�: ");
	scanf("%f", &a);
	printf("�ι�° ���� �Է�: ");
	scanf("%f", &b);
	fflush(stdin);
	printf("( + , - , * , / )���� �ϳ��� �Է�: ");
	scanf("%s", count);
	line_f(34);
	line_f(34);
	switch (count)
	{
	case '+':
		add_f(a, b); 
		break;
	case '-':
		subtract_f(a, b); 
		break;
	case '*':
		multiple_f(a, b); 
		break;
	case '/':
		divide_f(a, b); 
		break;
	default: 
		printf("�����ڸ� �߸� �Է��Ͽ����ϴ�.");
		break;
	}
	line_f(34);
	return 0;
}
void line_f(int a) {
	int i = 0;
	for (i = 0; i <= a; i++) {
		printf("-");
	}
	puts("");
}

void add_f(float a, float b) {
	float result = 0;
	result = a + b;
	printf("��� : %.5f\n", result);
}

void subtract_f(float a, float b) {
	float result = 0;
	result = a - b;
	printf("��� : %.5f\n", result);
}

void multiple_f(float a, float b) {
	float result = 0;
	result = a * b;
	printf("��� : %.5f\n", result);
}

void divide_f(float a, float b) {
	float result = 0;
	result = a / b;
	printf("��� : %.5f\n", result);
}