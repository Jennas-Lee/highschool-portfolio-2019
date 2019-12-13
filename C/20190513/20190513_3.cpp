#include <stdio.h>

int main () {
	int num;
	printf("임의의 수를 입력하세요.\n");
	scanf("%d", &num);
	
	if(num%3==0 && num%5==0){
		printf("%d은 3의 배수이면서 5의 배수입니다.\n", num);
	}
	else if(num%3==0){
		printf("%d은 3의 배수 입니다.\n", num);
	}
	else if(num%5==0){
		printf("%d은 5의 배수 입니다.\n", num);
	}
	else{
		printf("%d은 3의 배수도 5의 배수도 아닙니다.\n", num);
	} 
	printf("프로그램을 종료합니다.");
	
	return 0;
}
