#include <stdio.h>
#include <stdlib.h>

//求两个数的最大公约数和最小公倍数
int main(int argc, char const *argv[])
{
	int m,n,t,r;
	int m1,n1;
	printf("请输入求最大公约数的两个数:\n");
	scanf("%d%d",&m,&n);
	m1 = m;
	n1 = n;
	if(m < n){  //如果m小于n 则交换m,n的值
		t = m;
		m = n;
		n = t;
	}

	do {
		r = m % n;
		m = n;
		n = r;
	}while(r != 0);

	printf("一个数%d,另一个数%d的最大公约数是:%d\n",m1,n1,m);
	printf("一个数%d,另一个数%d的最小公倍数数是:%d\n",m1,n1,(m1*n1)/m);
	return 0;
}