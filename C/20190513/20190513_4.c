#include <stdio.h>

int main () {
	int score;
	
	printf("������ �Է��ϼ���. \n");
	scanf("%d", &score);
	
	if(score>0 || score<100){
		if(score>=90) {
			printf("A");
		}
		else if(score>=80) {
			printf("B");
		}
		else if(score>=60) {
			printf("C");
		}
		else if(score>=40) {
			printf("D");
		}
		else if(score>=20) {
			printf("E");
		}
		else {
			printf("F");
		}
	
		printf("���� �Դϴ�.\n");
	}
	
	else{
		printf("�߸� �Է��ϼ̽��ϴ�.\n");
	}
	
	printf("���α׷��� �����մϴ�. \n");
	
	return 0;
}
