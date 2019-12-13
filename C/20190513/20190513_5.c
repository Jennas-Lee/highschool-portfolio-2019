#include <stdio.h>

int main() {
	double score1, score2, sum, avg;
	printf("점수 2개를 입력하세요.\n");
	scanf("%lf %lf", &score1, &score2);
	
	sum = score1 + score2;
	avg = sum / 2;\
	
	if(score1<0 || score1>100 || score2<0 || score2>100) {
		printf("잘못 입력하셨습니다.\n");
		printf("프로그램을 종료합니다.");
		return 0;
	}
	
	printf("점수 2개는 %lf, %lf이고, 합계는 %lf, 평균은 %lf입니다.\n", score1, score2, sum, avg);
	
	if(avg >= 50) {
		printf("합격입니다. 축하합니다.\n");
	}
	else if(avg>=40) {
		printf("커트라인입니다.\n");
	}
	else {
		printf("불합격입니다.\n");
	}
	
	printf("프로그램을 종료합니다.");
	return 0;
}
