#include <stdio.h>

int a=100;

void f() {
	printf("�������� : %d", a);
	return;
}

int main() {
	int a=200;
	
	printf("�������� : %d\n", a);
	f();
	
	return 0;
}
