#include <stdio.h>

int main() {
	// 191111 ������ double�� 
	double tm=100.83624, temp;
	double *a_tm;
	
	a_tm=&tm;
	temp=*a_tm;
	
	printf("tm=%lf\n", tm);
	printf("tm �ּ� = %p\n", &tm);
	printf("a_tm �ּ� = %p\n", a_tm);
	printf("a_tm�� �ּҿ� ���� �ִ� �� = %lf\n", *a_tm);
	printf("tmp = %lf\n", temp);
	
	return 0; 
}
