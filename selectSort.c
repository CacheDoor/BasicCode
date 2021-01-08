#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 20
void selectSort(char *arr,int count){
	int pos;
	int i,j;
	char temp;
	for (int i = 0; i < count-1; ++i) //控制轮数
	{
		pos = i;
		temp = arr[pos]; //将当前i的元素保存到临时变量中
		for (int j = i+1; j < count; ++j) //控制每轮要比较的次数
		{
			if(arr[j] < temp){ //假定第一个元素最小 然后比较
				pos = j; //如果当前元素arr[j] 小于假定的第一个元素
				temp = arr[j]; //则保存新的最小的字符的值
			}
		}
		arr[pos] = arr[i];	
		arr[i] = temp;
		printf("输出结果：[%s]\n",arr );
	}
}
//选择排序是从排序的元素中选出最下的一个元素交换，然后从剩下的元素中国
//选出最小的一个和第二个元素交换顺序，重复这种处理的办法	，直到最后一个元素
int main(int argc, char const *argv[])
{
	char arr[MAX];
	int count;
	printf("请输入要参与比较的字符：\n");
	gets(arr);
	count = strlen(arr);
	selectSort(arr,count);
	return 0;
}