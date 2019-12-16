#include <stdio.h>

void func(int num, int num2);

int main() {
	int num;
	scanf("%d", &num);
	func(num+2, num);
	return 0;
}

void func(int num, int num2) {
	for(int i=1; i<=num; i++)
		if(num % i == 0) printf("%d ", i);
}
