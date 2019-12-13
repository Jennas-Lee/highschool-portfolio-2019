#include <stdio.h>

int main() {	// 문자 배열 gets 입력 
	char name[100];
	
	printf("영어 이름을 입력하세요 : ");
	gets(name);
	printf("Your name is %s.", name);
	
	return 0;
}
