#include <stdio.h>
#include "stack.h"

int main(void)
{
	push(100);
	push(100);
	push(100);
	
	printf("1st pop() : %d\n", pop());
	printf("1nd pop() : %d\n", pop());
	printf("1rd pop() : %d\n", pop());

	return 0;
}
