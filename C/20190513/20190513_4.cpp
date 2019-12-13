#include <stdio.h>

int main () {
	int score;
	
	printf("점수를 입력하세요. \n");
	scanf("%d", &score);
	
	if(score>0 || score<100){
		if(score>=90) {
			printf("A");
		}
		else if(score>=80) {
			printf("B");
		}
		else if(score>=60) {
			printf("C");
		}
		else if(score>=40) {
			printf("D");
		}
		else if(score>=20) {
			printf("E");
		}
		else {
			printf("F");
		}
	
		printf("학점 입니다.\n");
	}
	
	else{
		printf("잘못 입력하셨습니다.\n");
	}
	
	printf("프로그램을 종료합니다. \n");
	
	return 0;
}
