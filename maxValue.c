/*
* @Author: Jeffrey Wang
* @Date:   2021-01-11 12:37:52
* @Email:  wpgraceii@163.com
* @Last Modified by:   Jeffery Wang
* @Last Modified time: 2021-01-11 12:43:37
* @Description: 
*/
//最优解的问题
#include <stdio.h>
#define N 100

init nType; //物品种数
int currentOption[N]; //当前解
int option[N];//所有解得集合
double maxValue; //最大的价值
double totalValue;//输入全部物品的价值
double limitW; //输入的限制总重量
struct {
	double weight;
	double value;
}good[N];

void checkOut(int i,double tw,double totalValue){
	int k;
	if(tw+good[i].weight <= maxWeight)
}