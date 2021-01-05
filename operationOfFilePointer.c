#include <stdio.h>
#include <stdlib.h>

//文件指针的操作
int main(int argc, char const *argv[])
{
	FILE *fp;
	char c;
	//打开文件
	if(0 == (fp = fopen("E:/c_project/test.txt","rw")) ){
		printf("文件打不开\n");
		exit(0);
	}
	while(!feof(fp)){
		c = fgetc(fp);
		putchar(c);
	}
	//关闭文件指针
	fclose(fp);
	return 0;
}