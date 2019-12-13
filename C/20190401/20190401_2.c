#include <stdio.h>

int main () {
	//복합대입연산자(증감연산자 선생, 후행) 
	int num, result;
	
	printf("정수 입력\n");
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
	
	++ num;		// num = num + 1(앞에서 실행, 후행증가연산자) 
	printf("Result : %d \n", num);
	
	-- num;		// num = num - 1(앞에서 실행, 후행증가연산자) 
	printf("Result : %d \n", num);
	
	result = num ++;
	printf("num : %d, Result : %d \n", num, result);	//++는 문장이 끝날 때 실행되므로 ++를 뒤에 사용하면 다음줄에서 실행되지 않음. 
	
	result = ++ num;
	printf("num : %d, Result : %d \n", num, result);
	
	result = num;
	printf("num : %d, Result : %d \n", num, ++result);
	
	return 0;
}
