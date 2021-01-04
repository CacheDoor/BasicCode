#include <stdio.h>

int main(int argc, char const *argv[])
{
	char *p,s[6]; //6 代表最多个人八进制位
	int n = 0;
	p = s;
	printf("输入你要转换的八进制数:\n");
	gets(s); //现在获得了用户输入的八进制数，下面开始转换

	//输出第一个地址的值
	printf("第一个地址的值是:%d\n",*p - '0');

	//总结计算规则
	// 0x12 = 2+1*8
	//0x123 = 3+0x12*8 = 83（下同）
	while( (*p) != '\0'){
		n = n*8+*p - '0'; //测试数据12  1 和 2
		p++; //换下一个数
	}

	//输出
	printf("转换成十进制后的数是:%d\n",n);
	return 0;
}