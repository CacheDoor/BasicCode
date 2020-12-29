#include <stdio.h>
#include <stdlib.h>

/*
计算函数的值
*/
int main(int argc, char const *argv[])
{
	int a =1,b=5;
	float x,y;
	printf("请输入X的值:\n");
	scanf("%f",&x);
	y = x >= -10 ? (-a)*(b+x) : 3/((a*a*a+x*x*x)*b);
	printf("y的值是:%0.2f\n",y);
	return 0;
}
