#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char const *argv[])
{
	int a;
	srand((unsigned)time(NULL));
	a = rand() % 10;
	char b[10][50] ={"雷杨","周坤庭","王晨","李辉阳","周永杰","彭雅浩","刘子杰","丰世强","王晓","罗国栋"}; 
	printf("随机选择的同学是：%s\n",b[a]);
	printf("a is :%d\n",a); 
	return 0;
}