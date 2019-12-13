#include <stdio.h>

int main() {	// 문자 배열 출력방법 2개 
	char name[] = "SeungJun Lee";
	int i;
	
	printf("%s\n", name);
	for(i=0; i<12; i++) printf("%c", name[i]);
	
	return 0;
}
