#include"STACK.h"
int main()
{
	//M.base=M.top=NULL;
	SqStack Sk;
	int i,j,e;
	InitStack(Sk);
	for(i=0;i<10;i++)//������ѹ��ջ
	{
		Sk.top=Push(Sk,i);
	}
	for(j=0;!StackEmpty(Sk);j++)
	{
		e=Pop(Sk,e);
		printf("%d\n",e);
	}
	system("pause");
	return 0;
}