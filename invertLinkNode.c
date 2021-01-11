#include <stdio.h>
#include <stdlib.h>
struct linkNode {
	int data;
	struct linkNode  *next;
};

typedef struct linkNode LN;

//创建一个单链表节点
LN * createLinkNode(){
	int i;
	LN *head,*ptr,*p;//声明三个结构体变量
	//给头节点分配空间
	head = (LN*)malloc(sizeof(LN));
	//检查是否分配空间成功
	if(!head){
		printf("分配空间失败");
		exit(0);
	}
	//分配空间成功 写入数据
	printf("请输入第一个节点的数据:\n");
	scanf("%d",&head->data);
	//下一个地址设置为空指针
	head->next = NULL; 
	//让链表指针指向第一个链表
	ptr = head;
	//继续添加链表
	for (int i = 0; i < 5; ++i)
	{
		//新增一个节点 添加到头节点后面
		p =  (LN*)malloc(sizeof(LN));
		if(!p){
			printf("分配空间失败");
			exit(0);
		}
		printf("请输入第%d个节点的数据:\n",i+2);
		scanf("%d",&p->data);
		p->next = NULL;
		//将链表指针的下一个节点的地址设置为新建的节点
		ptr->next = p;
		//将链表指针指向新增的节点地址
		ptr = ptr->next;
	}

	//返回首节点的地址
	return head;
}

//解释一下翻转链表的原理
// 用一个mid链表和last链表来控制翻转链表
// 让  head 一直不停的向后走  head = head->next 
// last 和 mid刚开始都是空的  
//第一次while  mid = head head = head->next last = null
//第二次 while last = mid mid = head  head = head->next
//第三次 继续上次的操作 
// .......直到最后  head->next = null  循环结束

LN * invertNode(LN *head){
	LN *mid,*last;  //head ->mid->last
	mid = NULL;
	while(head !=	 NULL){
		last = mid; //last = null
		mid = head; //mid = (LN *)
		head = head -> next;
		mid->next = last;
	}
	return mid;
}


//单链表遍历
LN * findNode(LN *head ,int num){
	LN *ptr;
	ptr = head;
	while(ptr != NULL){
		if(ptr->data == num){
			return ptr;
		}
		ptr = ptr->next;
	}
	return ptr;
}

//单链表插入节点(还是没有理解透)
LN * insertNode(LN *head, LN *ptr,int num){
	//给新节点分配空间
	LN *newNode = (LN *)malloc(sizeof(LN*));
	//判断是否分配成功
	if(!newNode){
		printf("空间分配失败\n");
		exit(0);
	}
	newNode->data = num;
	newNode->next = NULL;
	if(ptr == NULL){ //是否制定在某个节点处插入新的节点
		newNode->next = head;
		return newNode;
	}else{
		if(ptr->next == NULL){
			ptr->next = newNode;
		}else{
			newNode->next = ptr->next;
			ptr->next = newNode;
		}
	}
	return head;
}

//单链表删除节点
LN * deleteNode(LN * head,LN *ptr){
	LN *pre;
	if(ptr == head){
		return head->next;
	}else{
		pre = head;
		while(pre->next != ptr){
			pre = pre->next;
		} 
		if(pre->next == NULL){
			pre->next = NULL;
		}else{
			pre->next = ptr->next;
		}
	}
	free(ptr);
	return head;
}

//打印节点的内容
void printNode(LN *ptr){
	while(ptr != NULL){
		printf("%d\n",ptr->data );
		ptr = ptr->next;
	}
	printf("\n");
}

//释放链表的内存

void  freeLinkNode(LN *head){
	LN *ptr;
	while(head != NULL){  //每次取出一个节点 释放空间
		ptr = head;  
		head = head->next;
		free(ptr); 
	}
}

int main(int argc, char const *argv[])
{
	int num,value;
	LN *head,*ptr;
	//新建一个链表 返回第一个节点的地址
	head = createLinkNode();
	printf("\n");
	//输出所有节点中的内容
	printf("下面是你输入的数据:\n");
	printNode(head);
	//翻转链表
	head = invertNode(head);
	//打印翻转后的链表
	printf("下面是翻转之后的链表数据:\n");
	printNode(head);
	//查找节点数据
	printf("请输入要查找的节点数据:\n");
	scanf("%d",&num);
	ptr = findNode(head,num);
	if(!ptr){
		printf("你要查找的节点数据没有找到\n");
	}else{
		printf("数据找到了\n请输入你要插入的数据：\n");
		scanf("%d",&value);
		head = insertNode(head,ptr,value);
		printNode(head);
	}

	//输入你要查找并删除的数据
	printf("请输入要查找并删除的数据：\n");
	scanf("%d",&num);
	ptr = findNode(head,num);
	if(!ptr){
		printf("没有找到\n");
	}else{
		printf("找到啦\n");
		//下面删除
		head = deleteNode(head,ptr);
		printNode(head);
	}
	freeLinkNode(head);
	return 0;
}

