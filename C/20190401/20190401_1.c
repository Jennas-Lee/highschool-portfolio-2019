#include <stdio.h>

int main () {
	//����, �Ǽ�, �����ϳ� �����, ���� ���� �ּ�, ����+1 ��� 
	int num1, num2;
	double num3, num4;
	char ttt;
	
	printf("������ �ϳ��� �Է��ϼ���.\n");
	scanf("%c", &ttt);
	printf("�Է��� ���ڴ� %c�Դϴ�.\n", ttt);
	printf("1�� ���غ��� %c�Դϴ�.\n", ttt+1);
	printf("2�� ���غ��� %c�Դϴ�.\n", ttt+2);
	printf("3�� ���غ��� %c�Դϴ�.\n", ttt+3);
	printf("4�� ���غ��� %c�Դϴ�.\n", ttt+4);
	printf("5�� ���غ��� %c�Դϴ�.\n\n", ttt+5);
	
	printf("���� 2���� �Է��ϼ���.\n");
	scanf("%d %d", &num1, &num2);
	printf("�Է��� ���� %d, %d�̸�, �հ�� %d�Դϴ�.\n\n", num1, num2, num1+num2) ;
	
	printf("�Ǽ� 2���� �Է��ϼ���.\n");
	scanf("%lf %lf", &num3, &num4);
	printf("�Է��� ���� %lf, %lf�̸� �հ�� %lf�Դϴ�.\n\n", num3, num4, num3+num4);
	
	return 0;
}
