#include <stdio.h>

int main() {
	int cr;			//cr = classroom
	
	printf("����� �����İ� 1�г� ����ΰ���? \n");
	scanf("%d", &cr);
	
	if(cr>9 || cr<1) {
		printf("�����İ�� %d���� �����ϴ�. \n", cr);
		printf("���α׷��� �����մϴ�. \n");
		return 0;
	}
	
	switch(cr) {
		case 1:
		case 2:
		case 3:
			printf("%d���� ����Ʈ���ȼַ�ǰ��Դϴ�. \n", cr);
			break;
		case 4:
		case 5:
			printf("%d���� ����̽�����Ʈ������Դϴ�. \n", cr);
			break;
		case 6:
		case 7:
			printf("%d���� �ΰ����ɼ���Ʈ������Դϴ�. \n", cr);
		default: 
			printf("%d���� ���Ӽ���Ʈ������Դϴ�. \n");
			break;
	}
	
	printf("���α׷��� �����մϴ�. \n");
	return 0;
}
