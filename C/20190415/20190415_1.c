#include <stdio.h>

int main () {
	int score, cut = 70;
	printf("������ �Է��ϼ���.\n");
	scanf("%d", &score);
	
	printf("�Է��� ������ %d���Դϴ�.\n", score);
	if(score >= cut) {
		printf("�հ��Դϴ�.\n");
		printf("�����K\n");
	}
	else {
		printf("���հ��Դϴ�.\n");
		printf("����\n");
	}
	
	printf("��\n");
	return 0;
}
