#include <stdio.h>

int main () {
	int num1, num2, result;
	printf("숫자 2개를 입력하시오.\n");
	scanf("%d %d", &num1, &num2);
	
	result = num1 * num2;
	printf("당신이 입력한 숫자는 %d, %d입니다.\n", num1, num2);
	printf("두 수를 곱하면 %d입니다.\n", result);
	
	
	
	return 0;
}
