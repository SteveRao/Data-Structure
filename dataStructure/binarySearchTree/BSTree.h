#ifndef BSTREE_H_
#define BSTREE_H_
#include<iostream>
using namespace std;


struct TreeNode;
typedef struct TreeNode* Position;
typedef struct TreeNode* SearchTree;

SearchTree MakeEmpty(SearchTree T);
Position Find(int x,SearchTree T);
SearchTree Insert(int x,SearchTree T);
SearchTree Delete(int x,SearchTree T);
int Retrieve(Position P);
Position FindMin(SearchTree T);
SearchTree Initial(SearchTree T);

struct TreeNode
{
	int Element;
	SearchTree Left;
	SearchTree Right;
};

#endif