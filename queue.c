/* queue.c -- Queue���͵�ʵ�� */
#include <stdio.h>
#include <stdlib.h>
#include "queue.h"

/* �ֲ����� */
static void CopyToNode(Item item, Node* pn);
static void CopyToItem(Node* pn, Item* pi);

void InitializeQueue(Queue* pq) {
	pq->front = pq->rear = NULL;
	pq->items = 0;
}

bool QueueIsFull(const Queue* pq) {
	return pq->items == MAXQUEUE;
}

bool QueueIsEmpty(const Queue* pq) {
	return pq->items == 0;
}

int QueueItemCount(const Queue* pq) {
	return pq->items;
}

bool EnQueue(Item item, Queue* pq) {
	Node* pnew;

	if(QueueIsFull(pq))
		return false;
	pnew = (Node*)malloc(sizeof(Node));
	if (pnew == NULL) {
		fprintf(stderr, "Unable to allocate memory!\n");
		exit(1);
	}
	CopyToNode(item, pnew);
	pnew->next = NULL;
	if (QueueIsEmpty(pq))
		pq->front = pnew;
	else
		pq->rear->next = pnew;
	pq->rear = pnew;
	pq->items++;

	return true;
}