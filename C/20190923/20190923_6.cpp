#include <stdio.h>

void func(int num) {
	int i;
	
	for(i=1; i<=num; i++) {
		if(num % i == 0) printf("%d, ", i);
	}
}

int main() {
	int num;
	
	printf("������ �Է��ϼ��� : ");
	scanf("%d", &num);
	
	printf("��� : ");
	func(num);
	
	return 0;
}
