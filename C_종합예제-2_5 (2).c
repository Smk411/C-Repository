#include <stdio.h>
#include <stdlib.h>
typedef enum rainbow{RAINBOW_RED=1,RAINBOW_ORANGE,RAINBOW_YELLOW,RAINBOW_GREEN,RAINBOW_BLUE,
		RAINBOW_NAVY,RAINBOW_PUPLE}RAINBOW;
RAINBOW rain1;
void color_print(RAINBOW rain1);
int main(){
	int num=0;
	
	printf("���ϴ� ���������� �������ּ���\n");
	printf("������(1),��Ȳ��(2),�����(3),�ʷϻ�(4),�Ķ���(5),����(6),����(7): ");
	scanf("%d",&rain1);
	color_print(rain1);
	system("PAUSE");
	return 0;
}
void color_print(RAINBOW rain1){

	switch(rain1){
		case RAINBOW_RED:printf("������ ���������� �������Դϴ�\n");
			break;
		case RAINBOW_ORANGE:printf("������ ���������� ��Ȳ���Դϴ�\n");
			break;
		case RAINBOW_YELLOW:printf("������ ���������� ������Դϴ�\n");
			break;
		case RAINBOW_GREEN:printf("������ ���������� �ʷϻ��Դϴ�\n");
			break;
		case RAINBOW_BLUE:printf("������ ���������� �Ķ����Դϴ�\n");
			break;
		case RAINBOW_NAVY:printf("������ ���������� �����Դϴ�\n");
			break;
		case RAINBOW_PUPLE:printf("������ ���������� ������Դϴ�\n");
			break;
		default:printf("�߸������ϼ̽��ϴ�\n");
	}

}