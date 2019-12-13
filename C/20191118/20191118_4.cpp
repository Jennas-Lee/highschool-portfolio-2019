#include <stdio.h>

int main() {
	int num1=50, num2=100;
	int *ptr1=&num1, *ptr2=&num2;
	
	printf("num1=%d\n", num1);
	printf("ptr1=%d\n", *ptr1);
	printf("ptr1=%d\n", *ptr1+1);
	printf("ptr1=%d\n", (*ptr1)++);
	printf("ptr1=%d\n", *ptr1);
	printf("ptr1=%d\n", ++(*ptr1));
	printf("ptr1=%d\n", *ptr1);
	printf("ptr1=%d\n", *ptr1+=1);
	printf("ptr1=%d\n", *ptr1);
	
	return 0;
}
