#include <stdio.h>
#include <string.h>

int main() {
	char name[100], name2[100];
	
	printf("�̸��� �Է��ϼ��� : ");
	gets(name);
	
	strcpy(name2, name);
	printf("name1 : %s\n", name);
	printf("name2 : %s\n", name2);
	
	return 0;
}
