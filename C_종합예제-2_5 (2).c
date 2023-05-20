#include <stdio.h>
#include <stdlib.h>
typedef enum rainbow{RAINBOW_RED=1,RAINBOW_ORANGE,RAINBOW_YELLOW,RAINBOW_GREEN,RAINBOW_BLUE,
		RAINBOW_NAVY,RAINBOW_PUPLE}RAINBOW;
RAINBOW rain1;
void color_print(RAINBOW rain1);
int main(){
	int num=0;
	
	printf("원하는 무지개색을 선택해주세요\n");
	printf("빨간색(1),주황색(2),노란색(3),초록색(4),파란색(5),남색(6),보라(7): ");
	scanf("%d",&rain1);
	color_print(rain1);
	system("PAUSE");
	return 0;
}
void color_print(RAINBOW rain1){

	switch(rain1){
		case RAINBOW_RED:printf("선택한 무지개색은 빨강색입니다\n");
			break;
		case RAINBOW_ORANGE:printf("선택한 무지개색은 주황색입니다\n");
			break;
		case RAINBOW_YELLOW:printf("선택한 무지개색은 노랑색입니다\n");
			break;
		case RAINBOW_GREEN:printf("선택한 무지개색은 초록색입니다\n");
			break;
		case RAINBOW_BLUE:printf("선택한 무지개색은 파란색입니다\n");
			break;
		case RAINBOW_NAVY:printf("선택한 무지개색은 남색입니다\n");
			break;
		case RAINBOW_PUPLE:printf("선택한 무지개색은 보라색입니다\n");
			break;
		default:printf("잘못선택하셨습니다\n");
	}

}