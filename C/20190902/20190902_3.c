#include <stdio.h>

int main() {	// ���� �迭 ��¹�� NULL ��� 
	char name[] = "SeungJun Lee";
	int i;
	
	printf("%s\n", name);
	for(i=0; name[i]!='\0'; i++) printf("%c", name[i]);	// name[i] !=NULL�� ����ص� ���� 
	
	return 0;
}
