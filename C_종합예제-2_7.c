#include <stdio.h>
#include <stdlib.h>
void line_p(int a);
int main(){
	int a=123;
	float b=98.67;
	char c='A';

	int* aa=&a;
	float* bb=&b;
	char* cc=&c;

	int** aaa=&aa;
	float** bbb=&bb;
	char** ccc=&cc;

	int*** aaaa=&aaa;
	float*** bbbb=&bbb;
	char*** cccc=&ccc;

	int**** aaaaa=&aaaa;
	float**** bbbbb=&bbbb;
	char**** ccccc=&cccc;

	line_p(50);
	printf("정수형\n");
	line_p(50);
	printf("10진수 주소출력\n");
	line_p(50);
	printf("★a변수값(10진수):%d\n",a);
	printf("★a변수주소(10진수):%d\n",&a);
	line_p(50);
	printf("포인터\n");
	line_p(50);
	printf("★aa포인터에 저장된 주소가 지시하는 값(10진수):%d\n",*aa);
	printf("★aa포인터에 저장된 a변수의 주소값(10진수):%d\n",aa);
	printf("★aa포인터의 주소(10진수):%d\n",&aa);
	line_p(50);
	printf("16진수 주소출력-컴퓨터 메모리 주소는 16진수 표현\n");
	line_p(50);
	printf("★a변수값(10진수):%d\n",a);
	printf("★a변수주소(16진수):%X\n",&a);
	line_p(50);
	printf("포인터\n");
	line_p(50);
	printf("★aa포인터에 저장된 주소가 지시하는 값(10진수):%d\n",*aa);
	printf("★aa포인터에 저장된 a변수의 주소값(16진수):%X\n",aa);
	printf("★aa포인터의 주소(16진수):%X\n",&aa);
	line_p(50);
	printf("이중포인터\n");
	line_p(50);
	printf("★aaa이중포인터에 저장된 주소가 지시하는 값(10진수):%d\n",**aaa);
	printf("★aaa이중포인터에 저장된 주소가 지시하는 값의 주소(16진수):%X\n",&**aaa);
	printf("★aaa이중포인터에 저장된 aa포인터 변수의 주소값(16진수):%X\n",aaa);
	printf("★aaa이중포인터의 주소(16진수):%X\n",&aaa);
	line_p(50);
	printf("삼중포인터\n");
	line_p(50);
	printf("★aaaa삼중포인터에 저장된 주소가 지시하는 값(10진수):%d\n",***aaaa);
	printf("★aaaa삼중포인터에 저장된 주소가 지시하는 값의 주소(16진수):%X\n",&***aaaa);
	printf("★aaaa삼중포인터에 저장된 aaa포인터 변수의 주소값(16진수):%X\n",aaaa);
	printf("★aaaa삼중포인터의 주소(16진수):%X\n",&aaaa);
	line_p(50);
	printf("사중포인터\n");
	line_p(50);
	printf("★aaaaa사중포인터에 저장된 주소가 지시하는 값(10진수):%d\n",****aaaaa);
	printf("★aaaaa사중포인터에 저장된 주소가 지시하는 값의 주소(16진수):%X\n",&****aaaaa);
	printf("★aaaaa사중포인터에 저장된 aaaa포인터 변수의 주소값(16진수):%X\n",aaaaa);
	printf("★aaaaa사중포인터의 주소(16진수):%X\n",&aaaaa);
	line_p(50);
	printf("실수형\n");
	line_p(50);
	printf("10진수 주소출력\n");
	line_p(50);
	printf("★b변수값(10진수):%.2f\n",b);
	printf("★b변수주소(10진수):%d\n",&b);
	line_p(50);
	printf("포인터\n");
	line_p(50);
	printf("★bb포인터에 저장된 주소가 지시하는 값(10진수):%.2f\n",*bb);
	printf("★bb포인터에 저장된 b변수의 주소값(10진수):%d\n",bb);
	printf("★bb포인터의 주소(10진수):%d\n",&bb);
	line_p(50);
	printf("16진수 주소출력-컴퓨터 메모리 주소는 16진수 표현\n");
	line_p(50);
	printf("★b변수값(10진수):%.2f\n",b);
	printf("★b변수주소(16진수):%X\n",&b);
	line_p(50);
	printf("포인터\n");
	line_p(50);
	printf("★bb포인터에 저장된 주소가 지시하는 값(10진수):%.2f\n",*bb);
	printf("★bb포인터에 저장된 b변수의 주소값(16진수):%X\n",bb);
	printf("★bb포인터의 주소(16진수):%X\n",&bb);
	line_p(50);
	printf("이중포인터\n");
	line_p(50);
	printf("★bbb이중포인터에 저장된 주소가 지시하는 값(10진수):%.2f\n",**bbb);
	printf("★bbb이중포인터에 저장된 주소가 지시하는 값의 주소(16진수):%X\n",&**bbb);
	printf("★bbb이중포인터에 저장된 bb포인터 변수의 주소값(16진수):%X\n",bbb);
	printf("★bbb이중포인터의 주소(16진수):%X\n",&bbb);
	line_p(50);
	printf("삼중포인터\n");
	line_p(50);
	printf("★bbbb삼중포인터에 저장된 주소가 지시하는 값(10진수):%.2f\n",***bbbb);
	printf("★bbbb삼중포인터에 저장된 주소가 지시하는 값의 주소(16진수):%X\n",&***bbbb);
	printf("★bbbb삼중포인터에 저장된 bbb포인터 변수의 주소값(16진수):%X\n",bbbb);
	printf("★bbbb삼중포인터의 주소(16진수):%X\n",&bbbb);
	line_p(50);
	printf("사중포인터\n");
	line_p(50);
	printf("★bbbbb사중포인터에 저장된 주소가 지시하는 값(10진수):%.2f\n",****bbbbb);
	printf("★bbbbb사중포인터에 저장된 주소가 지시하는 값의 주소(16진수):%X\n",&****bbbbb);
	printf("★bbbbb사중포인터에 저장된 bbbb포인터 변수의 주소값(16진수):%X\n",bbbbb);
	printf("★bbbbb사중포인터의 주소(16진수):%X\n",&bbbbb);
	line_p(50);
	printf("문자형\n");
	line_p(50);
	printf("10진수 주소출력\n");
	line_p(50);
	printf("★c변수값(10진수):%c\n",c);
	printf("★c변수주소(10진수):%d\n",&c);
	line_p(50);
	printf("포인터\n");
	line_p(50);
	printf("★cc포인터에 저장된 주소가 지시하는 값(10진수):%c\n",*cc);
	printf("★cc포인터에 저장된 b변수의 주소값(10진수):%d\n",cc);
	printf("★cc포인터의 주소(10진수):%d\n",&cc);
	line_p(50);
	printf("16진수 주소출력-컴퓨터 메모리 주소는 16진수 표현\n");
	line_p(50);
	printf("★c변수값(10진수):%c\n",c);
	printf("★c변수주소(16진수):%X\n",&c);
	line_p(50);
	printf("포인터\n");
	line_p(50);
	printf("★cc포인터에 저장된 주소가 지시하는 값(10진수):%c\n",*cc);
	printf("★cc포인터에 저장된 c변수의 주소값(16진수):%X\n",cc);
	printf("★cc포인터의 주소(16진수):%X\n",&cc);
	line_p(50);
	printf("이중포인터\n");
	line_p(50);
	printf("★ccc이중포인터에 저장된 주소가 지시하는 값(10진수):%c\n",**ccc);
	printf("★ccc이중포인터에 저장된 주소가 지시하는 값의 주소(16진수):%X\n",&**ccc);
	printf("★ccc이중포인터에 저장된 cc포인터 변수의 주소값(16진수):%X\n",ccc);
	printf("★ccc이중포인터의 주소(16진수):%X\n",&ccc);
	line_p(50);
	printf("삼중포인터\n");
	line_p(50);
	printf("★cccc삼중포인터에 저장된 주소가 지시하는 값(10진수):%c\n",***cccc);
	printf("★cccc삼중포인터에 저장된 주소가 지시하는 값의 주소(16진수):%X\n",&***cccc);
	printf("★cccc삼중포인터에 저장된 ccc포인터 변수의 주소값(16진수):%X\n",cccc);
	printf("★cccc삼중포인터의 주소(16진수):%X\n",&cccc);
	line_p(50);
	printf("사중포인터\n");
	line_p(50);
	printf("★ccccc사중포인터에 저장된 주소가 지시하는 값(10진수):%c\n",****ccccc);
	printf("★ccccc사중포인터에 저장된 주소가 지시하는 값의 주소(16진수):%X\n",&****ccccc);
	printf("★ccccc사중포인터에 저장된 cccc포인터 변수의 주소값(16진수):%X\n",ccccc);
	printf("★ccccc사중포인터의 주소(16진수):%X\n",&ccccc);
	line_p(50);

	printf("판단1)프로그램을 컴파일 할 때 마다 주소가 변경되었다.:____\n");
	printf("판단2)프로그램을 종료후 다시 불러와 실행하면 주소가 변경 되었다.:____\n");
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
