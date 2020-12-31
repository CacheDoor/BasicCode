#include <stdio.h>
#define N 3
int main(int argc, char const *argv[])
{
	int a[N][N];
	int i,j;
	printf("请输入矩阵3*3个元素:\n");
	for (int i = 0; i < N; ++i)
	{
		for (int j = 0; j < N; ++j)
		{
			// a[i][j] = 4*i+j;
			scanf("%d",&a[i][j]);
		}
	}

	//输出矩阵中的值
	for (int i = 0; i < N; ++i)
	{
		printf("矩阵对角线上的值是:%d\n",a[i][i]);
	}
	return 0;
}