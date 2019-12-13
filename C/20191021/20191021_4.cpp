#include <stdio.h>

void f();

int main() {
	printf("Enter... ");
	f();
	
	return 0;
}

void f() {
	char ch;
	ch=getchar();
	if(ch!='\n') f();
	putchar(ch);
}
