#include <stdio.h>

int value=30;
int student=26;
int count=0;

void asc(int k) {
	int value=50;
	value+=20;
	printf("Call : %d\n", ++count);
}
void print() {
	printf("Call : %d\n", ++count);
}

int main() {
	int value=10;
	printf("1.??? = %d\n", value);
	{
		int value=5;
		printf("2.??? = %d\n", value);
		value+=2;
	}
	asc(value);
	print();
	printf("3.??? = %d\n", value);
	asc(value);
	
	return 0;
}
