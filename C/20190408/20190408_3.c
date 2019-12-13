#include <stdio.h>

int main () {
	int score; // 실습예제1 
	
	printf("점수를 입력하세요. \n");
	scanf("%d", &score);
	
	if(score>=60) {
		printf("합격입니다. \n");
	}
	
	printf("프로그램을 종료합니다. \n");
	
	return 0;
}
