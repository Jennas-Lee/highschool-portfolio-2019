#include <stdio.h>				//�Է¹��� �������� �հ� 

int main() {
	int i;						//for�� �ȿ��� �����ϴ� �� 
	int sum = 0;
	int num;
	
	printf("���� 1���� �Է��ϼ���.\n");
	scanf("%d", &num);
	
	for(i=1; i<=num; i++){	 
		printf("%d\n", i);		//i�� ���
		sum += i;				//i�� ���� 
	}
	
	printf("%d ������ ���� �հ�� %d�Դϴ�.\n", num, sum);

	
	return 0;
}
