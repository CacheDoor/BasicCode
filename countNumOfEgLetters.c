#include <stdio.h>

void countNumOfLetters(char *p,int a[]); //函数声明


int main(int argc, char const *argv[])
{
	char s[] = "fjdsflkueqrjjdskfkjioqeurqpijfriqhrlhfhdfpiquriurqjfdajerrqerqfaddfasfaffaqer";
	int a[26];
	int i;
	puts(s);
	//开始统计
	countNumOfLetters(s,a);
	//通过循环输出统计的26英文字母出现的次数
	for (int i = 0; i < 26; ++i)
	{
		printf("%4d",a[i] );
	}
	printf("\n");
	return 0;
}


void countNumOfLetters(char *p,int a[]){
	//数组初始化
	for (int i = 0; i < 26; ++i)
	{
		a[i] = 0; //26英文字母的数量没有统计之前都是0
	}

	//*p是字符串数组的首地址
	while(*p){
		if(*p >= 'a' && *p <= 'z'){
			a[*p - 'a' -1]++;
		}
		p++;
	}
}