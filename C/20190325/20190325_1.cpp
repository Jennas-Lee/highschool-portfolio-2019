#include <stdio.h>

int main () {
	int number1, score=100, number2;
		//정수형 변수 선언 및 사용
		number1 = 150;										//등호 오른쪽에 있는 값을 왼쪽에 대입, 변수명은 한글로 시작할수없음, 숫자로 시작할수없음, main, return으로 만들수없음 
			printf("입력한 숫자는 %d입니다.\n", score); 

		number2 = score + 25;
			printf("입력한 숫자는 %d입니다.\n", number2); 

	double num3, num4;
		//실수형 변수 선언 및 사용(요즘은 float대신 double을 주로 사용)
		num3 = 99.999;
		num4 = 80.123;
			printf("실수1 = %lf, 실수2 = %lf\n", num3, num4);
	
	char c1, c2;
		//문자형 변수 선언 및 사용 
		c1 = 'G';
		c2 = 'B';
			printf("문자 = %c, %c \n", c1, c2);

			
	return 0;
}
