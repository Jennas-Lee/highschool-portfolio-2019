#include <stdio.h> 

int main() {
	int i, j, num;
	printf("정수 1개를 입력하세요.\n");
	scanf("%d", &num);
	
	for(i=1; i<=num; i++){
		for(j=1; j<=9; j++){
			printf("%d X %d = %d\n", i, j, i*j);
		}
		printf("==========\n");
	}
	
	return 0;
}
