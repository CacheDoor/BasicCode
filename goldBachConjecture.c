/*
* @Author: Jeffrey Wang
* @Date:   2021-01-11 09:09:39
* @Email:  wpgraceii@163.com
* @Last Modified by:   Jeffery Wang
* @Last Modified time: 2021-01-11 09:40:41
* @Description:  Gold Bach Conjecture
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define TURE 1
#define FLASE 0

//判断是不是素数
int isPrimer(unsigned long n){
	unsigned long i;
	unsigned long nsqrt;

	if(2 == n){
		return TURE;
	}

	if(1 == n ||  n %2 == 0){
		return FLASE;
	}

	nsqrt = (unsigned long)sqrt(n);

	for (i = 3; i <= nsqrt; ++i)
	{
		if( n % i == 0){
			return FLASE;
		}
	}
	return TURE;
}

//判断是否符合哥德巴赫猜想  i是素数  n-i 也是素数的话  n就是符合哥德巴赫猜想的数
int isRight(unsigned long n, unsigned long *tmpNumA,unsigned long *tmpNumB){

	unsigned long i;
	unsigned long half;
	half = n / 2; //n必须要是偶数
	for (i = 3; i <= half; ++i)
	{
		if(isPrimer(i) && isPrimer(n - i)){
			*tmpNumA = i;
			*tmpNumB = n-i;
			return TURE;
		}
	}
	return FLASE;
}


int main(int argc, char const *argv[])
{
	unsigned long n;
	unsigned long a,b;
	do{
		printf("请输入要判断是否符合哥德巴赫猜想的数:\n");
		scanf("%lu",&n);
		if(n >= 6 && (n % 2 == 0)){
			if(isRight(n,&a,&b)){
				printf("你输入的数符合哥德巴赫猜想\n");
				printf("%lu=%lu+%lu\n",n,a,b);
			}
		}else{
			printf("你输入的数不符合要求\n");
		}
	}while(n != 0);
	return 0;
}