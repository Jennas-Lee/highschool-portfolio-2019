#include <stdio.h>

int main() {
	char name[100] = "Computer~", i=0;
	printf("�̸��� �Է��ϼ��� \n");
	gets(name);
	while(name[i] != '\0') i++;
	printf("result = %d \n", i);
	
	name[100] = "Computer~", i=0;
	printf("�̸��� �Է��ϼ��� \n");
	scanf("%s", name);
	while(name[i] != '\0') i++;
	printf("result = %d \n", i);
	return 0;
}
