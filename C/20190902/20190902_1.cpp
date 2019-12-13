#include <stdio.h>

int main() {	// 문자 배열 시작 
	char c[5] = { 's', 'm', 'c', 'h', 's' };
	int i;
	
	for(i=0; i<5; i++) printf("result = %c\n", c[i]);
	
	return 0;
}
