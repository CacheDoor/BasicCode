#include <stdio.h>
#define STRSIZE 81
void strCopy(char[],char[]);

int main(int argc, char const *argv[])
{
	char message[STRSIZE];
	char newMessage[STRSIZE];
	printf("请输入字符串:\n");
	gets(message);
	strCopy(message,newMessage);
	puts(newMessage);
	return 0;
}

void strCopy(char str1[], char str2[]){
	int i=0,j=0;
	while(str1[i] != '\0'){
		str2[j++] = str1[i++];
	}
	str2[j] = '\0';
}