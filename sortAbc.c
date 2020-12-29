#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
	int a,b,c,t;
	printf("请输入a,b,c的值: \n");
	
	scanf("%d%d%d",&a,&b,&c); //获得了a,b,c的值
	if(a < b){  //如果b大于a 则更换a和b的值
		t = a;
		a = b;
		b = t;
	}
	//a = 20  b = 10

	if(a < c){  //如果c大于a 则更换a和c的值
		t = a;
		a = c;
		c = t;
	}
	//a=30 c=20

	if(b < c){  //如果c大于b则更换b和c的值
		t = b;
		b = c;
		c = t;
	}
	//b=20 c=10	

	

	printf("从大到小排列是:\n");
	printf("%d\t %d\t %d\n",a,b,c );
	return 0;
}