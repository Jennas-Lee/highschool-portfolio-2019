#include <stdio.h>

int main() {
	int i;
	double arr[5], sum=0;
	
	for(i=0; i<5; i++) {
		scanf("%lf", &arr[i]);
		sum += arr[i];
	}
	
	for(i=4; i>=0; i--) {
		printf("num : %lf\n", arr[i]);
	}
	printf("sum : %lf, avg : %lf", sum, sum/5);
	
	return 0;
}
