#include <stdio.h>

int main() {	// 문자 배열 scanf 입력 
	char name[100];
	
	printf("영어 이름을 입력하세요 \n");
	scanf("%s", &name);	// 문자열 한정 & 생략 가능
	
	printf("Your name is %s.", name); 
	
	return 0;
}
