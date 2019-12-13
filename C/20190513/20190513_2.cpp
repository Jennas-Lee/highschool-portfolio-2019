#include <stdio.h>

int main () {
	int num;
	
	printf("임의의 수를 입력하세요.\n");
	scanf("%d", &num);
	printf("입력한 숫자 ");
	if(num>0){
		printf("%d는 양수입니다.\n", num);
	}
	else if(num==0){
		printf("%d는 0입니다.\n", num);
	}
	else{
		printf("%d는 음수입니다.\n", num);
	}
	printf("프로그램을 종료합니다.");
	
	return 0;
}
