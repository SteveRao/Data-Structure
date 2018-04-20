#include"BSTree.h"
int main()
{
	int ch;
	SearchTree T=NULL;
	SearchTree P=NULL;
	cin>>ch;
	while(ch!=0)
	{
		T=Insert(ch,T);
		cin>>ch;
	}
	Retrieve(T);
	/*
	cout<<"Enter the number to find:";
	cin>>ch;
	P=Find(ch,T);
    cout<<P->Element<<endl;//为什么非要将结构体的定义放在文件里面
	*/
	cout<<"\nEnter the number to Delete:";
	cin>>ch;
	P=Delete(ch,T);
	Retrieve(T);
	system("pause");
	return 0;
}