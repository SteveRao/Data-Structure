#include"AMatrix.h"


int  visited[MAX_VERTEX_NUM];


int LocateVex(Graph G,int u)
{
	for(int i=0;i<G.vexnum;++i)
	{
		if(G.vexs[i].index==u)
		{
			return i;
		}
	}
	return -1;
}

int FirstAdjVex(Graph G,int v)
{
	for(int i=0;i<G.vexnum;++i)
	{
		if(G.arcs[v][i].adj==1&&visited[i]!=1)
		{
			return i;
		}
	}
	return -1;//表示没有符合要求的临接节点
}

int NextAdjVex(Graph G,int v,int w)
{
	for(int i=w;i<G.vexnum;++i)
	{
		if(G.arcs[v][i].adj==1&&visited[i]!=1)
		{
			return i;
		}
	}
	return -1;//表示没有符合要求的临接节点
}



void CreateUDN(Graph & G)
{
	cout<<"Enter the vexnum of Graph:";
	cin>>G.vexnum;
	cout<<"Enter the arcnum of Graph:";
	cin>>G.arcnum;

	for(int i=0;i<G.vexnum;++i)
	{
		cout<<"Enter the index and info of the "<<i+1<<" vexs:";
		cin>>G.vexs[i].index>>G.vexs[i].info;  
	}

	for(int i=0;i<G.vexnum;++i)
		for(int j=0;j<G.vexnum;++j)
			G.arcs[i][j].adj=0;

	for(int k=0;k<G.arcnum;++k)
	{
		cout<<"请输入这条边的两个端点：";
		int v1,v2,i,j;
		cin>>v1>>v2;

		i=LocateVex(G,v1);
		j=LocateVex(G,v2);
		G.arcs[i][j].adj=1;//有向图的时候
		//G.arcs[j][i].adj=G.arcs[i][j].adj=1;//无向图的时候
	}
}






