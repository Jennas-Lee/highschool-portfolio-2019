#include <stdio.h>

int main() {	// 문자 배열 gets 입력 
	char name[100];
	int i=0;
	
	printf("영어 이름을 입력하세요 : ");
	gets(name);
	printf("Your name is ");
	while(name[i]!=NULL) {
		printf("%c", name[i]);
		i++;
	}
	printf("\n글자 수 : %d", i);
	
	return 0;
}
