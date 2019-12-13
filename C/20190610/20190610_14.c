#include <stdio.h>

int main() {
	int num = 100;
	int sum = 0;
	
	while(num >= 0){
		printf("%d \n", num);
		sum += num;
		num -= 2;
	}
	
	printf("%d", sum);
	
	return 0;
}
