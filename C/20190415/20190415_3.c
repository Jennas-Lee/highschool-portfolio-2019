#include <stdio.h>

int main () {
	int num1, num2;
	printf("수를 한개 입력해보세요.\n");
	scanf("%d", &num1);
	num2 = num1 % 2;
	
	if (num2 == 0) {
		printf("짝수입니다.\n");
	}
	else {
		printf("홀수입니다.\n");
	}
	
	return 0;
}
