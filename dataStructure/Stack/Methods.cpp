#include"STACK.h"

int* InitStack(SqStack & S)
{
	S.base=(int* )malloc(STACK_INIT_SIZE*sizeof(int));
	if(!S.base)exit(0);
	S.top=S.base;
	S.stacksize=STACK_INIT_SIZE;
	return S.top;
}

int* ClearStack(SqStack & S)
{
	S.top=S.base;
	S.stacksize=0;
	return S.top;
}

int StackEmpty(SqStack & S)
{
	if(S.top==S.base)
		return 1;
	else
		return 0;
}

int* Push(SqStack & S,int e)
{
	if(S.top-S.base>=S.stacksize)
	{
		S.base=(int* )realloc(S.base,(S.stacksize+STACKINCREMENT)*sizeof(int));
		if(!S.base)exit(0);
		S.top=S.base+S.stacksize;
		S.stacksize=STACK_INIT_SIZE+STACKINCREMENT;
	}
	*S.top++=e;
	return S.top;
}

int Pop(SqStack & S,int e)
{
	if(S.top==S.base)return 0;
	e=*--S.top;
	return e;
}