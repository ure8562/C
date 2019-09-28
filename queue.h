#ifndef		QUEUE_H
#define		QUEUE_H

#define 	QUEUESIZE 100
typedef struct queue{
	int *pArr;
	int size;
	int front;
	int rear;
}Queue;

void push(Queue *pq, int data);
int pop(Queue *pq);

void initqueue(Queue *pq,int size);
void cleanupqueue(Queue *pq);
#endif
