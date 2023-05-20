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
	printf("정수형\n");
	line_p(50);
	for(i=0;i<5;i++){
	printf("★a[%d]번방 변수값(10진수):%d\n",i,a[i]);
	printf("★a[%d]번방 변수크기:%d Byte\n",i,sizeof(a[i]));
	printf("★a[%d]번방 변수주소(포인터주소출력:16진수):%X\n",i,&aa[i]);
	line_p(50);
	}
	printf("실수형\n");
	line_p(50);
	for(i=0;i<5;i++){
	printf("★b[%d]번방 변수값(10진수):%.2f\n",i,b[i]);
	printf("★b[%d]번방 변수크기:%d Byte\n",i,sizeof(b[i]));
	printf("★b[%d]번방 변수주소(포인터주소출력:16진수):%X\n",i,&bb[i]);
	line_p(50);
	}
	printf("문자형\n");
	line_p(50);
	printf("★c 변수값(10진수):%s\n",c);
	printf("★c 변수크기:%d Byte\n",sizeof(c));
	printf("★c 변수주소(포인터주소출력:16진수):%X\n",&cc);
	line_p(50);
	

	printf("판단1)배열의 주소 증가는 변수형 크기만큼 증가 되었다.:_X_\n");
	
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
