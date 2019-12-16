#include <stdio.h>

int val = 15;
void func(int value);

int main() {
	{
		int val = 5;
		printf("Q1 = %d \n", val++);
		val += 3;
		printf("Q2 = %d \n", val++);
	}
	func(++val);
	printf("Q4 = %d \n", val);
	return 0;
}

void func(int value) {
	printf("Q3 = %d \n", val++);
}
