#ifndef LISTTABLE_H_
#define LISTTABLE_H_
#include<stdio.h>
#include<stdlib.h>
struct link
{
	int nodedate;//ѧ��
	struct link* next;
};
struct link* Insert(struct link* head,int nodedate)
{
	struct link* p=head,*pr=head,*temp=NULL;
	p=(struct link*)malloc(sizeof(struct link));//�½�һ���ڵ�
	if(p==NULL)//������ռ��Ƿ�ɹ�
	{
		printf("Adding new node fail!");
		exit(0);
	}
	p->nodedate=nodedate;
	p->next=NULL;//����β��Ϊ��,�����ݴ�����������
	if(head==NULL)
	{
		pr->next=p;
		return pr;
	}
	while(pr->nodedate<nodedate&&pr->next!=NULL)
	{
		temp=pr;
		pr=pr->next;
	}
	if(pr->nodedate>=nodedate)
	{
		if(temp==NULL)
		{
             pr->next=p;
		}
		else
		{
			pr=temp;
			p->next=pr->next;
			pr->next=p;
		}
	}
	else//���߲����β
	{
		pr->next=p;
	}
}

struct link* Append(struct link* head,int nodedate)
{
	struct link* p=head,*pr=head,*temp=NULL;//����ע�����Ƿ���Ҫ��pָ���ʼ��Ϊhead�ڵ㣿
	p=(struct link*)malloc(sizeof(struct link));//�½�һ���ڵ�
	if(p==NULL)//������ռ��Ƿ�ɹ�
	{
		printf("Adding new node fail!");
		exit(0);
	}
	p->nodedate=nodedate;
	p->next=NULL;//����β��Ϊ��,�����ݴ�����������
	if(head==NULL)
	{
		head=p;
	}else{
		while(pr!=NULL)
		{
			temp=pr;
			pr=pr->next;
		}//�ҵ�β�ڵ�
		temp->next=p;
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
		printf("������Ϊ�գ�");
		return head;
	}
	
	while(p->next!=NULL&&p->nodedate!=nodedate)//�ǳ����׳���
		{
			pr=p;
			p=p->next;
		}
		if(nodedate==p->nodedate)
		{
			if(p==head)
			{
				head=p->next;
			}
			else
			{
				pr->next=p->next;
			}
			free(p);
		}
		else
		{
			printf("û���ҵ�Ҫɾ������\n");
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