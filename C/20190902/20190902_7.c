#include <stdio.h>

int main() {	// ���ڿ� �Է¹޾� ��ҹ��� ���� ���� �� ��� 
	char str[100];
	int i=0;
	
	printf("���ڿ��� �Է��ϼ��� : ");
	gets(str);
	
	while(str[i]!=NULL) {
		if(str[i]>=65 && str[i]<=90) {
			printf("%c", str[i]+32);
			str[i] = str[i]+32;
		}
		else if(str[i]>=97 && str[i]<=122) {
			printf("%c", str[i]-32);
			str[i] = str[i]-32;
		}
		else {
			printf("%c", str[i]);
		}
		i++;
	}
	printf("\n���尪 : %s", str);
	
	return 0;
}
