/*
Create a list with 3 nodes having int data in single Linked list data : 100,200,300
*/
#include<stdio.h>
#include<stdlib.h>
#define SIZE 3

typedef struct stu
{
	int data;
	struct stu *next;
}S;

S *head=NULL;

void insert(int data)
{
	S *temp=NULL;
	S *new=malloc(sizeof(S));
	if(new==NULL)
		printf("Memory is not allocated\n");
	else
	{
		new->data=data;
		new->next=NULL;
		if(head==NULL)
		{
			head=new;
		}
		else
		{
			temp=head;
			while(temp->next != NULL)
			{
				temp=temp->next;
			}
			temp->next=new;
		}	
	}
}


void print()
{
	if(head==NULL)
		printf("list is empty\n");
	else
	{
		S *temp=head;
		while(temp != NULL)
		{
			printf("%d ",temp->data);
			temp=temp->next;
		}
		printf("\n");
	}
}

int main()
{
int i,data;
for(i=0;i<SIZE;i++)
{
	printf("Enter data-%d:",i);
	scanf("%d",&data);
	insert(data);
}
printf("The data in 3 nodes of single linked list:\n");
print();
return 0;
}