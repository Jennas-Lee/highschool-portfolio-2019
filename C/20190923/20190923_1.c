#include <stdio.h>
#include <string.h>

int main() {
	int i, len;
	char name[100];
	
	printf("�̸��� �Է��ϼ��� : ");
	gets(name);
	
	for(i=0; name[i]!='\0'; i++) printf("%c", name[i]);
	printf("\n�Է��� ���� : %d\n", i);
	
	len = strlen(name);
	printf("strlen ����Ͽ� ���� ���� : %d", len);
	
	return 0;
}
