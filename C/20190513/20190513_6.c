#include <stdio.h>

int main() {
	double score1, score2, score3, score4, sum, avg;
	
	printf("���� 4���� �Է��ϼ���.\n");
	scanf("%lf %lf %lf %lf", &score1, &score2, &score3, &score4);
	
	sum = score1 + score2 + score3 + score4;
	avg = sum / 4;
	
	printf("�հ�� %lf�Դϴ�.\n", sum);
	printf("����� %lf�Դϴ�.\n", avg);
	
	if(avg<0 || avg>100) {
		printf("�߸� �Է��ϼ̽��ϴ�.\n");
		printf("���α׷��� �����մϴ�.\n");
		return 0;
	}
	else if(avg==100) {
		printf("S�Դϴ�.\n");
	}
	else if(avg>=90) {
		printf("A�Դϴ�.\n");
	}
	else if(avg>=80) {
		printf("B�Դϴ�.\n");
	}
	else if(avg>=70) {
		printf("C�Դϴ�.\n");
	}
	else if(avg>=60) {
		printf("D�Դϴ�.\n");
	}
	else{
		printf("F�Դϴ�.\n");
	}
	
	printf("���α׷��� �����մϴ�.\n");

	return 0;
}
