#include <stdio.h>

int main() {
	int a=100;
	int *pa=&a;
	
	printf("a Value : %d\n", a);
	printf("a Address : %p\n", &a);
	printf("pointer a Value : %d\n", pa);
	printf("pointer a's Value : %d\n", *pa);
	printf("pointer a Address : %p\n", &pa);
	printf("a++ : %d\n", ++a);
	printf("pa++ : %d\n", ++(*pa));
	
	return 0;
}
