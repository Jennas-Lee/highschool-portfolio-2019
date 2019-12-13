#include <stdio.h>

int main () {
	int age; //단순 if문 
	
	printf("나이를 입력하세요.\n");
	scanf("%d", &age);
	
	if (age <= 20) {
		printf("미성년자입니다. \n");
	}
	
	printf("WOW~ \n");
	
	return 0; 
}
