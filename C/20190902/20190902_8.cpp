#include <stdio.h>

int main() {	// 문자열 비교 
	char str1[100], str2[100];
	int i=0; 
	
	printf("첫번째 문자열을 입력하세요 : ");
	gets(str1);
	printf("두번째 문자열을 입력하세요 : ");
	gets(str2);
	
	while(str1[i]!=NULL || str2[i]!=NULL) {
		if(str1[i] != str2[i]) printf("%c와 %c가 다름! %d번째 글자\n", str1[i], str2[i], i+1);
		i++;
	}
	
	return 0;
}
