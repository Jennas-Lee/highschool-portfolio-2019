#include <stdio.h>

int main () {
	int number1, score=100, number2;
		//������ ���� ���� �� ���
		number1 = 150;										//��ȣ �����ʿ� �ִ� ���� ���ʿ� ����, �������� �ѱ۷� �����Ҽ�����, ���ڷ� �����Ҽ�����, main, return���� ��������� 
			printf("�Է��� ���ڴ� %d�Դϴ�.\n", score); 

		number2 = score + 25;
			printf("�Է��� ���ڴ� %d�Դϴ�.\n", number2); 

	double num3, num4;
		//�Ǽ��� ���� ���� �� ���(������ float��� double�� �ַ� ���)
		num3 = 99.999;
		num4 = 80.123;
			printf("�Ǽ�1 = %lf, �Ǽ�2 = %lf\n", num3, num4);
	
	char c1, c2;
		//������ ���� ���� �� ��� 
		c1 = 'G';
		c2 = 'B';
			printf("���� = %c, %c \n", c1, c2);

			
	return 0;
}
