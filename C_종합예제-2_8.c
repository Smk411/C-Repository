#include <stdio.h>
#include <stdlib.h>
void line_p(int a);
int main(){
	int a[]={54,34,100,5,66};
	double b[]={105,5,207,506,667};
	char c[]="korea";

	int* aa=a;
	float* bb=b;
	char* cc=c;

	int** aaa=&aa;
	float** bbb=&bb;
	char** ccc=&cc;

	int*** aaaa=&aaa;
	float*** bbbb=&bbb;
	char*** cccc=&ccc;

	int**** aaaaa=&aaaa;
	float**** bbbbb=&bbbb;
	char**** ccccc=&cccc;
	int i=0;
	line_p(50);
	printf("������\n");
	line_p(50);
	for(i=0;i<5;i++){
	printf("��a[%d]���� ������(10����):%d\n",i,a[i]);
	printf("��a[%d]���� ����ũ��:%d Byte\n",i,sizeof(a[i]));
	printf("��a[%d]���� �����ּ�(�������ּ����:16����):%X\n",i,&aa[i]);
	line_p(50);
	}
	printf("�Ǽ���\n");
	line_p(50);
	for(i=0;i<5;i++){
	printf("��b[%d]���� ������(10����):%.2f\n",i,b[i]);
	printf("��b[%d]���� ����ũ��:%d Byte\n",i,sizeof(b[i]));
	printf("��b[%d]���� �����ּ�(�������ּ����:16����):%X\n",i,&bb[i]);
	line_p(50);
	}
	printf("������\n");
	line_p(50);
	printf("��c ������(10����):%s\n",c);
	printf("��c ����ũ��:%d Byte\n",sizeof(c));
	printf("��c �����ּ�(�������ּ����:16����):%X\n",&cc);
	line_p(50);
	

	printf("�Ǵ�1)�迭�� �ּ� ������ ������ ũ�⸸ŭ ���� �Ǿ���.:_X_\n");
	
	system("PAUSE");
	return 0;
}
void line_p(int a){
	int i=0;
	for(i=0;i<a;i++){
		printf("-");
	}
	puts("");
}
