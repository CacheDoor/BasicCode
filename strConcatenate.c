#include <stdio.h>

//字符串连接
int main(int argc, char const *argv[])
{
	char a[] = "adfajdfajfkaldsf";
	char b[] = "fdasfasfadfafsasaf";
	char c[100];

	int i = 0,j = 0,k = 0;
	while(a[i] != '\0' || b[j] != 0){
		if(a[i] != '\0'){
			c[k] = a[i++];
		}else{
			c[k] = b[j++];
		}
		k++;
	}
	c[k] = '\0';
	puts(c);
	return 0;
}