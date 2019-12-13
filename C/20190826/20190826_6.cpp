#include <stdio.h>

int main() {
	int arr[100];
	int i=0, sum=0, num, tmp=0;
	
	while(1) {
		printf("정수를 입력하세요(음수 입력시 종료) : ");
		scanf("%d", &num);
		if(num < 0) break;
		
		sum += num;
		arr[i] = num;
		i++; tmp++;
		printf("입력한 숫자는 %d이고, 지금까지의 합계는 %d입니다.\n\n", num, sum);
	}
	
	printf("\n지금까지 입력한 숫자는 다음과 같습니다. \n");
	for(i=0; i<tmp; i++) printf("%d \n", arr[i]);
	
	return 0;
}
