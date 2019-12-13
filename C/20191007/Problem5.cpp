#include <stdio.h>

void timeChange(int k) {
	int h, m, s;
	
	h = k/3600;
	k -= h*3600;
	m = k/60;
	s = k%60;
	
	printf("[%d시간:%d분:%d초]", h, m, s);
}

int main() {
	int n;
	
	scanf("%d", &n);
	timeChange(n);
	
	return 0;
}
