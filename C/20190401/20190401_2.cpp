#include <stdio.h>

int main () {
	//���մ��Կ�����(���������� ����, ����) 
	int num, result;
	
	printf("���� �Է�\n");
	scanf("%d", &num);
	printf("Result : %d \n", num);

	num = num+30;
	printf("Result : %d \n", num);
	
	num += 30;	// num = num + 30;
	printf("Result : %d \n", num);
	
	num -= 30;	// num = num - 30;
	printf("Result : %d \n", num);
	
	num *= 3;	// num = num * 3;
	printf("Result : %d \n", num);
	
	num /= 3;	// num = num / 3;        
	printf("Result : %d \n", num);
	
	num ++;		// num = num + 1
	printf("Result : %d \n", num);
	
	num --;		// num = num - 1
	printf("Result : %d \n", num);
	
	++ num;		// num = num + 1(�տ��� ����, ��������������) 
	printf("Result : %d \n", num);
	
	-- num;		// num = num - 1(�տ��� ����, ��������������) 
	printf("Result : %d \n", num);
	
	result = num ++;
	printf("num : %d, Result : %d \n", num, result);	//++�� ������ ���� �� ����ǹǷ� ++�� �ڿ� ����ϸ� �����ٿ��� ������� ����. 
	
	result = ++ num;
	printf("num : %d, Result : %d \n", num, result);
	
	result = num;
	printf("num : %d, Result : %d \n", num, ++result);
	
	return 0;
}
