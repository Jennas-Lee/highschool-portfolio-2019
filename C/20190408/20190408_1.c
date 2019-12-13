#include <stdio.h>

int main () { // 복합대입, 선후행증감연산자 
	int num = 10, r;
	printf("정수 = %d \n", num);
	
	num+=5;		// num = num + 5
	printf("정수 = %d \n", num);
	
	num-=5;		// num = num - 5
	printf("정수 = %d \n", num);
	
	num*=5;		// num = num * 5
	printf("정수 = %d \n", num);
	
	num/=5;		// num = num / 5
	printf("정수 = %d \n", num);
	
	num++;
	printf("정수 = %d \n", num);
	
	num--;
	printf("정수 = %d \n", num);
	
	++num;
	printf("정수 = %d \n", num);
	
	--num;
	printf("정수 = %d \n", num);
	
	printf("정수 = %d \n", ++num);
	printf("정수 = %d \n", num);
	
	printf("정수 = %d \n", --num);
	printf("정수 = %d \n", num);
	
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
