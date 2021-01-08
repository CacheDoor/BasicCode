#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 20

//插入排序法是对排序元素的前两个元素排序，然后将第三个元素插入以及
//排好序的两个元素中，所以这3个元素仍然是从小到大排序
//接着将第四个元素插入，重复操作，直到所有的元素都排好序
void insertSort(char *arr,int count){
	int i,j;
	char temp;
	for (int i = 1; i < count; ++i)
	{
		temp = arr[i]; //保存第一个元素
		j = i-1;
		while(j >= 0 && temp <arr[j]){ //如果i=2 j = 1
			//arr[i] => arr[2] | arr[j] => arr[1]
			//将两个元素交换位置
			arr[j+1] = arr[j];
			//arr[i]继续与下一个元素比较
			j--;
		}
		arr[j+1] = temp;
		printf("输出结果：[%s]\n",arr);
	}
}



int main(int argc, char const *argv[])
{
	char arr[MAX];
	int count;
	printf("请输入要参与排序的字符:\n");
	gets(arr);
	count = strlen(arr);
	insertSort(arr,count);	
	return 0;
}