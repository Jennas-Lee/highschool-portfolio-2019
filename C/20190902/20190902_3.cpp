#include <stdio.h>

int main() {	// 문자 배열 출력방법 NULL 사용 
	char name[] = "SeungJun Lee";
	int i;
	
	printf("%s\n", name);
	for(i=0; name[i]!='\0'; i++) printf("%c", name[i]);	// name[i] !=NULL로 사용해도 무방 
	
	return 0;
}
