#include <stdio.h>

void func(int k) {
	if(k>0) {
		func(k/2);
		printf("%d", k%2);
	}
}

int main() {
	func(20);
	return 0;
}
