#include <stdio.h>

int main() {
	int arr[4][4] = {1, 2, 3, 5, 8, 9, 6, 4, 3, 5, 6, 7, 1, 3, 4, 5};
	int i, j;
	
	for(i=0; i<4; i++) {
		for(j=0; j<4; j++) {
			printf("%3d", arr[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
