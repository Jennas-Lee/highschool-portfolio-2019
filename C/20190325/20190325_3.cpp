#include <stdio.h>

int main () {
	//ǥ�� ���� �Է�
	int score_math, score_english;
	double num1;
	printf("����,���� ������ �Է��ϼ���.\n");
	scanf("%d %d", &score_math, &score_english);										//scanf �ȿ��� ,�� ���� ����. 
	printf("����� ���� ������ %d, ���� ������ %d���Դϴ�.\n", score_math, score_english);
	printf("�� �հ�� %d���Դϴ�.\n\n\n", score_math + score_english);
	
	printf("�Ǽ��� �Է��ϼ���.\n");
	scanf("%lf", &num1);
	printf("����� �Է��� �Ǽ��� %lf�Դϴ�.", num1);
	
	return 0;
}
