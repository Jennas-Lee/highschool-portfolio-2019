#include <stdio.h>

int main() {
	int i, num=1, sum=0;
	printf("정수를 입력하세요. \n");
	scanf("%d", &i);
	if(i<=0) {
		printf("잘못 입력하셨습니다.");
		return 0;
	}
	do {
		sum += num;
		printf("%3d", num++);
	}while(num != i+1);
	printf("\nsum = %d", sum);	
	return 0;
}
