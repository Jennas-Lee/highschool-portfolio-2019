#include <stdio.h>

int main() {	// ���� �迭 gets �Է� 
	char name[100];
	int i=0;
	
	printf("���� �̸��� �Է��ϼ��� : ");
	gets(name);
	printf("Your name is ");
	while(name[i]!=NULL) {
		printf("%c", name[i]);
		i++;
	}
	printf("\n���� �� : %d", i);
	
	return 0;
}
