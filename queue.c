#include "queue.h"
#include <stdlib.h>
#include <stdio.h>

void push(Queue *pq, int data)
{	
	if(pq->front == QUEUESIZE){
		fprintf(stderr,"Queue is full\n");
		exit(-1);
	}
	pq->array[pq->rear] = data;
//	queue[rear] = data;
	++pq->rear;
}
int pop(Queue *pq)
{	
	if(pq->rear < pq->front){
		fprintf(stderr,"Queue is empty\n");
		exit(-2);
	}
//	int result = queue[front];
	int result = pq->array[pq->front];
	++pq->front;
	return result;
}

void initqueue(Queue *pq)
{
	pq->front = 0;
	pq->rear = 0;
}
