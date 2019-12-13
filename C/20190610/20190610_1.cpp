#include <stdio.h>

int main() {
	
	int i;
	int sum=0;
	
	for(i=1; i<=1000; i++) {
		printf("i = %d\n", i);
		sum += i;
	}
	
	printf("1부터 1000까지의 합계는 %d입니다.\n", sum);
	
	return 0;
}
