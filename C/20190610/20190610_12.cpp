#include <stdio.h>

int main() {
	int num = 1;
	int sum = 0;
	
	while(num <= 100){
		printf("%d \n", num);
		sum += num;				// sum = sum + num;
		num++;
	}
	
	printf("%d", sum);
	
	return 0;
}
