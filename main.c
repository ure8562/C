//#include <stdio.h>
#include "list.h"

int main(void)
{
	List list;
	initList(&list);
	insertFirstNode(&list,4);		// [4]
	insertFirstNode(&list,2);		// [2, 4]
	insertFirstNode(&list,1);		// [1, 2, 4]
	insertNode(&list, 2, 3); 		// [1, 2, 3, 4]
	
	deleteNode(&list, 2);			//	[1, 3, 4]
	
	printList(&list);
	
	cleanupList(&list);

	return 0;
}
