#include <stdio.h>
#include "stack.h"

int main(void)
{
	Stack s1;
	Stack s2;
	initStack(&s1,10,sizeof(int));		
	initStack(&s2,100,sizeof(double));		
	
	int i = 100; push(&s1, &i);
	i = 200;     push(&s1, &i);
	i = 300;  	  push(&s1, &i);
	
	double d = 1.1;	push(&s2, &d);
	d = 2.2;			push(&s2, &d);
	d = 3.3;			push(&s2, &d);
	
	int re;
	pop(&s1, &re);			printf("s1 1st pop() : %d\n", re);
	pop(&s1, &re);			printf("s1 2st pop() : %d\n", re);
	pop(&s1, &re);			printf("s1 3st pop() : %d\n", re);
	
	double re2;
	pop(&s2, &re2);		printf("s2 1st pop() : %lf\n", re2);
	pop(&s2, &re2);		printf("s2 2st pop() : %lf\n", re2);
	pop(&s2, &re2);		printf("s2 3st pop() : %lf\n", re2);
	
	cleanupStack(&s1);
	cleanupStack(&s2);
	
	return 0;
}
