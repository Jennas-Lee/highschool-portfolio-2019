#include <stdio.h>

int main() {
	int arr[100];
	int i=0, sum=0, num, tmp=0;
	
	while(1) {
		printf("������ �Է��ϼ���(���� �Է½� ����) : ");
		scanf("%d", &num);
		if(num < 0) break;
		
		sum += num;
		arr[i] = num;
		i++; tmp++;
		printf("�Է��� ���ڴ� %d�̰�, ���ݱ����� �հ�� %d�Դϴ�.\n\n", num, sum);
	}
	
	printf("\n���ݱ��� �Է��� ���ڴ� ������ �����ϴ�. \n");
	for(i=0; i<tmp; i++) printf("%d \n", arr[i]);
	
	return 0;
}
