#include"Adjacency_List.h"

void Insert(AdjList & head,int index,int adjvex)
{
	VNode *p=head,*pr=head,*temp=NULL;//这里一定要注意数组不能直接赋值给另外一个数组
	ArcNode *pn=NULL;
	pn=(ArcNode*)malloc(sizeof(struct ArcNode));//新建一个节点
	
	pn->adjvex=adjvex;
	pn->nextarc=NULL;
	//(*pn).nextarc=NULL;//将标尾置为空,新数据存入新链节中
	if(head[index].firstarc==NULL)
	{
		head[index].firstarc=pn;
	}
	else
	{
		(*pn).nextarc=head[index].firstarc;
		head[index].firstarc=pn;
	}
}

void CreateAL(ALGraph & G)
{
	int index,adjvex;
	cout<<"请输入图的顶点个数：";
	cin>>G.vexnum;
	cout<<"请输入图的边的条数：";
	cin>>G.arcnum;
	for(int i=0;i<G.vexnum;i++)
	{
		G.Vertices[i].firstarc=NULL;
	}
	for(int i=0;i<G.vexnum;++i)
	{
		cout<<"请输入第"<<i+1<<"个顶点的信息：";
		cin>>G.Vertices[i].data;
	}
	for(int i=0;i<G.arcnum;++i)
	{
		cout<<"请输入第"<<i+1<<"条边：";
		cin>>index>>adjvex;
		Insert(G.Vertices,index-1,adjvex-1);
	}
}
