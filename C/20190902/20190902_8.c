#include <stdio.h>

int main() {	// ���ڿ� �� 
	char str1[100], str2[100];
	int i=0; 
	
	printf("ù��° ���ڿ��� �Է��ϼ��� : ");
	gets(str1);
	printf("�ι�° ���ڿ��� �Է��ϼ��� : ");
	gets(str2);
	
	while(str1[i]!=NULL || str2[i]!=NULL) {
		if(str1[i] != str2[i]) printf("%c�� %c�� �ٸ�! %d��° ����\n", str1[i], str2[i], i+1);
		i++;
	}
	
	return 0;
}
