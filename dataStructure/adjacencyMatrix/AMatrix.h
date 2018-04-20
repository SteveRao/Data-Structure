#ifndef AMatrix_H_
#define AMatrix_H_
#include<iostream>
using std::cout;
using std::cin;
using std::endl;


/*******************邻接矩阵的结构定义***********************/
#define MAX_VERTEX_NUM 10

typedef struct ArcCell
{
	int adj;
	
	int *info;  //该弧的信息指针 
}ArcCell,AdjMatrix[MAX_VERTEX_NUM][MAX_VERTEX_NUM];

typedef struct
{
	char info;
	int index;
}VertexType;

typedef struct
{
	VertexType vexs[MAX_VERTEX_NUM];
	AdjMatrix arcs;
	int vexnum,arcnum;

}Graph;


/*******************邻接矩阵的结构定义***********************/


int LocateVex(Graph G,int u);

int FirstAdjVex(Graph G,int v);

int NextAdjVex(Graph G,int v,int w);

void CreateUDN(Graph & G);


#endif