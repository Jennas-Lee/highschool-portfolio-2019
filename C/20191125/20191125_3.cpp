#include <stdio.h>

int main() {	
	int n, i, sum=0;
	
	printf("for문 사용\n");
	while(1) {
		printf("정수를 입력하세요... ");
		scanf("%d", &n);
		if(n<=0) {
			printf("잘못 입력하셨습니다.\n\n");
		} else {
			for(i=n; i>0; i--) {
			printf("%d\n", i);
			sum+=i;
			}
			printf("1부터 %d까지의 합계는 %d입니다.\n\n", n, sum);
			break;
		}
	}
	
	sum=0;
	
	printf("while문 사용\n");
	while(1) {
		printf("정수를 입력하세요... ");
		scanf("%d", &n);
		if(n<=0) {
			printf("잘못 입력하셨습니다.\n\n");
		} else {
			i=n;
			while(i>0) {
				printf("%d\n", i);
				sum+=i;
				i--;
			}
			printf("1부터 %d까지의 합계는 %d입니다.\n\n", n, sum);
			break;
		}
	}
	
	sum=0;
	
	printf("do&while문 사용\n");
	while(1) {
		printf("정수를 입력하세요... ");
		scanf("%d", &n);
		if(n<=0) {
			printf("잘못 입력하셨습니다.\n\n");
		} else {
			i=n;
			do {
				printf("%d\n", i);
				sum+=i;
				i--;
			} while(i>0);
			printf("1부터 %d까지의 합계는 %d입니다.\n\n", n, sum);
			break;
		}
	}
	
	return 0;
}
