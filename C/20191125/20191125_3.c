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
			for(i=n; i>0; i--) {
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
			i=n;
			while(i>0) {
				printf("%d\n", i);
				sum+=i;
				i--;
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
			i=n;
			do {
				printf("%d\n", i);
				sum+=i;
				i--;
			} while(i>0);
			printf("1���� %d������ �հ�� %d�Դϴ�.\n\n", n, sum);
			break;
		}
	}
	
	return 0;
}
