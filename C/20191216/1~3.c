#include <stdio.h>

int main() {
	int i, num=1, sum=0;
	printf("������ �Է��ϼ���. \n");
	scanf("%d", &i);
	if(i<=0) {
		printf("�߸� �Է��ϼ̽��ϴ�.");
		return 0;
	}
	do {
		sum += num;
		printf("%3d", num++);
	}while(num != i+1);
	printf("\nsum = %d", sum);	
	return 0;
}
