#include<stdio.h>
#include<stdlib.h>
typedef struct circular
{
	char data;
	struct cll *link;
}cll;
cll *head=NULL;
void insert(char data)
{
	cll *new=NULL,*temp=NULL;
	new=(cll *)malloc(sizeof(cll));
	if(new==NULL)
	{
		printf("memory is not allocated\n");
	}
	else
	{
		if(head==NULL)
		{
			head=new;
			new->data=data;
			new->link=new;
		}
		else
		{
			new->data=data;
			new->link=head->link;
			head->link=new;
			head=new;
		}
	}
}
void display()
{
	printf("Data Inserted\n");
	cll *temp=head;
	if(temp==NULL)
	{
		printf("List IS Empty\n");
	}
	else
	{
		temp=temp->link;
		do{
			printf("%c\n",temp->data);
			temp=temp->link;
		}while(temp!=head->link);

	}
}
int main()
{
	char data;
	for(int i=1;i<=5;i++)
	{
		printf("enter data\n");
		scanf(" %c",&data);
		insert(data);
	}
	display();
}