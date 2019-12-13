#include <stdio.h>

int a=100;

void f1() {
	printf("%d\n", a);
}

void f2() {
	int a=200;
	printf("%d\n", a);
}

int main() {
	f1();
	f2();
	printf("%d", a);
	
	return 0;
}
