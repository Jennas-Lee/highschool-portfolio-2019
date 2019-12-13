#include <stdio.h>
#include <string.h>

int main() {
	int i, len;
	char name[100];
	
	printf("이름을 입력하세요 : ");
	gets(name);
	
	for(i=0; name[i]!='\0'; i++) printf("%c", name[i]);
	printf("\n입력한 길이 : %d\n", i);
	
	len = strlen(name);
	printf("strlen 사용하여 구한 길이 : %d", len);
	
	return 0;
}
