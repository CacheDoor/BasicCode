#include <stdio.h>


//杨辉三角  第一行和对角线上的数都是1 其他的数都是上一行同一列和前一列的两个数之和
int main(int argc, char const *argv[])
{
	//首先定义一个二维数组
	int a[10][10],i=0,j=0;

	//第一行和对角线上的数都是1
	for (int i = 0; i < 10; ++i)
	{
		a[i][0] = 1;
		a[i][i] = 1;
	}
	
	//设置其他行的数
	for (int i = 0; i < 10; ++i)
	{
		for (int j = 1; j < 10; ++j)
		{
			if(i != j){
				a[i][j] = a[i-1][j-1]+a[i-1][j]; //上一行同一列和前一列的两个数之和
			}
		}
		
	}

	//输出杨辉三角的值
	for (int i = 0; i < 10; ++i)
	{
		for (int j = 0; j < 10; ++j)
		{
			printf("%5d",a[i][j] );
		}
		printf("\n");	
	}
	return 0;
}