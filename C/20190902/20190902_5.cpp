#include <stdio.h>

int main() {	// ���� �迭 gets �Է� 
	char name[100];
	
	printf("���� �̸��� �Է��ϼ��� : ");
	gets(name);
	printf("Your name is %s.", name);
	
	return 0;
}
