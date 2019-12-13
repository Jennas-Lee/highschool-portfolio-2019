#include <stdio.h>

void func(int num) {
	int i;
	
	for(i=1; i<=num; i++) {
		if(num % i == 0) printf("%d, ", i);
	}
}

int main() {
	int num;
	
	printf("정수를 입력하세요 : ");
	scanf("%d", &num);
	
	printf("약수 : ");
	func(num);
	
	return 0;
}
