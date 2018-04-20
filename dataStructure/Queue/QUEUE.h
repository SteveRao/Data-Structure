
/*
1������һ��������ṹ���������뻷�ζ���
2��Q.base=NULL;��һ��һ��Ҫע�⣬��ʹ���������ʱһ��Ҫ��ʼ����ָ��
*/




#ifndef QUEUE_H_
#define QUEUE_H_
#include<iostream>
//define MAXSIZE to storage the size of queue
int MAXSIZE;
typedef struct
{
	int* base;
	int front;
	int rear;
}SqQueue;

void InitQueue(SqQueue & Q)
{
	Q.base=(int* )malloc(sizeof(int)*MAXSIZE);
	if(Q.base==NULL)exit(0);
	Q.front=Q.rear=0;
}

void EnQueue(SqQueue & Q,int e)
{
	if((Q.rear+1)%MAXSIZE==Q.front)exit(0);//the queue is full
	Q.base[Q.rear]=e;
	Q.rear=(Q.rear+1)%MAXSIZE;
}

void DeQueue(SqQueue & Q,int & e)
{
	if(Q.front==Q.rear)exit(0);//the queue is empty
	e=Q.base[Q.front];
	Q.front=(Q.front+1)%MAXSIZE;
}

int QueueLength(SqQueue Q)
{
	return (Q.rear-Q.front+MAXSIZE)%MAXSIZE;
}


#endif


















