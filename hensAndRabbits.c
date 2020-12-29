#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
	int h,f,m,n;
	printf("请输入鸡和兔子的总头数:\n");
	scanf("%d",&h);
	printf("请输入鸡和兔子的总脚数:\n");
	scanf("%d",&f);

	m = (4*h - f)/2; //鸡的数量
	n = (f - 2*h)/2; //兔子的数量

	printf("鸡的数量是:%d,兔子的数量是:%d\n",m,n );

	return 0;
}
