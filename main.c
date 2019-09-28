#include <stdio.h>
#include "list.h"

void printInt(const void *pData)
{
	printf("%d", *(int *)pData);
}

void printDouble(const void *pData)
{
	printf("%f", *(double *)pData);
}

int main(void)
{
	List list1,list2;
	initList(&list1, sizeof(int));
	initList(&list2, sizeof(double));
	
	int i;
	i = 4;	insertFirstNode(&list1,&i);		// [4]
	i = 2;	insertFirstNode(&list1,&i);		// [2, 4]
	i = 1;	insertFirstNode(&list1,&i);		// [1, 2, 4]
	int j = 2; 
	i = 3;	insertNode(&list1, &j, &i); 		// [1, 2, 3, 4]
	i = 2;	deleteNode(&list1, &i);			//	[1, 3, 4]
	printList(&list1, printInt);
	
	double d; 
	d = 4.4;	insertFirstNode(&list2,&d);		// [4.4]
	d = 2.2;	insertFirstNode(&list2,&d);		// [2.2, 4.2]
	d = 1.1;	insertFirstNode(&list2,&d);		// [1.1, 2.2, 4.4]
	double f = 2.2;
	d = 3.3;	insertNode(&list2, &f, &d); 		// [1.1, 2.2, 3.3, 4.4]
	d = 2.2;	deleteNode(&list2, &d);			// [1.1, 3.3, 4.4]
	printList(&list2, printDouble);
	
	cleanupList(&list1);
	cleanupList(&list2);

	return 0;
}
