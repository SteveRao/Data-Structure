#include"LINKTABLE.h"
int main()
{
	char op;
	struct link* head=NULL;
	int nodedate;
	Menu();
	printf("Enter your choose:");
	scanf("%d",&op);
	getchar();
	while(op>=1&&op<=4)
	{
		switch (op)
	{
	case 1:
		printf("Please enter the number: ");
		scanf("%d",&nodedate);
		head=Append(head,nodedate);
		Print(head);
		break;
	case 2:
		printf("Please enter the number to delete: ");
		scanf("%d",&nodedate);
		head=Delete(head,nodedate);
		break;
	case 3:
		Print(head);
		break;
	case 4:
		printf("Please enter the number: ");
		scanf("%d",&nodedate);
		head=Insert(head,nodedate);
		Print(head);
		break;
	default:
		break;
	}
		printf("Enter your choose:");
	    scanf("%d",&op);
	    getchar();
	}
	
	getchar();
	return 0;
}


