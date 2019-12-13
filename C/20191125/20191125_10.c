#include <stdio.h>
#include <stdlib.h>

int main() {
	int arr[25], i, min=100, max=0;
	
	for(i=0; i<25; i++) {
		arr[i]=rand()%100+1;
		if(arr[i]>max) max=arr[i];
		if(arr[i]<min) min=arr[i];
	}
	printf("MAX=%d, MIN=%d", max, min);
	
	return 0;
}
