#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
	int i,m,flag;
	flag = 1;
	printf("请输入一个大于2的整数: \n");
	scanf("%d",&m);
	for(i=2;i<m;i++){
		if(0 == (m % i)){
			flag = 0;
			break;
		}
	}

	if(flag){
		printf("你输入的数%d是一个素数\n",m );
	}else{
		printf("你输入的数%d不是一个素数\n",m );
	}
	return 0;
}