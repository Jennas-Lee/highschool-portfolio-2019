#include <stdio.h>

int main() {
	int array[3][4] = {3, 6, 9, 12, 15, 18, 21, 24, 27, 30, 33};
	printf("result1 = %d \n", array[0][1]);
	printf("result2 = %d \n", array[1][3]+array[2][3]);
	printf("result3 = %d \n", array[2][2]+array[3][2]);
	return 0;
}
