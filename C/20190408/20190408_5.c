#include <stdio.h>

int main () {
	int score; //if~else문 
	
	printf("점수를 입력하세요. \n");
	scanf("%d", &score);
	
	if(score>=80) {
		printf("합격입니다. \n");
		printf("HAHAHA \n");
	}
	
	else{
		printf("불합격입니다. \n");
		printf("TT \n");
	}
	
	printf("프로그램을 종료합니다. \n");
	
	return 0;
}
