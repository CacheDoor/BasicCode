#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
	int a[10] = {1,2,3,4,5,6,7,8,9,10};
	int i;
	int *p;
	p = &a[0];

	//使用数组下标访问数组的元素
	for (int i = 0; i < 10; ++i)
	{
		printf("数组的第%d个元素的值是%d\n",i+1,a[i]);
	}

	//通过指针运算法*获取数组元素的值
	for (int i = 0; i < 10; ++i)
	{
		printf("数组的第%d个元素的值是%d\n",i+1,*(p+i));
	}

	return 0;
}