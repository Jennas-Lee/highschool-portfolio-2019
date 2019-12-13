#include <stdio.h>

int main() {
	int calc;
	double num1, num2;
	
	printf("실수 2개를 입력하세요. \n");
	scanf("%lf %lf", &num1, &num2);
	printf("연산 코드를 입력하세요.(1 : 덧셈, 2 : 뺄셈, 3 : 곱셈, 4 : 나눗셈) \n");
	scanf("%d", &calc);
	
	switch(calc) {
		case 1:
			printf("%lf + %lf는%lf입니다.\n", num1, num2, num1+num2);
			break;
		case 2:
			printf("%lf - %lf는%lf입니다.\n", num1, num2, num1-num2);
			break;
		case 3:
			printf("%lf * %lf는%lf입니다.\n", num1, num2, num1*num2);
			break;
		case 4:
			printf("%lf / %lf는%lf입니다.\n", num1, num2, num1/num2);
			break;
		default:
			printf("연산 코드를 잘못 입력하셨습니다. \n");
	}
	
	printf("프로그램을 종료합니다. \n");
	return 0;
}
