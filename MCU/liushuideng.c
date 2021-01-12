/*
* @Author: Jeffrey Wang
* @Date:   2021-01-12 15:59:07
* @Email:  wpgraceii@163.com
* @Last Modified by:   Jeffery Wang
* @Last Modified time: 2021-01-12 15:59:33
* @Description: 
*/
/*流水灯*/
 #include "reg52.h"
 #include <intrins.h>
 typedef unsigned int u16;
 typedef unsigned char u8;
 #define led P0;
 void delay(u16 i){	 //延时函数 i=1 大概延时10ms 
 	while(i--);
 }
 void main(){
 	u8 i;
	//P0 = ~(0x01);
	while(1){
		P0 = ~(0x00); //0x01取反 0xff -1 = 0xfe
		delay(50000);//50000*10 ms 延时大概0.45秒
		for(i = 0;i < 8;i++){
			P0 = (P0<<1); //11111110 11111101 11111011...
			delay(50000);	 //50000*10 ms 延时大概0.45秒
		}
	}
 }