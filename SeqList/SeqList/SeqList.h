#pragma once
#include<stdio.h>

#define N 128
typedef int data_t; 

typedef struct
{
	data_t data[N];
	int last;     
}sqlist, *sqlink;

int list_show(sqlink L);
int list_clear(sqlink L);//��Ԫ����0
int list_destroy(sqlink L);//���� ȫ��Ԫ�غͱ�

sqlink list_create();
int list_empty(sqlink L);//�ж��Ƿ�Ϊ��
int list_length(sqlink L);
int list_locate(sqlink L, data_t value);
int	list_insert(sqlink L, data_t value, int pos);
int list_delete(sqlink L, int pos);
int list_merge(sqlink L1, sqlink L2);
int list_purge(sqlink L);
