#include <stdio.h>

int main () {
	int num; //���� if��  
	
	printf("���ڸ� �Է��ϼ���. (1 : Orange, 2 : Banana, 3 : Apple) \n");
	scanf("%d", &num);
	
	if(num==1){
		printf("Orange \n");
	}
	if(num==2){
		printf("Banana \n");
	}
	if(num==3){
		printf("Apple \n");
	}
	
	return 0;
}
