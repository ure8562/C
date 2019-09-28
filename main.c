#include <stdio.h>
#include "queue.h"

int main(void)
{	
	Queue q1,q2;
	
	initqueue(&q1);
	initqueue(&q2);
	
	push(&q1, 100);
	push(&q1, 200);
	push(&q1, 300);
	
	push(&q2, 700);
	push(&q2, 800);
	push(&q2, 900);
	
	printf("1st 1-pop() : %d\n",pop(&q1));	
	printf("2st 1-pop() : %d\n",pop(&q1));
	printf("3st 1-pop() : %d\n",pop(&q1));
	
	printf("1st 2-pop() : %d\n",pop(&q2));	
	printf("2st 2-pop() : %d\n",pop(&q2));
	printf("3st 2-pop() : %d\n",pop(&q2));
	
	return 0;
}
