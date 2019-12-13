#include <stdio.h>

int main() {
	int n, sum=0;
	
	while(1) {
		printf("정수를 입력하세요... ");
		scanf("%d", &n);
		if(n<0) {
			printf("지금까지 입력한 수의 합계는 %d입니다.", sum);
			return 0; 
		} else {
			sum+=n;
		}
	}
}
