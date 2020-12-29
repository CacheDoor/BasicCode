#include <stdio.h>
#include <stdlib.h>

//打印金字塔
int main(int argc, char const *argv[])
{
	
	//首先分析金字塔总共5层
	//一个循环控制输出星号 一个循环控制空格
	//第一行本来有9个星号  但是只显示了一个 第二行只显示了三个  1,3,5,7,9
	int  i,j,k;

	for(i=1; i<=5; i++){
		for(j=1;j<=5-i;j++){ //when i equal to 1  ,the result is five blank
			printf(" ");
		}

		for(k=1;k<=2*i-1;k++){ //when i equal to 1, the result is one star(asterisk)
			printf("*");
		}
		printf("\n");
	}
	return 0;
}