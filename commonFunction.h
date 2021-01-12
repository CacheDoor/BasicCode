#include <stdio.h>

//外部公用的函数 

//两个整数相加
extern  add(int a,int b){
	printf("%d + %d = %d",a,b,a+b);
}

//两个数相减
extern sub(int a, int b){
	printf("%d - %d = %d",a,b,a+b);
}

extern printStars(){
	printf("***********");
}