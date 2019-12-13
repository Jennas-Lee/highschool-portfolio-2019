#include <stdio.h>

int func(int num1, int num2) {
	int sum=0;
	
	printf("출력 : ");
	for(int i=num1; i<=num2; i++) {
		printf("%d ", i);
		sum += i;
	}
	
	return sum;
}

int main() {
	int a, b, result;
	
	scanf("%d %d", &a, &b);
	
	result = func(a, b);
	
	printf(" 합계 : %d", result);
	
	return 0;
}
