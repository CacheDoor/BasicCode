#include <stdio.h>

int max(int x,int y);

//指向函数的指针
int main(int argc, char const *argv[])
{
	int (*p)(int ,int );
	int a,b,c;
	p = max; //用整形指针变量保存函数的地址
	printf("请输入a和b的值\n");
	scanf("%d%d",&a,&b);
	c = p(a,b);
	printf("a和b的最大值是%d\n",c );
	return 0;
}


int max(int x, int y){
	int z;
	if(x > y){
		z = x;
	}else{
		z = y;
	}
	return z;
}