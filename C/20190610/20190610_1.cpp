#include <stdio.h>

int main() {
	
	int i;
	int sum=0;
	
	for(i=1; i<=1000; i++) {
		printf("i = %d\n", i);
		sum += i;
	}
	
	printf("1���� 1000������ �հ�� %d�Դϴ�.\n", sum);
	
	return 0;
}
