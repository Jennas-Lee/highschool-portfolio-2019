#include <stdio.h>

int main() {
	char arr[101];
	int i=0;
	
	gets(arr);
	
	while(arr[i]!='\0') {
		if(arr[i]>=97) printf("%c", arr[i]-32);
		else if(arr[i]>=65) printf("%c", arr[i]+32);
		else printf("%c", arr[i]);
		i++;
	}
	
	return 0;
}
