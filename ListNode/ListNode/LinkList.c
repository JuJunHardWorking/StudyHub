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
	H->next = NULL; //������ͷ�ڵ�
	return H;
}
int list_tail_insert(linklist H, data_t value) {
	if (H==NULL) //���ж����������û�г�ʼ����û��ʼ��������ֱ�Ӳ�����
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
	while (HeadNode->next!=NULL) //һֱ��ӡ��β�ڵ��ǰһ���ڵ�
	{
		HeadNode = HeadNode->next;
		printf("%d->", HeadNode->data);
	}
	printf("NULL\n");//����ӡβ�ڵ�
	return 0;
}