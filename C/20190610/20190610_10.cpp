#include <stdio.h>

int main() {
	int i, j, k;
	
	for(i=1; i<=5; i++){
		for(j=1; j<=5-i; j++){
			printf(" ");
		}
		for(k=1; k<=6-j; k++){
			printf("*");
		}
		printf("\n");
	}
	
	
	return 0;
}
