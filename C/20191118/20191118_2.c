#include <stdio.h>

int main() {
	int num1, num2, *ptr1, *ptr2;
	
	num1=50, num2=100;
	ptr1=&num1, ptr2=&num2;
	
	printf("num1�� �� = %d\n", num1);
	printf("num2�� �� = %d\n", num2);
	printf("num1�� �ּ� = %p\n", &num1);
	printf("num2�� �ּ� = %p\n", &num2);
	printf("������ ���� ptr1�� �� = %p\n", ptr1);
	printf("������ ���� ptr2�� �� = %p\n", ptr2);
	printf("������ ���� ptr1�� �ּҿ� �ִ� �� = %d\n", *ptr1);
	printf("������ ���� ptr2�� �ּҿ� �ִ� �� = %d\n", *ptr2);
	printf("������ ���� ptr1�� �ּ� = %p\n", &ptr1);
	printf("������ ���� ptr2�� �ּ� = %p\n", &ptr2);
	ptr2=ptr1;
	printf("\n============= ���� �� ================\n");
	printf("������ ���� ptr1�� �� = %p\n", ptr1);
	printf("������ ���� ptr2�� �� = %p\n", ptr2);
	printf("������ ���� ptr1�� �ּҿ� �ִ� �� = %d\n", *ptr1);
	printf("������ ���� ptr2�� �ּҿ� �ִ� �� = %d\n", *ptr2);
	*ptr1=302;
	printf("\n============= ���� �� ================\n");
	printf("������ ���� ptr1�� �ּҿ� �ִ� �� = %d\n", *ptr1);
	printf("������ ���� ptr2�� �ּҿ� �ִ� �� = %d\n", *ptr2);
	
	return 0;
}
