#include <stdio.h>

int main() {
	int num[] = { 40, 50, 60, 70, 80, 90, 100 };
	int i, sum=0;
	
	printf("??? = %d \n", num[3]);
	/*
	for(i=0;  i<5; i++) {
		printf("%d번째 정수를 입력하세요 : ", i+1);
		scanf("%d", &num[i]);
	}
	*/
	
	for(i=0; i<5; i++) {
		printf("num[%d] = %d\n", i, num[i]);
		sum += num[i];
	}
	printf("sum : %d", sum);
	
	return 0;
}
