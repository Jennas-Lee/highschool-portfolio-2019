#include <stdio.h>

int main() {
	int i=0, temp=0;
	char arr1[100]="SMC AI GOGOGO", arr2[100]="gogogo";
	
	// strcmp
	while(arr1[i]!='\0') {
		if(arr1[i]!=arr2[i]) {
			temp=1;
			break;
		}
		i++;
	}
	if(temp==1) {
		printf("�� ���ڿ��� �ٸ��ϴ�.\n");
	} else {
		printf("�� ���ڿ��� �����ϴ�.\n");
	}
	
	temp=0, i=0;
	// strlen
	while(arr1[i]!='\0') {
		i++;
	}
	printf("ù��° ���ڿ��� ���� : %d\n", i);
	i=0;
	while(arr2[i]!='\0') {
		i++;
	}
	printf("�ι�° ���ڿ��� ���� : %d\n", i);
	
	// strrev
	i=0;
	while(arr1[i]!='\0') {
		i++;
	}
	i--;
	while(i>=0) {
		printf("%c", arr1[i]);
		i--;
	}
	printf("\n");
	i=0;
	while(arr2[i]!='\0') {
		i++;
	}
	i--;
	while(i>=0) {
		printf("%c", arr2[i]);
		i--;
	}
	printf("\n");
	
	// REVERSE
	i=0;
	while(arr1[i]!='\0') {
		if(arr1[i]>=97) {
			printf("%c", arr1[i]-32);
		} else if(arr1[i]>=65) {
			printf("%c", arr1[i]+32);
		} else {
			printf("%c", arr1[i]);
		}
		i++;
	}
	printf("\n");
	i=0;
	while(arr2[i]!='\0') {
		if(arr2[i]>=97) {
			printf("%c", arr2[i]-32);
		} else if(arr1[i]>=65) {
			printf("%c", arr2[i]+32);
		} else {
			printf("%c", arr2[i]);
		}
		i++;
	}
	
	
	
	return 0;
}
