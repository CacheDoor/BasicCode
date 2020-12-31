//An array of reverse(simple version)

#include <stdio.h>
#include <stdlib.h>

#define N 5

int main(int argc, char const *argv[])
{
	int a[N] = {1,3,6,7,9};
	int i,temp;
	printf("原数组的值是:");
	for(i=0;i<N;i++){
		printf("%4d",a[i]);
	}
	//change array elements  中间不变 只要交换
	for(i=0;i<N/2;i++){
		temp = a[i];
		a[i] = a[N-i-1];
		a[N-i-1] = temp;
	}

	printf("现在数组的值是:");
	for(i=0;i<N;i++){
		printf("%4d",a[i]);
	}
	return 0;
}