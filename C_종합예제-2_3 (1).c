#include <stdio.h>
#include <stdlib.h>
#include <memory.h>
#define PI 3.14
typedef struct val {
	int a;
	int b;
	int c;
	int d;
	int half;
	int result_t;
	int result_s;
	int result_c;
}VAL;
void tri_f(VAL *p);
void sqare_f(VAL *p);
void circle_f(VAL *p);
int main(){
	char count=0;
	VAL val;
	VAL *p;
	p=&val;
	
	
	while(1){
		printf("삼각형을 계산하려면(1), 사각형을 계산하려면(2), 원을 계산하려면(3): ");
		scanf("%s",&count);
		if(count=='1'){
			printf("삼각형 밑변과 높이의 길이 입력: ");
			scanf("%d %d",&p->a,&p->b);
			tri_f(p);
			printf("삼각형의 넓이: %d\n",p->result_t);
		}
		else if(count=='2'){
			printf("사각형 밑변과 높이의 길이 입력: ");
			scanf("%d %d",&p->c,&p->d);
			sqare_f(p);
			printf("사각형의 넓이: %d\n",p->result_s);
		}
		else if(count=='3'){
			printf("원의 반지름의 길이 입력: ");
			scanf("%d",&p->half);
			circle_f(p);
			printf("원의 넓이: %d\n",p->result_c);
		}
		else{
			printf("다시입력하시오");
			continue;
		}
		memset(p,0,sizeof(p));
		fflush(stdin);
		
		printf("프로그램 종료(e), 계속하려면 아무 키나 입력");
		scanf("%s",&count);
		if(count=='e'){
			break;
		}

		else {
			continue;
		}

	};
	system("PAUSE");
	return 0;
}
void tri_f(VAL *p){
	p->result_t=((p->a)*(p->b))/2.0;
}
void sqare_f(VAL *p){
	p->result_s=(p->c)*(p->d);
}
void circle_f(VAL *p){
	p->result_c=(p->half)*(p->half)*PI;
}