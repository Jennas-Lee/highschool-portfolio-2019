#include <stdio.h>

int main() {	
	int n, i, sum=0;
	
	printf("for�� ���\n");
	while(1) {
		printf("������ �Է��ϼ���... ");
		scanf("%d", &n);
		if(n<=0) {
			printf("�߸� �Է��ϼ̽��ϴ�.\n\n");
		} else {
			for(i=1; i<=n; i++) {
			printf("%d\n", i);
			sum+=i;
			}
			printf("1���� %d������ �հ�� %d�Դϴ�.\n\n", n, sum);
			break;
		}
	}
	
	sum=0;
	
	printf("while�� ���\n");
	while(1) {
		printf("������ �Է��ϼ���... ");
		scanf("%d", &n);
		if(n<=0) {
			printf("�߸� �Է��ϼ̽��ϴ�.\n\n");
		} else {
			i=1;
			while(i<=n) {
				printf("%d\n", i);
				sum+=i;
				i++;
			}
			printf("1���� %d������ �հ�� %d�Դϴ�.\n\n", n, sum);
			break;
		}
	}
	
	sum=0;
	
	printf("do&while�� ���\n");
	while(1) {
		printf("������ �Է��ϼ���... ");
		scanf("%d", &n);
		if(n<=0) {
			printf("�߸� �Է��ϼ̽��ϴ�.\n\n");
		} else {
			i=1;
			do {
				printf("%d\n", i);
				sum+=i;
				i++;
			} while(i<=n);
			printf("1���� %d������ �հ�� %d�Դϴ�.\n\n", n, sum);
			break;
		}
	}
	
	return 0;
}
