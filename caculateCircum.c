#include <stdio.h>
#include <math.h>
#define PI 3.14;
/*简单计算圆的周长*/
int main(int argc, char const *argv[])
{
	int radius; //定义半径
	int circum; //定义周长
	radius = 10;
	circum = radius*2*PI; //计算周长
	printf("-----------------------------\n");
	printf("radius is %d,circum is %f\n",radius,circum);
	printf("-----------------------------\n");
	return 0;
}