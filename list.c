#include "list.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void initList(List *pList, int eleSize)
{
	pList->ptr = (Node *)malloc(sizeof(Node));		//dummy
	pList->eleSize = eleSize;
	//pList->ptr->data = ??;
	pList->ptr->next = NULL;
}

void cleanupList(List *pList)
{
	Node *p = pList -> ptr;
	while(p )
	{
		Node *tmp = p;
		p = p->next;
		free(tmp);
	}
}
void insertFirstNode(List *pList, const void *pData)
{
	Node *p = (Node *)malloc(sizeof(Node) + pList->eleSize);
	memcpy(p + 1, pData, pList->eleSize);
	//p->data = data;
	p->next = pList->ptr->next;
	pList->ptr->next = p;
	
}

void insertNode(List *pList, const void *prevData, const void *pData)
{
	Node *p = pList->ptr->next;
	while(p ){
		if(	memcmp(p + 1, prevData, pList->eleSize) == 0)
			break;
		p = p->next;
	}
	
	if(p ){
		Node *tmp = (Node *)malloc(sizeof(Node));
		memcpy(tmp + 1, pData, pList->eleSize);
		//tmp->data = data;
		tmp->next = p->next;
		p->next = tmp;
	}
	
}


void deleteNode(List *pList, const void *pData)
{
	Node *p1 = pList->ptr->next;
	Node *p2 = pList->ptr;
	
	while(p1 ){
		//if (p1->data == data)
		if(memcmp(p1 + 1, pData, pList->eleSize) == 0 )
			break;
		p1 = p1->next;
		p2 = p2->next;
	}
	
	if(p1 ){
		p2->next = p1->next;
		free(p1);
	}	

}	

void printList(const List *pList, void (*print)(const void *))
{
	Node *p = pList->ptr->next;
	printf("[");
	while(p ){
		//printf("%d ",p->data);
		print(p + 1);
		printf( (p->next ) ? ", " : "]\n");
		p = p->next;
	}
}
