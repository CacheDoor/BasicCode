#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int bubble(char *,int);
#define MAX 21
int main(int argc, char const *argv[])
{
	char arr[MAX];
	int count;
	printf("请输入要排序的字符串:\n");
	gets(arr);
	count = strlen(arr);
	//开始排序
	bubble(arr,count);
	return 0;
}

//冒泡排序的原理  小的泡泡浮到上面  大的泡泡沉到下面
int bubble(char *arr,int count){
	int i,j;
	char temp;
	for (int j = count; j > 1; j--) //外层循环比较轮数
	{
		for (int i = 0; i < j-1; i++) //里层循环控制本轮比较的次数
		{
			if(arr[i+1] < arr[i]){
				temp = arr[i+1];
				arr[i+1] = arr[i];
				arr[i]   = temp;
			}
		}
	}
	printf("输出结果[%s]\n",arr );
	return 0;
}