#include <stdio.h>

int main() {
	int n, i, sum=0, arr[1001];
	
	while(1) {
		printf("������ �Է��ϼ���... ");
		scanf("%d", &n);
		if(n<=0) {
			printf("�߸� �Է��ϼ̽��ϴ�.\n\n");
		} else {
			for(i=1; i<=n; i++) {
				sum+=i;
				arr[i]=i;
			}
			printf("1���� %d������ �հ�� %d�Դϴ�.\n\n", n, sum);
			break;
		}
	}
	
	for(i=1; i<=n; i++) printf("%d ", arr[i]);
	printf("\n");
	for(i=n; i>=1; i--) printf("%d ", arr[i]);
	
	return 0;
}
