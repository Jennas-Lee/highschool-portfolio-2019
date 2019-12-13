#include <stdio.h>
int main(){
	int x=4, y=4, r1, r2;
	printf("x=%d\t y=%d\n", x++, ++y);
	r1 = x++ + 5;
	r2 = ++y + 5;
	printf("r1=%d\t r2=%d\n", r1, r2);
	
	return 0;
}
