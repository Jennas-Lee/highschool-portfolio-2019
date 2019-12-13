#include <stdio.h>

int main() {
	int n, i, sum=0;
	
	scanf("%d", &n);
	for(i=1; i<=n; i++) {
		if(i%4==0) {
			printf("%d ", i);
			sum+=i;
		}
		if(sum>=10) {
			printf("\n«’∞Ë : %d", sum);
			return 0;
		}
	}
}
