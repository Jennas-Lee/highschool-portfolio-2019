#include <stdio.h>

int main () {
	int age; // �ǽ�����2 
	
	printf("���̸� �Է��ϼ���. \n");
	scanf("%d", &age);
	printf("�Է��� ���̴� %d���Դϴ�. \n", age);
	
	if(age>=20) {
		printf("�����Դϴ�. \n");
	}
	
	else {
		printf("�̼������Դϴ�. \n");
	}
	
	return 0;
}
