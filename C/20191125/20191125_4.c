#include <stdio.h>

int main() {
	int n, sum=0;
	
	while(1) {
		printf("������ �Է��ϼ���... ");
		scanf("%d", &n);
		if(n<0) {
			printf("���ݱ��� �Է��� ���� �հ�� %d�Դϴ�.", sum);
			return 0; 
		} else {
			sum+=n;
		}
	}
}
