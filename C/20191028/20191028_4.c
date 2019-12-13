#include <stdio.h>

int main() {
	int arr[5][5];
	int i, j, temp=1;
	
	for(i=0; i<5; i++) {
		for(j=0; j<5; j++) {
			arr[j][i]=temp;
			temp++;
		}
	}
	for(i=0; i<5; i++) {
		for(j=0; j<5; j++) {
			printf("%3d", arr[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
