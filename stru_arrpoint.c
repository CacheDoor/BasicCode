#include <stdio.h>

int main(int argc, char const *argv[])
{
	struct ucode {
		char u1;
		int u2;
	}tt[4] = {{'a',97},{'b',98},{'b',99},{'d',100}};

	struct ucode *p;
	p = tt; //代表数组tt首地址元素
	printf("%c  %d\n",p->u1,p->u2 );
	printf("%c  \n",p++->u1 );
	printf("%c  %d\n",p->u1,p->u2++ );
	printf("  %d\n",p->u2 );
	printf("%c  %d\n",(++p)->u1,p->u2 );
	p++;
	printf("%c  %d\n",++p->u1,p->u2 ); //p->u1 加1  后再
	return 0;
}