#include"QUEUE.h"
int main()
{
	using namespace std;
	SqQueue Q;
	Q.base=NULL;//Don't use pointer that isn't initialized
	int e;
	cout<<"Please enter the MAXSIZE of queue:";
	cin>>MAXSIZE;
	InitQueue(Q);
	for(int i=0;i<MAXSIZE-1;i++)
	{
		EnQueue(Q,i);
	}
	int m=QueueLength(Q);
	for(int i=0;i<m;i++)
	{
		DeQueue(Q,e);
		cout<<e<<endl;
	}
	system("pause");
	return 0;
}
