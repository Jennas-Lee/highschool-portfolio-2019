#include <stdio.h>

int main () {
	int num;
	
	printf("������ ���� �Է��ϼ���.\n");
	scanf("%d", &num);
	printf("�Է��� ���� ");
	if(num>0){
		printf("%d�� ����Դϴ�.\n", num);
	}
	else if(num==0){
		printf("%d�� 0�Դϴ�.\n", num);
	}
	else{
		printf("%d�� �����Դϴ�.\n", num);
	}
	printf("���α׷��� �����մϴ�.");
	
	return 0;
}
