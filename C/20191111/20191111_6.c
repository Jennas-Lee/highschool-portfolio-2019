#include <stdio.h>

int main() {
	// 191111 ������ ���� ����2
	int n1=10, n2=20;
	int *p1, *p2; 
	
	// p1���� n1�� �ּ�, p2���� n2�� �ּ� ����
	// n1, n2, p1, p2 �̿��ؼ� ���
	
	p1=&n1;
	p2=&n2;
	*p2=*p1;
	
	printf("n1 = %d, n2 = %d\n", n1, n2);
	printf("n1 addr = %p, n2 addr = %p\n", &n1, &n2);
	printf("n1 addr = %p, n2 addr = %p\n", p1, p2);
	printf("p1 = %d, p2 = %d\n", *p1, *p2);
	
	return 0;
}
