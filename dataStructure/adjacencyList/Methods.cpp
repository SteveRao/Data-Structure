#include"Adjacency_List.h"

void Insert(AdjList & head,int index,int adjvex)
{
	VNode *p=head,*pr=head,*temp=NULL;//����һ��Ҫע�����鲻��ֱ�Ӹ�ֵ������һ������
	ArcNode *pn=NULL;
	pn=(ArcNode*)malloc(sizeof(struct ArcNode));//�½�һ���ڵ�
	
	pn->adjvex=adjvex;
	pn->nextarc=NULL;
	//(*pn).nextarc=NULL;//����β��Ϊ��,�����ݴ�����������
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
	cout<<"������ͼ�Ķ��������";
	cin>>G.vexnum;
	cout<<"������ͼ�ıߵ�������";
	cin>>G.arcnum;
	for(int i=0;i<G.vexnum;i++)
	{
		G.Vertices[i].firstarc=NULL;
	}
	for(int i=0;i<G.vexnum;++i)
	{
		cout<<"�������"<<i+1<<"���������Ϣ��";
		cin>>G.Vertices[i].data;
	}
	for(int i=0;i<G.arcnum;++i)
	{
		cout<<"�������"<<i+1<<"���ߣ�";
		cin>>index>>adjvex;
		Insert(G.Vertices,index-1,adjvex-1);
	}
}
