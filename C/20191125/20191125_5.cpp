#include <stdio.h>

int main() {
	int n, i, sum=0, arr[1001];
	
	while(1) {
		printf("정수를 입력하세요... ");
		scanf("%d", &n);
		if(n<=0) {
			printf("잘못 입력하셨습니다.\n\n");
		} else {
			for(i=1; i<=n; i++) {
				sum+=i;
				arr[i]=i;
			}
			printf("1부터 %d까지의 합계는 %d입니다.\n\n", n, sum);
			break;
		}
	}
	
	for(i=1; i<=n; i++) printf("%d ", arr[i]);
	printf("\n");
	for(i=n; i>=1; i--) printf("%d ", arr[i]);
	
	return 0;
}
