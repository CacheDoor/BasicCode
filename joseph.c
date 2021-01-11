/*
* @Author: Jeffrey Wang
* @Date:   2021-01-11 10:11:29
* @Email:  wpgraceii@163.com
* @Last Modified by:   Jeffery Wang
* @Last Modified time: 2021-01-11 12:33:01
* @Description: 
*/
#include <stdio.h>
#include <stdlib.h>
#include <dos.h>
#define MAX 30

void init(){
	int i;
	int Monkey[MAX];
	//初始化数据
	for (i = 0; i < MAX; ++i)
	{
		Monkey[i] = i+1;
	}

	//输出数据
	for (i = 0; i < MAX; ++i)
	{
		printf("%d \n", Monkey[i]);
	}
	printf("\n");
}

void output(){
	int i;
	int Monkey[MAX];
	printf("猴子淘汰出圈的顺序是:\n\r");
	for (i = MAX-1;i>0;i--)
	{
		printf("第   %3d     只猴子出圈！\n\r",Monkey[i]);
	}
	printf("猴王是：第   %3d     只猴子！\n\r",Monkey[i+1]);
}


int main(int argc, char const *argv[])
{
	int i,j,k,temp;
	int Monkey[MAX],S;
	init();
	printf("请输出出队的序数:\n");
	scanf("%d",&S);
	for (i=MAX-1; i>=0; i--)
	{
		for (k = 1; k <= S; k++)
		{
			temp = Monkey[0];
			for (j= 0; j < i; j++)
			{
				Monkey[j]=Monkey[j+1];
			}
			Monkey[i] = temp;
		}
	}
	output();
	return 0;
}