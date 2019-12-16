#include <stdio.h>

int main() {
	char name[100] = "Computer~", i=0;
	printf("이름을 입력하세요 \n");
	gets(name);
	while(name[i] != '\0') i++;
	printf("result = %d \n", i);
	
	name[100] = "Computer~", i=0;
	printf("이름을 입력하세요 \n");
	scanf("%s", name);
	while(name[i] != '\0') i++;
	printf("result = %d \n", i);
	return 0;
}
