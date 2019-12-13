#include <stdio.h>

int main() {	// 문자열 입력받아 대소문자 변경 저장 후 출력 
	char str[100];
	int i=0;
	
	printf("문자열을 입력하세요 : ");
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
	printf("\n저장값 : %s", str);
	
	return 0;
}
