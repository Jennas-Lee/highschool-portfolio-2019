#include <stdio.h>

int main() {
	double score1, score2, sum, avg;
	printf("���� 2���� �Է��ϼ���.\n");
	scanf("%lf %lf", &score1, &score2);
	
	sum = score1 + score2;
	avg = sum / 2;\
	
	if(score1<0 || score1>100 || score2<0 || score2>100) {
		printf("�߸� �Է��ϼ̽��ϴ�.\n");
		printf("���α׷��� �����մϴ�.");
		return 0;
	}
	
	printf("���� 2���� %lf, %lf�̰�, �հ�� %lf, ����� %lf�Դϴ�.\n", score1, score2, sum, avg);
	
	if(avg >= 50) {
		printf("�հ��Դϴ�. �����մϴ�.\n");
	}
	else if(avg>=40) {
		printf("ĿƮ�����Դϴ�.\n");
	}
	else {
		printf("���հ��Դϴ�.\n");
	}
	
	printf("���α׷��� �����մϴ�.");
	return 0;
}
