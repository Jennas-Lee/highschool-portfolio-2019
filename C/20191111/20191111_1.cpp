#include <stdio.h>

int main() {
	// 191111 ������ ����
	int tm=100, temp;
	int *a_tm;
	
	a_tm=&tm;
	temp=*a_tm;
	
	printf("tm=%d\n", tm);
	printf("tm �ּ� = %p\n", &tm);
	printf("a_tm �ּ� = %p\n", a_tm);
	printf("a_tm�� �ּҿ� ���� �ִ� �� = %d\n", *a_tm);
	printf("tmp = %d\n", temp);
	
	return 0; 
}
