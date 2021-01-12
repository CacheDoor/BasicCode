#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
	char str[15];
	printf("请输入字符串:\n");
	gets(str);
	printf("输入的字符串是:\n");
	puts(str);
	return 0;
}	