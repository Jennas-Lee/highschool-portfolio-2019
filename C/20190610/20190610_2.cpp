#include <stdio.h>

int main() {
	int i;
	int sum1 = 0;			//짝수합계 
	int sum2 = 0;			//홀수합계 
	
	for(i = 1; i<=100; i++){
		if(i%2 == 0){
			printf("i = %d \n", i);
			sum1 += i;
		}
		else{
			sum2 += i;
		} 
	}
	
	
	printf("1부터 100까지의 짝수 합계는 %d입니다. \n", sum1);
	printf("1부터 100까지의 홀수 합계는 %d입니다. \n", sum2);
	
	
	return 0;
}
