#include <stdio.h>

int main() {
	int num1=5, num2=8, *addr1, *addr2;
	addr1 = &num1;
	addr2 = &num2;
	
	printf("result1 = %d \n", *addr2);
	printf("result2 = %p \n", addr1);
	
	*addr2 = *addr1;
	printf("result3 = %d \n", *addr2);
	
	return 0;
}
