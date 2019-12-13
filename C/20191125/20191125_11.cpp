#include <stdio.h>

void gugu(int n) {
	int i;
	
	for(i=1; i<=9; i++) {
		printf("\t%d X %d=%2d\n", n, i, n*i);
	}
}

void odd(int n) {
	int i;
	
	for(i=1; i<=n; i++) {
		if(i%2!=0) {
			printf("%4d", i);
		}
	}
}

void even(int n) {
	int i;
	
	for(i=1; i<=n; i++) {
		if(i%2==0) {
			printf("%4d", i);
		}
	}
}

int sumf(int n) {
	int sum=0, i;
	
	for(i=1; i<=n; i++) {
		sum+=i;
	}
	return sum;
}

void divisor(int n) {
	int i;
	
	for(i=1; i<=n; i++) {
		if(n%i==0) {
			printf("%4d", i);
		}
	}
}

int main() {
	int n;
	
	scanf("%d", &n);
	gugu(n);
	printf("\n");
	odd(n);
	printf("\n");
	even(n);
	printf("\n");
	printf("%d", sumf(n));
	printf("\n");
	divisor(n);
		
	return 0;
}
