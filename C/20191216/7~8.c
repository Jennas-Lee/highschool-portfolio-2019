#include <stdio.h>

int main() {
	int i, sum=0;
	for(i=1; i<=15; i++){
		if(i%3 != 0) continue;
		else sum += i;
		if(i == 9) break;
	}
	printf("i=%d, sum=%d \n", i, sum);
	
	i, sum=0;
	for(i=1; i<=15; i++){
		if(i%3 != 0) break;
		else sum += i;
		if(i == 9) continue;
	}
	printf("i=%d, sum=%d \n", i, sum);
	return 0;
}
