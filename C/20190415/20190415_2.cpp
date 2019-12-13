#include <stdio.h>

int main () {
	int num;
	printf("수를 한개 입력해보세요.\n");
	scanf("%d", &num);
	
	if (num > 0) {
		printf("양수입니다.\n");
	}
	else {
		printf("음수입니다.\n");
	}
	
	return 0;
}
