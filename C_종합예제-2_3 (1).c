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
		printf("�ﰢ���� ����Ϸ���(1), �簢���� ����Ϸ���(2), ���� ����Ϸ���(3): ");
		scanf("%s",&count);
		if(count=='1'){
			printf("�ﰢ�� �غ��� ������ ���� �Է�: ");
			scanf("%d %d",&p->a,&p->b);
			tri_f(p);
			printf("�ﰢ���� ����: %d\n",p->result_t);
		}
		else if(count=='2'){
			printf("�簢�� �غ��� ������ ���� �Է�: ");
			scanf("%d %d",&p->c,&p->d);
			sqare_f(p);
			printf("�簢���� ����: %d\n",p->result_s);
		}
		else if(count=='3'){
			printf("���� �������� ���� �Է�: ");
			scanf("%d",&p->half);
			circle_f(p);
			printf("���� ����: %d\n",p->result_c);
		}
		else{
			printf("�ٽ��Է��Ͻÿ�");
			continue;
		}
		memset(p,0,sizeof(p));
		fflush(stdin);
		
		printf("���α׷� ����(e), ����Ϸ��� �ƹ� Ű�� �Է�");
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