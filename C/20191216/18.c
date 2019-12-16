#include <stdio.h>

int main() {
	int i, j;
	int x;
	int num[3][3];
	for(i=0; i<3; i++) {
		for(j=0; j<3; j++) {
			num[i][j] = i + j*3;
			printf("%2d ", num[i][j]);
		}
		printf("\n");
	}
	return 0;
}
