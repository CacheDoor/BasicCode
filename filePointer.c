#include <stdio.h>
#include <stdlib.h>

//这个程序不太理想
int main(int argc, char const *argv[])
{
	FILE *fp1,*fp2;
	char c;
	//尝试打开文件file1
	if(0 == (fp1 = fopen("file1.txt","w"))){
		printf("不能打开文件\n");
		exit(0);
	}
	//开始往文件中输入内容
	printf("请输入内容: ");
	//获取到了输入的内容
	while('\n' != (c = getchar())){
		//往文件中写入内容
		fputc(c,fp1);
		fclose(fp1);
		//测试写入是否成功 但是感觉这个不太好
		if(0 == (fp2 = fopen("file1.txt","r"))){
			printf("不能打开文件，写入失败");
			exit(0);
		}
	}

	printf("输出字符: \n");
	while(EOF != (c = fgetc(fp2))){
		putchar(c);
	}
	printf("\n");
	fclose(fp2);
	return 0;
}