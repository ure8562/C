#ifndef		QUEUE_H
#define		QUEUE_H

#define 	QUEUESIZE 100
typedef struct queue{
	int array[QUEUESIZE];
	int front;
	int rear;
}Queue;

void push(Queue *pq, int data);
int pop(Queue *pq);

void initqueue(Queue *pq);
#endif
