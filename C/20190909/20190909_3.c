#include <stdio.h>
#include <string.h>

int main() {	// ���ڿ� �� 
	char str1[100], str2[100];
	int i=0; 
	
	printf("ù��° ���ڿ��� �Է��ϼ��� : ");
	gets(str1);
	printf("�ι�° ���ڿ��� �Է��ϼ��� : ");
	gets(str2);
	
	if(strcmp(str1, str2)==0) printf("�Է��� �� ���ڿ��� ����.");
	else printf("�Է��� �� ���ڿ��� �ٸ���.");
	
	return 0; 
}
