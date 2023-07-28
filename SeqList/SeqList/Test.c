#include<stdio.h>
#include"SeqList.h"
void test_insert();
void test_delete();
void test_merge();
void test_purge();
int main() {
	//test_insert();
	//test_delete();
	//test_merge();
	test_purge();
	return 0;
}

void test_insert() {
	sqlink L;
	L = list_create();

	if (L == NULL)
		return ;

	list_insert(L, 10, 0);
	list_insert(L, 12, 1);
	list_insert(L, 14, 2);
	list_insert(L, 16, 3);
	list_insert(L, 18, 4);
	list_insert(L, 20, 5);
	list_show(L);
	list_destroy(L);
}
void test_delete() {
	sqlink L;
	L = list_create();

	if (L == NULL)
		return;

	list_insert(L, 10, 0);
	list_insert(L, 12, 1);
	list_insert(L, 14, 2);
	list_insert(L, 16, 3);
	list_insert(L, 18, 4);
	list_insert(L, 20, 5);
	list_show(L);
	list_delete(L, 1);
	list_show(L);

}
void test_merge() {
	sqlink L1;
	sqlink L2;
	L1 = list_create();
	L2 = list_create();

	if (L1 == NULL)
		return;
	if (L2 == NULL)
		return;

	list_insert(L1, 0, 0);
	list_insert(L1, 1, 1);
	list_insert(L1, 2, 2);
	list_insert(L1, 3, 3);
	list_insert(L1, 4, 4);
	list_insert(L1, 5, 5);
	list_show(L1);

	list_insert(L2, 4, 0);
	list_insert(L2, 5, 1);
	list_insert(L2, 66, 2);
	list_insert(L2, 77, 3);
	list_show(L2);
	list_merge(L1, L2);
	list_show(L1);
}
void test_purge() {
	sqlink L;
	L = list_create();

	if (L == NULL)
		return;

	list_insert(L, 10, 0);
	list_insert(L, 10, 0);
	list_insert(L, 10, 0);
	list_insert(L, 10, 0);
	list_insert(L, 10, 0);
	list_insert(L, 10, 0);
	list_show(L);
	list_purge(L);
	list_show(L);
}
