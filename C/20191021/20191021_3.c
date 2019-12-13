#include <stdio.h>

int f(int k);

int main() {
	int n;
	
	scanf("%d", &n);
	f(n);
	
	return 0;
}

int f(int k) {
	if(k<10) printf("%d\n", k);
	else {
		f(k/10);
		printf("%d\n", k%10);
	}
}
