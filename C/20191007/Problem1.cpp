#include <stdio.h>

int main() {
	char arr[101];
	int i=0;
	
	gets(arr);
	
	while(arr[i]!='\0') i++;
	
	for(i-=1; i>=0; i--) printf("%c", arr[i]);
	
	return 0;
}
