#include <stdio.h>

int main () {
	int calc;
	double num1, num2;
	
	printf("연산 코드를 입력하세요.\n");
	scanf("%d", &calc);
	
	if(calc>4 || calc<0) {
		printf("잘못 입력하셨습니다. 프로그램을 종료합니다.\n");
		return 0;
	}
	
	printf("실수 2개를 입력하세요.\n");
	scanf("%lf %lf", &num1, &num2);
	
	switch(calc) {
		case 1:
			printf("%lf + %lf는 %lf입니다.\n", num1, num2, num1+num2);
			break;
		case 2:
			printf("%lf - %lf는 %lf입니다.\n", num1, num2, num1-num2);
			break;
		case 3:
			printf("%lf * %lf는 %lf입니다.\n", num1, num2, num1*num2);
			break;
		case 4:			//default로 해줘도 무방함. 
			printf("%lf / %lf는 %lf입니다.\n", num1, num2, num1/num2);
			break;
	}
	
	
	return 0;
}
