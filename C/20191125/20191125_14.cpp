#include <stdio.h>
#include <stdlib.h>

int main() {
	int arr[5][5], i, j;
	
	for(i=0; i<5; i++) {
		for(j=0; j<5; j++) {
			arr[i][j]=rand()%100+1;
			printf("%4d", arr[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
