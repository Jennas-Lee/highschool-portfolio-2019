#include <stdio.h>

int main() {
	int calc;
	double num1, num2;
	
	printf("�Ǽ� 2���� �Է��ϼ���. \n");
	scanf("%lf %lf", &num1, &num2);
	printf("���� �ڵ带 �Է��ϼ���.(1 : ����, 2 : ����, 3 : ����, 4 : ������) \n");
	scanf("%d", &calc);
	
	switch(calc) {
		case 1:
			printf("%lf + %lf��%lf�Դϴ�.\n", num1, num2, num1+num2);
			break;
		case 2:
			printf("%lf - %lf��%lf�Դϴ�.\n", num1, num2, num1-num2);
			break;
		case 3:
			printf("%lf * %lf��%lf�Դϴ�.\n", num1, num2, num1*num2);
			break;
		case 4:
			printf("%lf / %lf��%lf�Դϴ�.\n", num1, num2, num1/num2);
			break;
		default:
			printf("���� �ڵ带 �߸� �Է��ϼ̽��ϴ�. \n");
	}
	
	printf("���α׷��� �����մϴ�. \n");
	return 0;
}
