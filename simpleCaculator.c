#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
	char command_begin; //定义允许开始的符号
	double first_number; //第一个数
	char    charater;    //算术符号
	double second_number; //第二个要计算的数
	double value;  //用来保存要计算的值
	printf("简单的计算机程序\n--------------------------\n");
	printf("在'>'提示符后输入一个命令符\n");
	printf("是否开始？(Y/N)>");
	scanf("%c",&command_begin);
	//开始要用户输入一个算式
	while('Y' == command_begin || 'y' == command_begin){
		printf("请输入一个算式，eg:2+3\n");
		scanf("%lf%c%lf",&first_number,&charater,&second_number);
		switch(charater){
			case '+':
				value = first_number + second_number;
				printf("等于%lf\n",value);
				break;
			case '-':
				value = first_number - second_number;
				printf("等于%lf\n",value);
				break;
			case '*':
				value = first_number * second_number;
				printf("等于%lf\n",value);
				break;
			case '/':
				while(0 == second_number){
					printf("除数不能为0，请重新输入算式\n");
					scanf("%lf%c%lf",&first_number,&charater,&second_number);
				}
				value = first_number / second_number;
				printf("等于%lf\n",value);
				break;
			default:
				break;
		}
		printf("是否继续运算?(Y/N)>\n");
		fflush(stdin); //清空缓冲区
		scanf("%c",&command_begin);
	}
	printf("感谢你使用简易版计算器\n");
	return 0;
}