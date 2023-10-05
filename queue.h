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

/* ������		�������Ƿ����� */
/* ǰ��������	pqָ��֮ǰ����ʼ���Ķ��� */
/* ����������	������������򷵻�true�����򷵻�false */
bool QueueIsFull(const Queue* pq);

/* ������		�������Ƿ�Ϊ�� */
/* ǰ��������	pqָ��֮ǰ����ʼ���Ķ��� */
/* ����������	�������Ϊ���򷵻�true�����򷵻�false */
bool QueueIsEmpty(const Queue* pq);

/* ������		ȷ�������е����� */
/* ǰ��������	pqָ��֮ǰ����ʼ���Ķ��� */
/* ����������	���ض����е����� */
int QueueItemCount(const Queue* pq);

/* ������		�ڶ���ĩβ����� */
/* ǰ��������	pqָ��֮ǰ����ʼ���Ķ��� */
/*					item��Ҫ������ڶ���ĩβ���� */
/* ����������	������в�Ϊ�գ�item��������ڶ��е�ĩβ�� */
/*					�ú�������true�����򣬶��в��ı䣬�ú�������false */
bool EnQueue(Item item, Queue* pq);

/* ������		�Ӷ��еĿ�ͷɾ���� */
/* ǰ��������	pqָ��֮ǰ����ʼ���Ķ��� */
/* ����������	������в�Ϊ�գ������׶˵�item����������*pitem�� */
/*					����ɾ�����Һ�������true */
/*					����ò���ʹ�ö���Ϊ�գ������ö���Ϊ�� */
/*					��������ڲ���ǰΪ�գ��ú�������false */
bool DeQueue(Item* pitem, Queue* pq);

/* ������		��ն��� */
/* ǰ��������	pqָ��֮ǰ����ʼ���Ķ��� */
/* ����������	���б���� */
void EmptyTheQueue(Queue* pq);

#endif