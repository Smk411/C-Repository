#include <stdio.h>
#include <stdlib.h>
typedef struct calculator {
	float a;
	float b; 
	float result;
	int select;
}CALCULATOR;
CALCULATOR cal;
struct cal *p;

typedef enum select{quit=0,add,subtract,multiple,divide}SELECT;
SELECT sel;
void line_f(int a);
int add_f(struct cal *p);
int subtract_f(struct cal *p);
int multiple_f(struct cal *p);
int divide_f(struct cal *p);
void count_f(int count_add,int count_subtract,int count_multiple,int count_divide);
int main() {
	int cnt_a=0;
	int cnt_s=0;
	int cnt_m=0;
	int cnt_d=0;
	while(1){
		line_f(55);
		printf("연산기호 선택 1.덧셈 2.뺄셈 3.나눗셈 4.곱셈 0.종료 :");
		scanf("%d", &cal.select);
		if(cal.select!=0){
			printf("첫번째 수를 입력: ");
			scanf("%f", &cal.a);
			printf("두번째 수를 입력: ");
			scanf("%f", &cal.b);
			line_f(55);
			line_f(55);
		}
		
		switch (cal.select)
		{
		case add:
			cnt_a=add_f(p); 
			line_f(55);
			count_f(cnt_a,cnt_s,cnt_m,cnt_d);
			break;
		case subtract:
			cnt_s=subtract_f(p); 
			line_f(55);
			
			count_f(cnt_a,cnt_s,cnt_m,cnt_d);
		
			break;
		case multiple:
			cnt_m=multiple_f(p); 
			line_f(55);
			
			count_f(cnt_a,cnt_s,cnt_m,cnt_d);
			
			break;
		case divide:
			cnt_d=divide_f(p); 
			line_f(55);
			
			count_f(cnt_a,cnt_s,cnt_m,cnt_d);
			
			break;
		case quit:
			exit(0);
			break;
		default: 
			printf("연산자를 잘못 입력하였습니다.\n");
			line_f(55);
		}

	}
	line_f(55);
	system("PAUSE");
	return 0;
}
void line_f(int a) {
	int i = 0;
	for (i = 0; i <= a; i++) {
		printf("-");
	}
	puts("");
}

int add_f(struct cal *p) {
	static int count_add=0;
	count_add++;
	cal.result = cal.a + cal.b;
	printf("결과 : %.2f\n", cal.result);
	return count_add;
}

int subtract_f(struct cal *p) {
	static int count_subtract=0;
	count_subtract++;
	cal.result = cal.a - cal.b;
	printf("결과 : %.2f\n", cal.result);
	return count_subtract;
}

int multiple_f(struct cal *p) {
	static int count_multiple=0;
	count_multiple++;
	cal.result = cal.a * cal.b;
	printf("결과 : %.2f\n", cal.result);
	return count_multiple;
}

int divide_f(struct cal *p) {
	static int count_divide=0;
	count_divide++;
	cal.result = cal.a / cal.b;
	printf("결과 : %.2f\n", cal.result);
	return count_divide;
}

void count_f(int count_add,int count_subtract,int count_multiple,int count_divide){

	printf("덧셈연산 : %d회 사용\n",count_add);
	printf("뺄셈연산 : %d회 사용\n",count_subtract);
	printf("곱셈연산 : %d회 사용\n",count_multiple);
	printf("나눗셈연산 : %d회 사용\n",count_divide);
	
}