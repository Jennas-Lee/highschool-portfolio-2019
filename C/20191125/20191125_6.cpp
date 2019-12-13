#include <stdio.h>

int main() {
	int n, i, j, k;
	
	scanf("%d", &n);
	
	// SQUARE
	for(i=1; i<=n; i++) {
		for(j=1; j<=n; j++) {
			printf("*");
		}
		printf("\n");
	}
	printf("\n");
	
	// RIGHT TRIANGLE - LEFT
	for(i=1; i<=n; i++) {
		for(j=1; j<=i; j++) {
			printf("*");
		}
		printf("\n");
	}
	printf("\n");
	
	// RIGHT TRIANGLE - RIGHT
	for(i=1; i<=n; i++) {
		for(j=n; j>i; j--) {
			printf(" ");
		}
		for(k=1; k<=i; k++) {
			printf("*");
		}
		printf("\n");
	}
	printf("\n");
	
	// RIGHT TRIANGLE - REVERSE LEFT
	for(i=1; i<=n; i++) {
		for(k=n; k>=i; k--) {
			printf("*");
		}
		printf("\n");
	}
	printf("\n");
	
	// RIGHT TRIANGLE - REVERSE RIGHT
	for(i=0; i<n; i++) {
		for(j=0; j<i; j++) {
			printf(" ");
		}
		for(k=n; k>i; k--) {
			printf("*");
		}
		printf("\n");
	}
	printf("\n");
	
	// EQUILATERAL TRIANGLE
//	for(i=1; i<=n; i++) {
//		for(j=n-i; j>0; j--) {
//			printf(" ");
//		}
//		for(k=1; k<=i; k++) {
//			printf("*");
//		}
//		for(j=1; j<n; j++) {
//			printf("*");
//		}
//		printf("\n");
//	}
	
	return 0;
}
