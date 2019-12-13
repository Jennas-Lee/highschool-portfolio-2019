#include <stdio.h>

int main() {
	int num[6] = { 3, 10, 38, 51, 35, 22 };
	int max = 0;
	int min = 100;
	int i;
	
	for(i=0; i<6; i++) {
		if(num[i] >= max) max = num[i];
		if(num[i] <= min) min = num[i];
	}
	
	
	printf("최대값 = %d, 최소값 = %d", max, min);
	
	return 0;
}
