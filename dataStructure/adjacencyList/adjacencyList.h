#ifndef ADJACENCY_LIST_H_
#define ADJACENCY_LIST_H_
#include<iostream>

using namespace std;

/*********************邻接表的构建**********************/
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
	ArcNode *firstarc;//头结点
}VNode,AdjList[MAX_VERTEX_NUM];

typedef struct
{
	AdjList Vertices;
	int vexnum,arcnum;
	int kind;
}ALGraph;

/*********************邻接表的构建**********************/


void Insert(AdjList & head,int index,int adjvex);

void CreateAL(ALGraph & G);







#endif