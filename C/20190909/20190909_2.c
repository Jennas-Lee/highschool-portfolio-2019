#include <stdio.h>

int main() {	// 문자열 비교 
	char str1[100], str2[100];
	int i=0; 
	
	printf("첫번째 문자열을 입력하세요 : ");
	gets(str1);
	printf("두번째 문자열을 입력하세요 : ");
	gets(str2);
	
	while(str1[i]!='\0' || str2[i]!='\0') {
		if(str1[i] != str2[i]) {
			printf("입력한 두 문자열은 다르다");
			return 0;
		}
		i++;
	}
	
	printf("입력한 두 문자열은 같다.");
	
	return 0; 
}
