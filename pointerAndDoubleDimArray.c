#include <stdio.h>
//需要多看看  复习
int main(int argc, char const *argv[])
{
	int a[2][3] = {1,2,3,4,5,6};
	int i,j,*p;
	//p = a;  这个是错误的 
	p = &a[0][0];
	printf("使用下标访问数组的值\n");
	for (int i = 0; i < 2; ++i)
	{
		for (int j = 0; j < 3; ++j)
		{
			printf("数组a[%d][%d]元素的值是%d\n",i,j,a[i][j]);
		}
	}

	printf("使用数组名访问数组的值\n");
	for (int i = 0; i < 2; ++i)
	{
		for (int j = 0; j < 3; ++j)
		{
			//note：可能会理解*(a+i)为取值操作 因为 a是首地址 +i是偏移 偏移后并不能确定哪一个值 必须要有j的参与
			printf("数组a[%d][%d]元素的值是%d\n",i,j,*(*(a+i)+j));
		}
	}

	printf("使用指针名访问数组的值\n");
	for (int i = 0; i < 2; ++i)
	{
		for (int j = 0; j < 3; ++j)
		{
			printf("数组a[%d][%d]元素的值是%d\n",i,j,*(p+3*i+j));
		}
	}
	return 0;
}