#include <stdio.h>

int main() {
	int fruit;
	
	printf("정수를 입력하세요.\n");
	scanf("%d", &fruit);
	
	switch(fruit) {
		case 1:
			printf("사과");
			break;											//break가 없으면 숫자를 입력해도 break가 나오는 case까지 계속 실행
		case 2:
			printf("딸기");
			break;
		case 3:
			printf("수박");
			break;
		case 4:
			printf("바나나");
			break;
		default:
			printf("잘못 입력하셨습니다.");
	}
	
	printf("\n프로그램을 종료합니다.\n");
	return 0;
}
