#include <stdio.h>

int main() {
	int i, j, num;
	printf("���� 1���� �Է��ϼ���.\n");
	scanf("%d", &num);
	
	for(i=1; i<=num; i++){
		for(j=1; j<=i; j++){
			printf("*");
		}
		printf("\n");
	}
	
	
	return 0;
}
