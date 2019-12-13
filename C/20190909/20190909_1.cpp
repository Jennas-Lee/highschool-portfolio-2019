#include <stdio.h>

int main() {
	char arr[100];
	int i=0;
	
	gets(arr);
	
	while(arr[i] != NULL) i++;
	i -= 1;
	while(i>=0) {
		printf("%c", arr[i]);
		i--;
	}
	
	return 0;
}
