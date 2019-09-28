#include "queue.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>

void initqueue(Queue *pq,int size)
{
	pq->pArr = (int *)malloc(sizeof(int) * size);	
	assert(pq->pArr /* != NULL*/);
	pq->size = size;
	pq->front = 0;
	pq->rear = 0;
}

void cleanuupqueue(Queue *pq)
{
	free(pq->pArr);
}

void push(Queue *pq, int data)
{	
	/*if(pq->front == QUEUESIZE){
		fprintf(stderr,"Queue is full\n");
		exit(-1);
	}*/
	assert((pq->rear) < (pq->size));
	pq->pArr[pq->rear] = data;
	++pq->rear;
}
int pop(Queue *pq)
{	
	/*if(pq->rear < pq->front){
		fprintf(stderr,"Queue is empty\n");
		exit(-2);
	}*/
	assert((pq->rear) > (pq->front));
	int result = pq->pArr[pq->front];
	++pq->front;
	return result;
}


