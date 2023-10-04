/* queue.h -- Queue的接口 */
#ifndef _QUEUE_H_
#define _QUEUE_H_
#include <stdbool.h>

/* 在这里插入Item类型的定义，例如 */
typedef int Item;	//用于use_q.c
/* 或者typedef struct item{int gumption; int charisma;}Item; */

#define MAXQUEUE 10

typedef struct node {
	Item item;
	struct node* next;
}Node;

typedef struct queue {
	Node* front;	//指向队列首项的指针
	Node* rear;	//指向队列尾项的指针
	int items;		//队列中的项数
}Queue;

/* 操作：		初始化队列 */
/* 前提条件：	pq指向一个队列 */
/* 后置条件：	队列被初始化为空 */
void InitializeQueue(Queue* pq);