#include <stdio.h>

int sum(int k) {
	int i, sum=0;
	
	for(i=1; i<=k; i++) {
		printf("%d  ", i);
		sum+=i;
	}
	
	return sum;
}

int main() {
	int n;
	
	scanf("%d", &n);
	printf("\n%d", sum(n));
	
	return 0;
}
