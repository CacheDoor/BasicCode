#include <stdio.h>
#include <commonFunction.h>
int main(int argc, char const *argv[])
{
	int a,b;
	printf("a = ");
	scanf("%d",&a); //用户输入a的值

	printf("b = ");
	scanf("%d",&b);//用户输入b的值
	printf("\n");
	add(a,b);  //调用外部函数失败 
	// implicit declaration  of function
	printf("\n");
	sub(a,b);
	printf("\n");
	printStars();
	return 0;
}