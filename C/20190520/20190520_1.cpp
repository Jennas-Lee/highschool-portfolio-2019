#include <stdio.h>

int main() {
	int fruit;
	
	printf("������ �Է��ϼ���.\n");
	scanf("%d", &fruit);
	
	switch(fruit) {
		case 1:
			printf("���");
			break;											//break�� ������ ���ڸ� �Է��ص� break�� ������ case���� ��� ����
		case 2:
			printf("����");
			break;
		case 3:
			printf("����");
			break;
		case 4:
			printf("�ٳ���");
			break;
		default:
			printf("�߸� �Է��ϼ̽��ϴ�.");
	}
	
	printf("\n���α׷��� �����մϴ�.\n");
	return 0;
}
