#include <stdio.h>

int func(int k, int l) {
	int i, result;
	
	for(i=1; i<=k; i++) {
		if(k%i==0 && l%i==0) result=i;
	}
	
	return result;
}

int main() {
	int n, m;
	
	scanf("%d %d", &n, &m);
	printf("최대공약수: %d", func(n, m));
	
	return 0;
}
