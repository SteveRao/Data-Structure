#ifndef TREE_H_
#define TREE_H_
#include<iostream>

#define MAX_SIZE 100

typedef struct BiTNode{

	int date;
	struct BiTNode *lchild,*rchild;
}BiTNode,*BiTree;

BiTNode * CreateBiTree(BiTree P)
{
	BiTree T=P;
	int i;
	scanf("%d",&i);
	if(i==0)
		T=NULL;
	else
	{
		if(!(T=(BiTNode* )malloc(sizeof(BiTNode))))exit(0);
		T->date=i;
		CreateBiTree(T->lchild);
		CreateBiTree(T->rchild);
	}
	return T;
}

#endif