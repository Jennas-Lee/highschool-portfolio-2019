#include <stdio.h>

int main() {
	int i;
	int sum1 = 0;			//¦���հ� 
	int sum2 = 0;			//Ȧ���հ� 
	
	for(i = 1; i<=100; i++){
		if(i%2 == 0){
			printf("i = %d \n", i);
			sum1 += i;
		}
		else{
			sum2 += i;
		} 
	}
	
	
	printf("1���� 100������ ¦�� �հ�� %d�Դϴ�. \n", sum1);
	printf("1���� 100������ Ȧ�� �հ�� %d�Դϴ�. \n", sum2);
	
	
	return 0;
}
