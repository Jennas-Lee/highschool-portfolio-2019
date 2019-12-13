#include <stdio.h>

void aliquot(int k) {
	int i;
	
	for(i=1; i<=k; i++) {
		if(k%i==0) printf("%d  ", i);
	}
}

int main() {
	int n;
	
	scanf("%d", &n);
	aliquot(n);
	
	return 0;
}
