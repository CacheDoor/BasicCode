#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
	int a,b,c;
	int d;
	int i;

	// printf("请输入最大范围值:\n");
	// scanf("%d\n",&d);
	//d必须小于1000 大于100
	printf("水仙花数如下:\n");
	for(i = 100;i<1000;i++){
		a = i % 10;// 除以10取余 取个位
		b = (i /10) % 10;  //
		c = i / 100;
		if( i == (a*a*a + b*b*b + c*c*c)){
			printf("%d\t",i);
		}
	}

	return 0;
}