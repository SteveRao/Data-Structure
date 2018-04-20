#ifndef LISTTABLE_H_
#define LISTTABLE_H_
#include<iostream>
#include<stdlib.h>
struct link
{
	struct link* prior;
	int nodedate;//学号
	struct link* next;
};


struct link* Insert(struct link* head,int nodedate)
{
	struct link* p=head,*pr=head,*temp=NULL;
	p=(struct link*)malloc(sizeof(struct link));//新建一个节点
	if(p==NULL)//检查分配空间是否成功
	{
		printf("Adding new node fail!");
		exit(0);
	}
	p->nodedate=nodedate;
	p->prior=NULL;
	p->next=NULL;//将标尾置为空,新数据存入新链节中
	if(head==NULL)
	{
		pr->next=p;
		return pr;
	}
	while(pr->nodedate<nodedate&&pr->next!=NULL)
	{
		//temp=pr;
		pr=pr->next;
	}
	if(pr->nodedate>nodedate)
	{
		if(pr==head)
		{
			p->prior=pr;
			pr->next=p;
		}
		else
		{
			p->next=pr;
			p->prior=pr->prior;
			pr->prior->next=p;
			pr->prior=p;
		}
	}
	else//否者插入表尾
	{
		pr->next=p;
		p->prior=pr;
	}
}

struct link* Append(struct link* head,int nodedate)
{
	struct link* p=head,*pr=head;//*temp=NULL;//待会注意检查是否需要将p指针初始化为head节点？
	p=(struct link*)malloc(sizeof(struct link));//新建一个节点
	if(p==NULL)//检查分配空间是否成功
	{
		printf("Adding new node fail!");
		exit(0);
	}
	p->nodedate=nodedate;
	p->prior=NULL;
	p->next=NULL;//将标尾置为空,新数据存入新链节中
	if(head==NULL)
	{
		head=p;
	}else{
		while(pr->next!=NULL)
		{
			pr=pr->next;
		}//找到尾节点
		pr->next=p;
		p->prior=pr;
	}
	return head;
}

void Print(struct link* head)
{
	struct link* p=head;//,*pr=NULL;
	while(p!=NULL)
	{
		printf("%d\n",p->nodedate);;
		p=p->next;
	}
}

struct link* Delete(struct link* head,int nodedate)
{
	struct link* p=head,*pr=NULL;
	if(p==NULL)
	{
		printf("该链表为空！");
		return head;
	}
	
	while(p->next!=NULL&&p->nodedate!=nodedate)//非常容易出错
		{
			pr=p;
			p=p->next;
		}
		if(nodedate==p->nodedate)
		{
			if(p==head)
			{
				head=p->next;
				p->next->prior=NULL;
			}
			else
			{
				pr->next=p->next;
				p->next->prior=pr;
			}
			free(p);
		}
		else
		{
			printf("没有找到要删除的项\n");
		}
		return head;
}

void Menu()
{
	printf("1.Do you want to append a new node?\n");
	printf("2.Do you want to delete a node?\n");
	printf("3.Show the list\n");
	printf("4.Insert a new node");
}

#endif