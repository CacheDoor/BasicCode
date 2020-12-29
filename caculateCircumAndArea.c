#include <stdio.h>
#include <math.h>
#define PI 3.14
int main(int argc, char const *argv[])
{
	float r; //定义半径
	printf("please enter radius:\n");
	scanf("%f",&r);
	printf("Here will show circum and area:\n");
	printf("circum is %f,area is %f",2*PI*r,PI*r*r);
	printf("--------------------------------\n");
	return 0;
}