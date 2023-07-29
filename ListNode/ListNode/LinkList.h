#pragma once
#include<stdio.h>

typedef int data_t;
typedef struct node {
	data_t data;
	struct node *next;
}listnode, *linklist;
 
linklist list_create();
int list_tail_insert(linklist H,data_t value); //head
int list_show(linklist H);