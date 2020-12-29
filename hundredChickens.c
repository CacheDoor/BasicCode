#include <stdio.h>
#include <stdlib.h>

//一百块钱买鸡的问题 一只公鸡5块 一只母鸡 3块 3只小鸡1块  问100块能买多少只公鸡，母鸡，小鸡
//问题分析: 100块最多买20只公鸡  33只母鸡 只需要了解两个量便可以知道第三个量
//设有x只公鸡，y只母鸡，通过循环去计算
int main(int argc, char const *argv[])
{
	int x,y,z;

	for(x=0;x<=20;x++){ //公鸡可能的只数
		for(y=0; y <= 33; y++){
			z = 100 - x - y;
			if(100 == (5*x + 3*y + z /3.0)){
				printf("公鸡的只数是:%d,母鸡的只数是:%d,小鸡的指数是%d\n", x,y,z);
			}
		}
	}
	return 0;
}