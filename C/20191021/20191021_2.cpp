#include <stdio.h>

int f(int n);

int main() {
	int n;
	
	printf("NUMBER... ");
	scanf("%d", &n);
	printf("%d! = %d", n, f(n));
	
	return 0;
}

int f(int n) {
	if(n==1) return 1;
	else return n*f(n-1);
}
