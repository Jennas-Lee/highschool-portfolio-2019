#include <stdio.h>

int main() {	// ���ڿ� �� 
	char str1[100], str2[100];
	int i=0; 
	
	printf("ù��° ���ڿ��� �Է��ϼ��� : ");
	gets(str1);
	printf("�ι�° ���ڿ��� �Է��ϼ��� : ");
	gets(str2);
	
	while(str1[i]!='\0' || str2[i]!='\0') {
		if(str1[i] != str2[i]) {
			printf("�Է��� �� ���ڿ��� �ٸ���");
			return 0;
		}
		i++;
	}
	
	printf("�Է��� �� ���ڿ��� ����.");
	
	return 0; 
}
