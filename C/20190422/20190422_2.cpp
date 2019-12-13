#include <stdio.h>

int main  () {
	
	int num;
	
	printf("값을 입력하세요. : ");
	scanf("%d", &num);
	if(num==100) {
		printf("100입니다.");
	}
	else {
		printf("100이 아닙니다.");
	}
	
	return 0;
}
