#include <stdio.h>

int main() {
	// 191111 포인터 기초 대입2
	int n1=10, n2=20;
	int *p1, *p2; 
	
	// p1에는 n1의 주소, p2에는 n2의 주소 저장
	// n1, n2, p1, p2 이용해서 출력
	
	p1=&n1;
	p2=&n2;
	*p2=*p1;
	
	printf("n1 = %d, n2 = %d\n", n1, n2);
	printf("n1 addr = %p, n2 addr = %p\n", &n1, &n2);
	printf("n1 addr = %p, n2 addr = %p\n", p1, p2);
	printf("p1 = %d, p2 = %d\n", *p1, *p2);
	
	return 0;
}
