#include <stdio.h>

int add(int num1, int num2) {
	printf("%d + %d = %d\n", num1, num2, num1+num2);
	
	return 0;
}

int sing() {
	printf("동해물과\n");
	printf("백두산이\n");
	printf("마르고\n");
	printf("닳도록\n");
	
	return 0;
}

int main() {
	int num1, num2, sum;
	
	/*
	num1 = 3;
	num2 = 5;
	sum = num1+num2;
	printf("%d + %d = %d\n", num1, num2, sum);
	
	num1 = 4;
	num2 = 6;
	sum = num1+num2;
	printf("%d + %d = %d\n");
	
	num1 = 5;
	num2 = 7;
	sum = num1+num2;
	printf("%d + %d = %d\n");
	*/
	
	add(3, 5);
	add(5, 4);
	sing();
	
	return 0;
}
