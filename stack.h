#ifndef STACK_H
#define	 STACK_H

#define STACKSIZE 100
typedef struct stack{
	//int *pArr;
	void *pArr;
	int eleSize;
	int size;
	int tos;
} Stack;

void push(Stack *ps, const void *pData);
void pop(Stack *ps, void *pData);

void initStack(Stack *ps, int size, int eleSize);
void cleanupStack(Stack *ps);
//...

#endif
