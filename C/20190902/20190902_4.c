#include <stdio.h>

int main() {	// ���� �迭 scanf �Է� 
	char name[100];
	
	printf("���� �̸��� �Է��ϼ��� \n");
	scanf("%s", &name);	// ���ڿ� ���� & ���� ����
	
	printf("Your name is %s.", name); 
	
	return 0;
}
