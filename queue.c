#include<stdio.h>
#define s 5
int front=-1;
int rear=-1;
int q[s];
void enque(int ele)//1
{
	if(rear==s-1)          //   front=0  rear=0  rear=1               
	{
		printf("queue is full:\n");
		return;
	}
	else
	{
	    if(front==-1)     
	    front=0;
	    
	   rear++;
	   q[rear]=ele;//q[0]=1   q[1]=2  q[2]=3 ;rear=s-1
	}
}
void deque()
{
	if(front==-1)
	{
		printf("queue is empty\n");
		return;
	}
	else
	{
	    printf("deleted ele is %d\n",q[front]);//q[0]=1
	    front++;//front=1  q[1]=2
	 //   if(front>rear)
	   // front=rear=-1;
	}
}
void display()
{
    if(rear==-1)
    {
        printf("queue is empty\n");
    }
    else
    {
 	   int i=front;//0  front moved from 0   to rear s-1
	   for(;i<=rear;i++)
	  printf("%d\n",q[i]);//q[0]=1,q[1]=2,3
    }
}
int main()
{
	enque(1);
	enque(2);
	enque(3);
	display();
	deque();
	display();
	deque();
	display();
}