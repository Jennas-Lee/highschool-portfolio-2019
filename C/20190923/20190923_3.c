#include <stdio.h>
#include <string.h>

int main() {
	char name[100];
	char name2[100] = "Lee";
	
	printf("�̸��� �Է��ϼ��� : ");
	gets(name);
	
	strcat(name2, name);
	printf("name1 : %s\n", name);
	printf("name2 : %s\n", name2);
	
	return 0;
}
