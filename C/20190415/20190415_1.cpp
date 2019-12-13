#include <stdio.h>

int main () {
	int score, cut = 70;
	printf("점수를 입력하세요.\n");
	scanf("%d", &score);
	
	printf("입력한 점수는 %d점입니다.\n", score);
	if(score >= cut) {
		printf("합격입니다.\n");
		printf("하하핳\n");
	}
	else {
		printf("불합격입니다.\n");
		printf("으휴\n");
	}
	
	printf("끝\n");
	return 0;
}
