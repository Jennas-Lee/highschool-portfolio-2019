#include <stdio.h>

int main() {
	/*
		for문으로 다양한 삼각형 출력 
		배열 출력 
		string 함수 사용 
		gets와 scanf의 다른 점 
		2차원 배열 
		사용자 정의 함수 
		재귀함수 
		전역변수와 지역변수 
		포인터 선언, 대입, 연산, 증감연산자 
		98%은 소스코드, 2%, 즉 1문제는 포인터 이론 191, 214
	*/
	
	int n, i, sum=0;
	
	printf("for문 사용\n");
	printf("정수를 입력하세요... ");
	scanf("%d", &n);
	if(n<=0) {
		printf("잘못 입력하셨습니다.");
	} else {
		for(i=1; i<=n; i++) {
		printf("%d\n", i);
		sum+=i;
		}
		printf("1부터 %d까지의 합계는 %d입니다.\n\n", n, sum);
	}
	sum=0;
	
	printf("while문 사용\n");
	printf("정수를 입력하세요... ");
	scanf("%d", &n);
	if(n<=0) {
		printf("잘못 입력하셨습니다.");
	} else {
		i=1;
		while(i<=n) {
			printf("%d\n", i);
			sum+=i;
			i++;
		}
		printf("1부터 %d까지의 합계는 %d입니다.\n\n", n, sum);
	}
	
	sum=0;
	printf("do&while문 사용\n");
	printf("정수를 입력하세요... ");
	scanf("%d", &n);
	if(n<=0) {
		printf("잘못 입력하셨습니다.");
	} else {
		i=1;
		do {
			printf("%d\n", i);
			sum+=i;
			i++;
		} while(i<=n);
		printf("1부터 %d까지의 합계는 %d입니다.\n\n", n, sum);
	}
	
	return 0;
}
