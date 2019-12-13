#include <stdio.h>				//입력받은 수까지의 합계 

int main() {
	int i;						//for문 안에서 증가하는 수 
	int sum = 0;
	int num;
	
	printf("정수 1개를 입력하세요.\n");
	scanf("%d", &num);
	
	for(i=1; i<=num; i++){	 
		printf("%d\n", i);		//i값 출력
		sum += i;				//i값 덧셈 
	}
	
	printf("%d 까지의 수의 합계는 %d입니다.\n", num, sum);

	
	return 0;
}
