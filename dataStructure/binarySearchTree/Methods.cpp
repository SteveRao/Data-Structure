#include"BSTree.h"





int Retrieve(Position P)
{
	if(P==NULL)
		return 0;
	else
	{
		cout<<P->Element<<" ";
		Retrieve(P->Left);
		Retrieve(P->Right);
	}
	return 0;
}





/*
SearchTree Initial(SearchTree T)
{
	int ch;
	cin>>ch;
	if(ch==0)T=NULL;
	else
	{
		if(!(T=(SearchTree)malloc(sizeof(SearchTree))))exit(0);
		
		Initial(T->Left);
		T->Element=ch;
		Initial(T->Right);
	}
	return 0;
}
*/



SearchTree MakeEmpty(SearchTree T)
{
	if(T!=NULL)
	{
		MakeEmpty(T->Left);
		MakeEmpty(T->Right);
		free(T);
	}
	return NULL;
}

Position Find(int x,SearchTree T)
{
	if(T==NULL)
		return NULL;
	if(x<T->Element)
		return Find(x,T->Left);
	else
		if(x>T->Element)
			return Find(x,T->Right);
		else 
			return T;
}

SearchTree Insert(int x,SearchTree T)
{
	if(T==NULL)
	{
		T=(SearchTree)malloc(sizeof(struct TreeNode));
		if(T==NULL)
		{
			cout<<"Out of space!";
		    exit(0);
		}
		else
		{
			T->Element=x;
			T->Left=T->Right=NULL;
		}
	}
	else
		if(x<T->Element)
			T->Left=Insert(x,T->Left);
		else
			if(x>T->Element)
				T->Right=Insert(x,T->Right);


	return T;

}

Position FindMin(SearchTree T)
{
	if(T!=NULL)
		while(T->Left!=NULL)
			T=T->Left;

	return T;
}





SearchTree Delete(int x,SearchTree T)
{
	Position TmpCell;

	if(T==NULL)
	{
		cout<<"Element not found!";
		exit(0);
	}
	else
		if(x<T->Element)
			T->Left=Delete(x,T->Left);
		else
			if(x>T->Element)
				T->Right=Delete(x,T->Left);
			else 
				if(T->Left&&T->Right)
				{
					TmpCell=FindMin(T->Right);
					T->Element=TmpCell->Element;
					T->Right=Delete(T->Element,T->Right);
				}
				else
				{
					TmpCell=T;
					if(T->Left==NULL)
						T=T->Right;
					else if(T->Right==NULL)
						T=T->Left;
					free(TmpCell);
				}

				return T;
}