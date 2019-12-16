#include <stdio.h>

void func(int n) {
	if(n>=1) func(n-1) ;
	printf("%d", n);
}

int main() {
	func(5);
	return 0;
}
