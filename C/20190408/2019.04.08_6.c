#include <stdio.h>

int main () {
	int age; // 실습예제2 
	
	printf("나이를 입력하세요. \n");
	scanf("%d", &age);
	printf("입력한 나이는 %d살입니다. \n", age);
	
	if(age>=20) {
		printf("성인입니다. \n");
	}
	
	else {
		printf("미성년자입니다. \n");
	}
	
	return 0;
}
