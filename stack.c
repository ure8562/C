#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

void initStack(Stack *ps)
{
	ps->tos = 0;
}

void push(Stack *ps,int data)
{	
	if(ps->tos == STACKSIZE){
		fprintf(stderr,"stack is full\n");	
		exit(-1);	
	}
	
	ps->array[ps->tos] = data;
	++ps->tos;
}

int pop(Stack *ps)
{	
	if(ps->tos == 0){
		fprintf(stderr,"stack is empty\n");	
		exit(-2);
	}//empty
	--ps->tos;
	return ps->array[ps->tos];
}
