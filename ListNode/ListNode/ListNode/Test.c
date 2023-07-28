#define _CRT_SECURE_NO_WARNINGS
#include"LinkList.h"
int main() {
	data_t value;
	linklist H;
	H = list_create();
	if (H==NULL)
	{
		return -1;
	}
	printf("Input: ");
	while (1)
	{
		scanf("%d", &value); 
		if (value == -1)
			break;
		list_tail_insert(H,value);
		printf("Input: ");
	}
	list_show(H);
	return 0;
}