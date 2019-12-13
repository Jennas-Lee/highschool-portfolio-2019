#include <stdio.h>

void func(int k) {
	int h, m, s;
	
	h=k/60/60;
	k=k-(h*60*60);
	m=k/60;
	k=k-(m*60);
	s=k%60;
	
	printf("[%d:%d:%d]", h, m, s);
}

int main() {
	int num;
	
	scanf("%d", &num);
	func(num);
	
	return 0;
}
