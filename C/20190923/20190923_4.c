#include <stdio.h>
#include <string.h>

int main() {
	char name[100];
	char name2[100];
	
	printf("name�� �Է��ϼ��� : ");
	gets(name);
	printf("name2�� �Է��ϼ��� : ");
	gets(name2);
	
	printf("name1 : %s\n", name);
	printf("name2 : %s\n", name2);
	
	if(strcmp(name, name2) == 0) printf("�� ���ڿ��� �����ϴ�.");
	else printf("�� ���ڿ��� �ٸ��ϴ�.");
	
	return 0;
}
