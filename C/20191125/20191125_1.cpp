#include <stdio.h>

int main() {
	/*
		for������ �پ��� �ﰢ�� ��� 
		�迭 ��� 
		string �Լ� ��� 
		gets�� scanf�� �ٸ� �� 
		2���� �迭 
		����� ���� �Լ� 
		����Լ� 
		���������� �������� 
		������ ����, ����, ����, ���������� 
		98%�� �ҽ��ڵ�, 2%, �� 1������ ������ �̷� 191, 214
	*/
	
	int n, i, sum=0;
	
	printf("for�� ���\n");
	printf("������ �Է��ϼ���... ");
	scanf("%d", &n);
	if(n<=0) {
		printf("�߸� �Է��ϼ̽��ϴ�.");
	} else {
		for(i=1; i<=n; i++) {
		printf("%d\n", i);
		sum+=i;
		}
		printf("1���� %d������ �հ�� %d�Դϴ�.\n\n", n, sum);
	}
	sum=0;
	
	printf("while�� ���\n");
	printf("������ �Է��ϼ���... ");
	scanf("%d", &n);
	if(n<=0) {
		printf("�߸� �Է��ϼ̽��ϴ�.");
	} else {
		i=1;
		while(i<=n) {
			printf("%d\n", i);
			sum+=i;
			i++;
		}
		printf("1���� %d������ �հ�� %d�Դϴ�.\n\n", n, sum);
	}
	
	sum=0;
	printf("do&while�� ���\n");
	printf("������ �Է��ϼ���... ");
	scanf("%d", &n);
	if(n<=0) {
		printf("�߸� �Է��ϼ̽��ϴ�.");
	} else {
		i=1;
		do {
			printf("%d\n", i);
			sum+=i;
			i++;
		} while(i<=n);
		printf("1���� %d������ �հ�� %d�Դϴ�.\n\n", n, sum);
	}
	
	return 0;
}
