#include <stdio.h>

int main() {	// ���� �迭 ��¹�� 2�� 
	char name[] = "SeungJun Lee";
	int i;
	
	printf("%s\n", name);
	for(i=0; i<12; i++) printf("%c", name[i]);
	
	return 0;
}
