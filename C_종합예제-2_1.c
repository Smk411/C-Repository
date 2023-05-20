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
	printf("첫번째 수를 입력: ");
	scanf("%f", &a);
	printf("두번째 수를 입력: ");
	scanf("%f", &b);
	fflush(stdin);
	printf("( + , - , * , / )이중 하나를 입력: ");
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
		printf("연산자를 잘못 입력하였습니다.");
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
	printf("결과 : %.5f\n", result);
}

void subtract_f(float a, float b) {
	float result = 0;
	result = a - b;
	printf("결과 : %.5f\n", result);
}

void multiple_f(float a, float b) {
	float result = 0;
	result = a * b;
	printf("결과 : %.5f\n", result);
}

void divide_f(float a, float b) {
	float result = 0;
	result = a / b;
	printf("결과 : %.5f\n", result);
}