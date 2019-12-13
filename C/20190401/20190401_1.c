#include <stdio.h>

int main () {
	//정수, 실수, 문자하나 입출력, 여러 문장 주석, 문자+1 출력 
	int num1, num2;
	double num3, num4;
	char ttt;
	
	printf("영문자 하나를 입력하세요.\n");
	scanf("%c", &ttt);
	printf("입력한 문자는 %c입니다.\n", ttt);
	printf("1을 더해보면 %c입니다.\n", ttt+1);
	printf("2을 더해보면 %c입니다.\n", ttt+2);
	printf("3을 더해보면 %c입니다.\n", ttt+3);
	printf("4을 더해보면 %c입니다.\n", ttt+4);
	printf("5을 더해보면 %c입니다.\n\n", ttt+5);
	
	printf("정수 2개를 입력하세요.\n");
	scanf("%d %d", &num1, &num2);
	printf("입력한 값은 %d, %d이며, 합계는 %d입니다.\n\n", num1, num2, num1+num2) ;
	
	printf("실수 2개를 입력하세요.\n");
	scanf("%lf %lf", &num3, &num4);
	printf("입력한 값은 %lf, %lf이며 합계는 %lf입니다.\n\n", num3, num4, num3+num4);
	
	return 0;
}
