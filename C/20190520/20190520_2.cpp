#include <stdio.h>

int main() {
	int cr;			//cr = classroom
	
	printf("당신은 세명컴고 1학년 몇반인가요? \n");
	scanf("%d", &cr);
	
	if(cr>9 || cr<1) {
		printf("세명컴고는 %d반이 없습니다. \n", cr);
		printf("프로그램을 종료합니다. \n");
		return 0;
	}
	
	switch(cr) {
		case 1:
		case 2:
		case 3:
			printf("%d반은 스마트보안솔루션과입니다. \n", cr);
			break;
		case 4:
		case 5:
			printf("%d반은 디바이스소프트웨어과입니다. \n", cr);
			break;
		case 6:
		case 7:
			printf("%d반은 인공지능소프트웨어과입니다. \n", cr);
		default: 
			printf("%d반은 게임소프트웨어과입니다. \n");
			break;
	}
	
	printf("프로그램을 종료합니다. \n");
	return 0;
}
