#include <stdio.h>

int func(int k, int l) {
	int i, sum=0;
	
	for(i=k; i<=l; i++) {
		printf("%d\n", i);
		sum+=i;
	}
	
	return sum;
}

int main() {
	int n, m;
	
	scanf("%d %d", &n, &m);
	
	if(n>=m) printf("�հ�:%d", func(m, n));
	else printf("�հ�:%d", func(n, m));
	
	return 0;
}
