#include <stdio.h>

int main () { // ���մ���, ���������������� 
	int num = 10, r;
	printf("���� = %d \n", num);
	
	num+=5;		// num = num + 5
	printf("���� = %d \n", num);
	
	num-=5;		// num = num - 5
	printf("���� = %d \n", num);
	
	num*=5;		// num = num * 5
	printf("���� = %d \n", num);
	
	num/=5;		// num = num / 5
	printf("���� = %d \n", num);
	
	num++;
	printf("���� = %d \n", num);
	
	num--;
	printf("���� = %d \n", num);
	
	++num;
	printf("���� = %d \n", num);
	
	--num;
	printf("���� = %d \n", num);
	
	printf("���� = %d \n", ++num);
	printf("���� = %d \n", num);
	
	printf("���� = %d \n", --num);
	printf("���� = %d \n", num);
	
	num = 10;
	
	r = num++;
	printf("r = %d, num = %d \n", r, num);
	
	num = 10;
	
	r = ++num;
	printf("r = %d, num = %d \n", r, num);
	
	num = 10;
	
	r = num--;
	printf("r = %d, num = %d \n", r, num);
	
	num = 10;
	
	r = --num;
	printf("r = %d, num = %d \n", r, num);
	
	return 0;
}
