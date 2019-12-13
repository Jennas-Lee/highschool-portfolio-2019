#include <stdio.h>

int a=100;

void f() {
	printf("전역변수 : %d", a);
	return;
}

int main() {
	int a=200;
	
	printf("지역변수 : %d\n", a);
	f();
	
	return 0;
}
