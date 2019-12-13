#include <stdio.h>

int main() {
	// 191111 포인터 double형 
	double tm=100.83624, temp;
	double *a_tm;
	
	a_tm=&tm;
	temp=*a_tm;
	
	printf("tm=%lf\n", tm);
	printf("tm 주소 = %p\n", &tm);
	printf("a_tm 주소 = %p\n", a_tm);
	printf("a_tm의 주소에 가면 있는 값 = %lf\n", *a_tm);
	printf("tmp = %lf\n", temp);
	
	return 0; 
}
