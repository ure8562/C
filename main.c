#include <stdio.h>
#include "stack.h"

int main(void)
{
	Stack s1; //= {0,0};
	Stack s2; //= {0,0};
	initStack(&s1);		//s1.tos = 0;
	initStack(&s2);		//s2.tos = 0;
//	Stack stacks[100];

//	printf("%d %d \n", s1.array[0],s1.tos);
//	push(&s1,100);
//	printf("%d %d \n", s1.array[0],s1.tos);
	
	push(&s1,100);
	push(&s1,200);
	push(&s1,300);
	
	push(&s2,900);
	push(&s2,800);
	push(&s2,700);
	
	printf("s1 1st pop() : %d\n", pop(&s1));
	printf("s1 2st pop() : %d\n", pop(&s1));
	printf("s1 3st pop() : %d\n", pop(&s1));
	
	printf("s2 1st pop() : %d\n", pop(&s2));
	printf("s2 2st pop() : %d\n", pop(&s2));
	printf("s2 3st pop() : %d\n", pop(&s2));
	printf("s2 3st pop() : %d\n", pop(&s2));
	return 0;
}
