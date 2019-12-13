#include <stdio.h>
#include <string.h>

char arr[100];

int pf(int n) {
	if(n==0) return 0;
	else pf(n-1);
	printf("%4d", n);
}

int sf(int n) {
	if(n==0) return 0;
	else return n+sf(n-1);
}

int pacf(int n) {
	if(n==1) return 1;
	else return n*pacf(n-1);
}

int binf(int n) {
	int tmp;
	if(n<=1) {
		printf("%d", n);
	} else {
		tmp=n%2;
		binf(n/2);
		printf("%d", tmp);
	}
	return 0;
}

int numf(int n) {
	if(n>=10) numf(n/10);
	printf("%3d", n);
}

void revf(int n) {
	if(n==-1) return;
	else {
		printf("%c", arr[n-1]);
		revf(n-1);
	}
}

int main() {
	int n;
	
	scanf("%d", &n);
	pf(n);
	printf("\n");
	printf("%d\n", sf(n));
	printf("%d\n", pacf(n));
	binf(n);
	printf("\n");
	numf(n);
	printf("\n");
	printf("문자열 입력... ");
	scanf("%s", arr);
	revf(strlen(arr));
	
	return 0;
}
