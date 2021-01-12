/*
* @Author: Jeffrey Wang
* @Date:   2021-01-12 10:05:32
* @Email:  wpgraceii@163.com
* @Last Modified by:   Jeffery Wang
* @Last Modified time: 2021-01-12 10:15:07
* @Description: 
*/
#include <stdio.h>
#include <stdlib.h>

struct Date  //日期结构体
{
	int year;
	int month;
	int day;
};

struct Reader{ //读者结构体
	char bookId[20]; //借书证标号
	struct Date borrow_time; //借书时间
	struct Date back_time; //还书时间
}

struct Book { //书籍信息结构体
	int number;  //书本编号
	char name[100];   //书本名称
	char author[50];  //书本作者
	int  current_number;//当前书本存量
	int  all_number;    //单册书图书馆总共有多少本
	char brief_introduction; //书本简介
	struct Reader reader[200];//保存本书两百个读者的借还信息
}

int main(int argc, char const *argv[])
{
	
	return 0;
}