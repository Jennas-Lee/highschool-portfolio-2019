#include <stdio.h>

void f(int n, int m) {
	int i, tmp=0;
	
	for(i=n; i<=m; i++) {
		printf("%4d", i);
		tmp+=i;
	}
	printf("\nsum : %d\n", tmp);
	for(i=1; i<=n; i++) {
		if(n%i==0 && m%i==0) {
			tmp=i;
		}
	}
	printf("divisor : %d", tmp);
}

int main() {
	int n, m;
	
	scanf("%d %d", &n, &m);
	if(n<m) f(n, m);
	else f(m, n);	
	
	return 0;
}
