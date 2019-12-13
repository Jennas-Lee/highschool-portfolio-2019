#include <stdio.h>
#include <string.h>

int main() {
	char name[100];
	char name2[100];
	
	printf("name을 입력하세요 : ");
	gets(name);
	printf("name2를 입력하세요 : ");
	gets(name2);
	
	printf("name1 : %s\n", name);
	printf("name2 : %s\n", name2);
	
	if(strcmp(name, name2) == 0) printf("두 문자열은 같습니다.");
	else printf("두 문자열은 다릅니다.");
	
	return 0;
}
