#include <stdio.h>

int main() {
	// 191111 포인터 시작
	int tm=100, temp;
	int *a_tm;
	
	a_tm=&tm;
	temp=*a_tm;
	
	printf("tm=%d\n", tm);
	printf("tm 주소 = %p\n", &tm);
	printf("a_tm 주소 = %p\n", a_tm);
	printf("a_tm의 주소에 가면 있는 값 = %d\n", *a_tm);
	printf("tmp = %d\n", temp);
	
	return 0; 
}
