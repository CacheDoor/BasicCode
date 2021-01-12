/*
* @Author: Jeffrey Wang
* @Date:   2021-01-12 16:32:40
* @Email:  wpgraceii@163.com
* @Last Modified by:   Jeffery Wang
* @Last Modified time: 2021-01-12 16:33:07
* @Description: 
*/
//启动继电器
#include "reg52.h"
#include <intrins.h> 

typedef unsigned int u16;
typedef unsigned char u8;
sbit relay = P1^4;
void main(){
	relay = 0;
	while(1);	
}
