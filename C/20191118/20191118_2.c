#include <stdio.h>

int main() {
	int num1, num2, *ptr1, *ptr2;
	
	num1=50, num2=100;
	ptr1=&num1, ptr2=&num2;
	
	printf("num1의 값 = %d\n", num1);
	printf("num2의 값 = %d\n", num2);
	printf("num1의 주소 = %p\n", &num1);
	printf("num2의 주소 = %p\n", &num2);
	printf("포인터 변수 ptr1의 값 = %p\n", ptr1);
	printf("포인터 변수 ptr2의 값 = %p\n", ptr2);
	printf("포인터 변수 ptr1의 주소에 있는 값 = %d\n", *ptr1);
	printf("포인터 변수 ptr2의 주소에 있는 값 = %d\n", *ptr2);
	printf("포인터 변수 ptr1의 주소 = %p\n", &ptr1);
	printf("포인터 변수 ptr2의 주소 = %p\n", &ptr2);
	ptr2=ptr1;
	printf("\n============= 대입 후 ================\n");
	printf("포인터 변수 ptr1의 값 = %p\n", ptr1);
	printf("포인터 변수 ptr2의 값 = %p\n", ptr2);
	printf("포인터 변수 ptr1의 주소에 있는 값 = %d\n", *ptr1);
	printf("포인터 변수 ptr2의 주소에 있는 값 = %d\n", *ptr2);
	*ptr1=302;
	printf("\n============= 대입 후 ================\n");
	printf("포인터 변수 ptr1의 주소에 있는 값 = %d\n", *ptr1);
	printf("포인터 변수 ptr2의 주소에 있는 값 = %d\n", *ptr2);
	
	return 0;
}
