#include <stdio.h>

int main () {
	int num1, num2;
	printf("���� �Ѱ� �Է��غ�����.\n");
	scanf("%d", &num1);
	num2 = num1 % 2;
	
	if (num2 == 0) {
		printf("¦���Դϴ�.\n");
	}
	else {
		printf("Ȧ���Դϴ�.\n");
	}
	
	return 0;
}
