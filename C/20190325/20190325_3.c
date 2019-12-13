#include <stdio.h>

int main () {
	//표준 정수 입력
	int score_math, score_english;
	double num1;
	printf("수학,영어 점수를 입력하세요.\n");
	scanf("%d %d", &score_math, &score_english);										//scanf 안에는 ,를 쓰지 않음. 
	printf("당신의 수학 점수는 %d, 영어 점수는 %d점입니다.\n", score_math, score_english);
	printf("총 합계는 %d점입니다.\n\n\n", score_math + score_english);
	
	printf("실수를 입력하세요.\n");
	scanf("%lf", &num1);
	printf("당신이 입력한 실수는 %lf입니다.", num1);
	
	return 0;
}
