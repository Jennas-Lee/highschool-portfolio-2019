#include <stdio.h>

int main () {
	int calc;
	double num1, num2;
	
	printf("���� �ڵ带 �Է��ϼ���.\n");
	scanf("%d", &calc);
	
	if(calc>4 || calc<0) {
		printf("�߸� �Է��ϼ̽��ϴ�. ���α׷��� �����մϴ�.\n");
		return 0;
	}
	
	printf("�Ǽ� 2���� �Է��ϼ���.\n");
	scanf("%lf %lf", &num1, &num2);
	
	switch(calc) {
		case 1:
			printf("%lf + %lf�� %lf�Դϴ�.\n", num1, num2, num1+num2);
			break;
		case 2:
			printf("%lf - %lf�� %lf�Դϴ�.\n", num1, num2, num1-num2);
			break;
		case 3:
			printf("%lf * %lf�� %lf�Դϴ�.\n", num1, num2, num1*num2);
			break;
		case 4:			//default�� ���൵ ������. 
			printf("%lf / %lf�� %lf�Դϴ�.\n", num1, num2, num1/num2);
			break;
	}
	
	
	return 0;
}
