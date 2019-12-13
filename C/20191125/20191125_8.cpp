#include <stdio.h>
#include <string.h>

int main() {
	char arr1[]="SMC AI gogogo", arr2[]="GOGOGO";
	char cat[1000]={NULL}, cpy1[100], cpy2[1000];
	int i=0;
	
	printf("%s / %s\n", arr1, arr2);
	strcat(cat, arr1);
	strcat(cat, arr2);
	strcpy(cpy1, arr1);
	strcpy(cpy2, arr2);
	printf("cat : %s\n", cat);
	printf("cpy1 : %s\n", cpy1);
	printf("cpy2 : %s\n", cpy2);
	printf("cmp : %d, len1 : %d, len2 : %d\n", strcmp(arr1, arr2), strlen(arr1), strlen(arr2));
	
	while(cat[i]!='\0') {
		if(cat[i]>=97) printf("%c", cat[i]-32);
		else if(cat[i]>=65) printf("%c", cat[i]+32);
		else printf("%c", cat[i]);
		i++;
	}
	
	return 0;
}
