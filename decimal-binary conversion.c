#include <stdio.h>

/*
Author:Jeffrey Wang
Date:2020/12/24
Function:decimal-binary conversion
*/
int main(int argc, char const *argv[])
{
	unsigned int a = 10;
	unsigned int b = 013;
	unsigned int c = 0x12;
	printf("十进制%u转换为八进制为%o和十六进制为%x\n",a,a,a);
	printf("八进制%o转换为十进制为%u和十六进制为%x\n",b,b,b);
	printf("十六进制%x转换为八进制为%o和十进制为%u\n",c,c,c);
	return 0;

}