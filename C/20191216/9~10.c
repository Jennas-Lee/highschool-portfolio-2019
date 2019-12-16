#include <stdio.h>
#include <string.h>

int main() {
	char str1[100] = "AI Nice";
	char str2[100] = "SMC";
	printf("What's your name? \n");
	gets(str2);
	strcat(str1, str2);
	printf("%s \n", str1);
	strcpy(str1, str2);
	printf("%s \n", str2);
	return 0;
}
