#include <stdio.h>

int main() {
	int i, j;
	
	for(i=1; i<=5; i++){
		for(j=5; j>=i; j--){	//for(j=1; j<=6-i; j++)·Î ÇØµµ µÊ 
			printf("*");
		}
		printf("\n");
	}
	
	
	return 0;
}
