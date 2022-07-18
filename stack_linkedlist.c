#include<stdio.h>
#include<stdlib.h>
struct node
{
int data;
struct node *link;
};
void push()
{
struct node *newnode;
newnode=(struct node  *)malloc(soizeof(struct node));
newnode->data=x;
newnode->next=top;
top=newnode;
}

/*void push()
{
int x;
struct node *newnode;
newnode=(struct node *)malloc(sizeof(struct node));
printf("enter element:\n");
scanf("%d",&x);
new->data=x;
new->link=top;
top=newnode;
}
*/


void pop()
{
struct node *temp;
temp=top;
if(top==0)
printf("stack is empty\n");
else
{
printf("poped element is :%d",temp->data);
top=top->link;
free(temp);
}
}
void display()
{
struct node *temp;
temp=top;
if(top==0)
printf("stack is empty\n");
else
{
while(temp!=0)
{
printf("pushed element is :%d",temp->data);
temp=temp->link;
}
}
}
void main()
{
	int ch;
	do
	{
		printf("enter choice:1)push 2)pop 3)display 4)exit\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:push();
			       break;
			case 2:pop();
			       break;
			case 3:display();
			       break;
		        case 4:exit(0);
			default:printf("Invalid choice");
		}
	}while(ch!=0);
	scanf("%d",&ch);
}

