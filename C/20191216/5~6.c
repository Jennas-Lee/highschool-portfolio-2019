#include <stdio.h>

int main() {
	int number[100];
	int i=0, result=0, num;
	while(1){
		printf("정수를 입력하세요. \n");
		scanf("%d", &number[i]);
		if(number[i] < 0) break;
		result += number[i];
		i++;
	}
	printf("result = %d \n", result);
	
	for(i--; i>=0; i--) {
		printf("number[%d] = %d \n", i, number[i]);
	}
	return 0;
}
