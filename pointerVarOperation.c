#include <stdio.h>


//指针变量自运算
int main(int argc, char const *argv[])
{
	
	int a = 1,b = 10;
	int *p1,*p2;
	p1 = &a;
	p2 = &b;

	printf("p1的地址是%d,p1存储的值是%d\n", p1,*p1);
	printf("p2的地址是%d,p2存储的值是%d\n", p2,*p2);
	printf("p1-1(向左移)存储的值是%d\n", *(p1-1));
	printf("p1地址中的值-1后的值是%d\n", *p1-1);
	return 0;
}