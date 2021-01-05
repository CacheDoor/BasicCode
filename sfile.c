#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char const *argv[])
{
	FILE *fp1,*fp2;
	char str[10]; //存储10个字符串
	//打开文件2
	if(0 == (fp1 = fopen("file2.txt","w"))){
		printf("file2文件打不开\n");
		exit(0);
	}

	printf("请输入字符内容: \n");
	gets(str);//把输入的内容先存到内存当中去
	//将数组中的内容存到文件file2.txt中去
	if(strlen(str) > 0){  //书上这个写的是 while  真实是if
		fputs(str,fp1);
		fputs("\n",fp1);
		gets(str);  //继续获取输入的内容
	}
	fclose(fp1);

	if(0 == (fp2 = fopen("file2.txt","r"))){
		printf("file2.txt这个文件打不开\n");
		exit(0);
	}
	printf("输入字符串: \n");
	//输出内容
	while(fgets(str,10,fp2) != 0){
		printf("%s",str);
	}
	printf("\n");
	fclose(fp2);
	return 0;
}