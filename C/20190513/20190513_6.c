#include <stdio.h>

int main() {
	double score1, score2, score3, score4, sum, avg;
	
	printf("점수 4개를 입력하세요.\n");
	scanf("%lf %lf %lf %lf", &score1, &score2, &score3, &score4);
	
	sum = score1 + score2 + score3 + score4;
	avg = sum / 4;
	
	printf("합계는 %lf입니다.\n", sum);
	printf("평균은 %lf입니다.\n", avg);
	
	if(avg<0 || avg>100) {
		printf("잘못 입력하셨습니다.\n");
		printf("프로그램을 종료합니다.\n");
		return 0;
	}
	else if(avg==100) {
		printf("S입니다.\n");
	}
	else if(avg>=90) {
		printf("A입니다.\n");
	}
	else if(avg>=80) {
		printf("B입니다.\n");
	}
	else if(avg>=70) {
		printf("C입니다.\n");
	}
	else if(avg>=60) {
		printf("D입니다.\n");
	}
	else{
		printf("F입니다.\n");
	}
	
	printf("프로그램을 종료합니다.\n");

	return 0;
}
