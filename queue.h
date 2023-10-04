/* queue.h -- Queue�Ľӿ� */
#ifndef _QUEUE_H_
#define _QUEUE_H_
#include <stdbool.h>

/* ���������Item���͵Ķ��壬���� */
typedef int Item;	//����use_q.c
/* ����typedef struct item{int gumption; int charisma;}Item; */

#define MAXQUEUE 10

typedef struct node {
	Item item;
	struct node* next;
}Node;

typedef struct queue {
	Node* front;	//ָ����������ָ��
	Node* rear;	//ָ�����β���ָ��
	int items;		//�����е�����
}Queue;

/* ������		��ʼ������ */
/* ǰ��������	pqָ��һ������ */
/* ����������	���б���ʼ��Ϊ�� */
void InitializeQueue(Queue* pq);