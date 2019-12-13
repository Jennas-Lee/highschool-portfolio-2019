#include <stdio.h>

int main() {
	int num[5];
	int i, sum=0;
	
	num[0] = 30;
	num[1] = 50;
	num[2] = 70;
	num[3] = 90;
	num[4] = 100;
	
	for(i=0; i<5; i++) {
		printf("num[%d] = %d\n", i, num[i]);
		sum += num[i];
	}
	printf("sum : %d", sum);
	
	return 0;
}
