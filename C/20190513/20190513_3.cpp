#include <stdio.h>

int main () {
	int num;
	printf("������ ���� �Է��ϼ���.\n");
	scanf("%d", &num);
	
	if(num%3==0 && num%5==0){
		printf("%d�� 3�� ����̸鼭 5�� ����Դϴ�.\n", num);
	}
	else if(num%3==0){
		printf("%d�� 3�� ��� �Դϴ�.\n", num);
	}
	else if(num%5==0){
		printf("%d�� 5�� ��� �Դϴ�.\n", num);
	}
	else{
		printf("%d�� 3�� ����� 5�� ����� �ƴմϴ�.\n", num);
	} 
	printf("���α׷��� �����մϴ�.");
	
	return 0;
}
