/*
* @Author: Jeffrey Wang
* @Date:   2021-01-11 13:16:00
* @Email:  wpgraceii@163.com
* @Last Modified by:   Jeffery Wang
* @Last Modified time: 2021-01-12 09:07:24
* @Description: 
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 40
//通讯录结构体
typedef struct 
{
	char name[50]; //姓名
	char corp[50]; //工作单位
	char phone[15]; //联系手机
	char address[100]; //家庭地址
	char QQ[15]; //QQ
	char mail[50];//邮箱
}addressInfo; 

int addNewAddressInfo(addressInfo f[]); //增加联系人
int selectMenu(); //菜单选择
void outputAddressInfo(addressInfo ai); //单独输出一个人的信息
int findAddressinfo(addressInfo f[],int n ,char* username); //查找联系人
int deleteAddressInfo(addressInfo f[],int n); //删除联系人
void saveAddressInfo(addressInfo f[], int n); //保存联系人
void searchAddressInfo(addressInfo f[],int n); //查找联系人
int readAddressInfo(addressInfo f[]); //从文件中读取联系人
void displayAllAddressInfo(addressInfo f[],int n);//输出指定数量的全部联系人

int main(int argc, char const *argv[])
{
	addressInfo ai[MAX];
	int countPerson = 0;
	do {
		switch(selectMenu()){
			case 1:
			addNewAddressInfo(ai);
			break;
		case 2:
			deleteAddressInfo(ai,countPerson);
			break;
		case 3:
			searchAddressInfo(ai,countPerson);
			break;
		case 4:
			insertAddressInfo(ai,countPerson);
			break;
		case 5:
			saveAddressInfo(ai,countPerson);
		 	break;
		case 6:
			readAddressInfo(ai);
			break;
		case 7:
			displayAllAddressInfo(ai,countPerson);
			break;
		case 8:
			printf("\n");
			printf("感谢使用\n");
			break;
		default:
			printf("\n");
			printf("请输入正确的操作！\n");
			exit(0);
			break;
		}
	}while(1);
	return 0;
}
//菜单选择
int selectMenu(){ 
	char s[80];
	int c;
	system("cls");
	printf("\n");
	printf("/************************************\\\n");
	printf("*                                      *\n");
	printf("*     通 讯 录 管 理 系 统              *\n");
	printf("*     主      菜       单              *\n");
	printf("*     1.增加联系人信息                  *\n");
	printf("*     2.删除联系人信息                  *\n");
	printf("*     3.查找联系人信息                  *\n");
	printf("*     4.插入联系人信息                  *\n");
	printf("*     5.保存联系人信息                  *\n");
	printf("*     6.从文件加载联系人信息             *\n");
	printf("*     7.显示所有联系人信息               *\n");
	printf("*     8.退出管理系统                     *\n");
	printf("/************************************\\\n");
	do{
		printf("请输入对应的序号(1 ~ 8):\n");
		scanf("%s",s);
		c = atoi(s); //将字符串转换成整型
	}while(c < 0 || c > 8);

	return c;
}


//添加新的联系人 保存在数组中
int addNewAddressInfo(addressInfo f[]){
	int i,n = 0;
	char *s = 0;
	system("cls"); //clear screen
	printf("请输入添加联系人总人数：\n");
	scanf("%d",&n);
	printf("请输入记录:\n");
	printf("姓名   单位   电话   住址   QQ   邮件\n");
	printf("--------------------------------------\n");
	for (int i = 0; i < n; ++i)
	{
		scanf("%s",f[i].name);
		scanf("%s",f[i].corp);
		scanf("%s",f[i].phone);
		scanf("%s",f[i].address);
		scanf("%s",f[i].QQ);
		scanf("%s",f[i].mail);
		printf("--------------------------------------\n");
	}
	return n;
}

//
int deleteAddressInfo(addressInfo f[],int countPerson){
	 char username[50];
	 int i,j;
	 int ch = 0;
	 printf("请输入要删除联系人的姓名:\n");
	 scanf("%s",username);
	 i = findAddressinfo(f,countPerson,username); //查找联系人是否存在
	 if(i > countPerson -1){ //超过数组的长度  表示没有找到
	 	printf("没有找到要删除的联系人\n");
	 }else{
	 	outputAddressInfo(f[i]);
	 	printf("输入1 确认删除，输入0 不删除 （1/0）\n");
	 	scanf("%d",ch);
	 	if(1 == ch){
	 		for(j=i+1;j<countPerson;j++){ //从j开始 位置往前移
	 			memcpy(&f[j-1],&f[j],sizeof(addressInfo));
	 		}
	 		//删除成功后 记录数减一
	 		countPerson --;
	 	}
	 }
	 return countPerson; //返回记录数
}

//通过姓名找到用户的信息
void searchAddressInfo(addressInfo f[],int countPerson){
	int i;
	char username[50];
	printf("请输入要查询的人的名字:\n");
	scanf("%s",username);
	i = findAddressinfo(f,countPerson,username);
	if(i+1 > countPerson){
		printf("没有找到，请确认有此用户存在\n");
	}else{
		outputAddressInfo(f[i]);
	}
}

//查找姓名 如何找到返回索引值
int findAddressinfo(addressInfo f[],int countPerson, char* username){
	int i = 0;
	countPerson = sizeof(f) /sizeof(addressInfo);
	if(0 == strlen(username)){
		return 0;
	}

	for (int i = 0; i < countPerson; ++i)
	{
		if(username == f[i].name){
			return i;
		}
	}
	return 0;
}

//输出用户的信息
void outputAddressInfo(addressInfo f){
	system("cls");
	printf("\n\n********************用户信息展示********************************************\n");
	printf("姓名   工作单位   联系电话     住址       QQ       邮件\n");
	printf("------------------------------------------------------------------------\n");
	printf("%-6s%-10s%-10s%-10s%-10s%-10s\n", f.name,f.corp,f.phone,f.address,f.QQ,f.mail);
	printf("------------------------------------------------------------------------\n");
	printf("按任意键继续！\n");
	getch();
}

//插入联系人的信息
int insertAddressInfo(addressInfo f[],int countPerson){
	int i,j;
	char username[50]; //在哪个联系人前面插入信息
	addressInfo tmpAi; //新建一个零时的结构体用户保存插入用户的信息
	memset(&tmpAi,0,sizeof(addressInfo)); //给结构分配空间
	printf("请输入一下信息：\n");
	printf("--------------------------------\n");
	printf("姓名   单位   电话   地址   QQ   邮件\n");
	printf("---------------------------------\n");
	scanf("%s%s%s%s%s%s",tmpAi.name,tmpAi.corp,tmpAi.phone,tmpAi.address,tmpAi.QQ,tmpAi.mail);
	printf("---------------------------------\n");
	printf("请问你要在哪一个用户前插入 ，请输入联系人的姓名:\n");
	scanf("%s",username);
	i = findAddressinfo(f,countPerson,username);
	for (j = countPerson -1;j>=i;j++) //数据加载位置i后面 i以后的数据往后移一个位置
	{
			memcpy(&f[j+1],&f[j],sizeof(addressInfo));
	}

	memcpy(&f[i],&tmpAi,sizeof(addressInfo));
	countPerson ++;
	return countPerson;
}

void saveAddressInfo(addressInfo f[],int countPerson){
	int i;
	FILE *fp;

	if(NULL ==(fp = fopen("addressInfo.txt","wb"))){
		printf("文件打不开");
		exit(-1);
	}

	printf("\n*************开始保存文件*****************\n");
	fprintf(fp, "%d",countPerson ); //将记录数写入文件
	fprintf(fp, "\r\n"); //写入换行
	for (i = 0; i < countPerson ; ++i)
	{
		fprintf(fp, "%-6s%-10s%-10s%-10s%-10s%-10s\n", f[i].name,f[i].corp,f[i].phone,f[i].address,f[i].QQ,f[i].mail);
		fprintf(fp, "\r\n"); //写入换行
	}
	fclose(fp);
	printf("-------------保存成功----------------\n");
	printf("按任意键继续！\n");
	getch();
}

//从文件中读取信息
int readAddressInfo(addressInfo f[]){
	FILE *fp = NULL;
	int i=0,countPerson = 0;
	if(NULL ==(fopen("addressInfo.txt","rb"))){
		printf("不能打开文件\n");
		exit(1);
	}

	fscanf(fp,"%d",&countPerson);
	printf("\n******************开始读取文件********************\n");
	for (int i = 0; i < countPerson; ++i)
	{
		fscanf(fp, "%6s%10s%10s%10s%10s%10s\n", f[i].name,f[i].corp,f[i].phone,f[i].address,f[i].QQ,f[i].mail);
	}
	fclose(fp);
	printf("-------------读取成功----------------\n");
	return countPerson;
}

//显示所有地址信息
void displayAllAddressInfo(addressInfo f[],int countPerson){
	int i;
	for (int i = 0; i < countPerson; ++i)
	{
		outputAddressInfo(f[i]);
		printf("\r\n");
	}
}
