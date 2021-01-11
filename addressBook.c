/*
* @Author: Jeffrey Wang
* @Date:   2021-01-11 13:16:00
* @Email:  wpgraceii@163.com
* @Last Modified by:   Jeffery Wang
* @Last Modified time: 2021-01-11 14:08:26
* @Description: 
*/

//通讯录结构体
typedef struct 
{
	char name[50]; //姓名
	char corp[50]; //工作单位
	char phone[15]; //联系手机
	char address[100]; //家庭地址
	char qq[15]; //QQ
	char mail[50];//邮箱
}addressInfo; 


//菜单选择
int selectMenu(){ 
	char s[80];
	int c = 0;
	system("cls");
	printf("\n");
	printf("/************************************\\\n")
	printf("*                                     *\n");
	printf("*     通 讯 录 管 理 系 统             *\n");
	printf("*     主      菜       单             *\n");
	printf("*     0.增加联系人信息                 *\n");
	printf("*     1.删除联系人信息                 *\n");
	printf("*     2.查找联系人信息                 *\n");
	printf("*     3.插入联系人信息                 *\n");
	printf("*     4.保存联系人信息                 *\n");
	printf("*     5.从文件加载联系人信息            *\n");
	printf("*     6.显示所有联系人信息              *\n");
	printf("*     7.退出管理系统                    *\n");
	printf("/************************************\\\n");
	do{
		printf("请输入对应的序号(0 ~ 7):\n");
		scanf("%d",s);
		c = aoti(s); //将字符串转换成整型
	}while(c < 0 || c > 7);
	return c;
}


//添加新的联系人 保存在数组中
int addNewAddressInfo(addressInfo f[]){
	int i,n = 0;
	char *s = 0;
	system("cls"); //clear screen
	printf("请输入添加联系人总人数\n");
	scanf("%d",n);
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
	char username[];
	printf("请输入要查询的人的名字:\n");
	scanf("%s",username);
	i = findAddressinfo(f,countPerson,username);
	if(i+1 > countPerson){
		printf("没有找到，请确认有此用户存在\n");
	}else{
		outputAddressInfo(f[i]);
	}
}

//输出用户的信息
void outputAddressInfo(addressInfo f){
	system("cls");
	printf("\n\n*********************************\n");
	printf("姓名   工作单位   联系电话  住址   QQ   邮件\n");
	printf("--------------------------------------------");
	printf("%-6s%-10s%-10s%-10s%-10s%-10s\n", f.name,f.corp,f.phone,f.address,f.QQ,f.mail);
	printf("--------------------------------------------");
	printf("按任意键继续！\n");
	getch();
}

//插入联系人的信息
int insertAddressInfo(addressInfo f,int countPerson){
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
}

