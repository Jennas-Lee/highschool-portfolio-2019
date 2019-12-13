#include <stdio.h>
#include <string.h>

int main() {	// 문자열 비교 
	char str1[100], str2[100];
	int i=0; 
	
	printf("첫번째 문자열을 입력하세요 : ");
	gets(str1);
	printf("두번째 문자열을 입력하세요 : ");
	gets(str2);
	
	if(strcmp(str1, str2)==0) printf("입력한 두 문자열은 같다.");
	else printf("입력한 두 문자열은 다르다.");
	
	return 0; 
}
