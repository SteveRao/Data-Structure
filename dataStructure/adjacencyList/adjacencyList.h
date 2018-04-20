#ifndef ADJACENCY_LIST_H_
#define ADJACENCY_LIST_H_
#include<iostream>

using namespace std;

/*********************�ڽӱ�Ĺ���**********************/
#define MAX_VERTEX_NUM 20

typedef  struct ArcNode
{
	int adjvex;
	ArcNode *nextarc;
	int *info;
}ArcNode;

typedef struct VNode
{
	char data;
	ArcNode *firstarc;//ͷ���
}VNode,AdjList[MAX_VERTEX_NUM];

typedef struct
{
	AdjList Vertices;
	int vexnum,arcnum;
	int kind;
}ALGraph;

/*********************�ڽӱ�Ĺ���**********************/


void Insert(AdjList & head,int index,int adjvex);

void CreateAL(ALGraph & G);







#endif