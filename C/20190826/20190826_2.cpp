#include <stdio.h>

int main() {
	int num[5];
	int i, sum=0;
	
	for(i=0;  i<5; i++) {
		printf("%d��° ������ �Է��ϼ��� : ", i+1);
		scanf("%d", &num[i]);
	}
	
	for(i=0; i<5; i++) {
		printf("num[%d] = %d\n", i, num[i]);
		sum += num[i];
	}
	printf("sum : %d", sum);
	
	return 0;
}
