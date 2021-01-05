#include <stdio.h>
#include "common.h"

int main(int argc, char const *argv[])
{
	int raidus;
	float circule;
	printf("请输入半径的值: \n");
	scanf(PD,&raidus);
	circule = 2*PI*raidus;
	printf(PF,circule);
	printf(NEWLINE);
	return 0;
}