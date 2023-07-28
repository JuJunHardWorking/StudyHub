#include"LinkList.h"
#include<stdlib.h>
linklist list_create() {
	linklist H;
	H = (linklist)malloc(sizeof(listnode));
	if (H==NULL)
	{
		printf("malloc failed\n");
		return H;
	}
	H->data = 0;
	H->next = NULL; //定义了头节点
	return H;
}
int list_tail_insert(linklist H, data_t value) {
	if (H==NULL) //先判断这个链表有没有初始化，没初始化的链表直接不操作
	{
		printf("H not init\n");
		return -1;
	}
	//1 new node
	linklist NewNode;
	linklist HeadNode;
	NewNode = (linklist)malloc(sizeof(listnode));
	if (NewNode==NULL)
	{
		printf("malloc failed\n");
		return -1;
	}
	NewNode->data = value;
	NewNode->next = NULL;
	     
	//2 FindTailNode
	HeadNode = H;
	while (HeadNode->next!=NULL)
		HeadNode = HeadNode->next;
	
	//3 insert
	HeadNode->next = NewNode;
	return 0;
}

int list_show(linklist H) {
	if (H == NULL)
		return -1;
	/*if (H->next == NULL)
	{
		printf("NULL\n");
		return 0;
	}*/
	linklist HeadNode=H;
	while (HeadNode->next!=NULL) //一直打印到尾节点的前一个节点
	{
		HeadNode = HeadNode->next;
		printf("%d->", HeadNode->data);
	}
	printf("NULL\n");//最后打印尾节点
	return 0;
}