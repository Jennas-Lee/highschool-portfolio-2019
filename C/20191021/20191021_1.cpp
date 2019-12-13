#include <stdio.h>

int func(int num);

int main() {
	int n;
	
	printf("NUMBER... : ");
	scanf("%d", &n);
	printf("SUM=%d\n", func(n));
	
	return 0;
}

int func(int num) {
	if(num==1) return 1;
	else return num+func(num-1);
}
