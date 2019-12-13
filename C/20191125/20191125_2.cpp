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
			for(i=1; i<=n; i++) {
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
			i=1;
			while(i<=n) {
				printf("%d\n", i);
				sum+=i;
				i++;
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
			i=1;
			do {
				printf("%d\n", i);
				sum+=i;
				i++;
			} while(i<=n);
			printf("1부터 %d까지의 합계는 %d입니다.\n\n", n, sum);
			break;
		}
	}
	
	return 0;
}
