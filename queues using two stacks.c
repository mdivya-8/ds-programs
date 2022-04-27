#include<stdio.h>
#include<stdlib.h>
int a1[5],a2[5],top1=-1,top2=-1;//n means choice
void enque(int n);
int deque();
int element;
int main()
{
	int n;
	while(1)
	{
		printf("1)enque 2)deque 3)exit \n");
		scanf("%d",&n);
			switch(n)
			{
				case 1:
					printf("enter elements:\n");
					scanf("%d",&element);
					enque(element);
					break;
				case 2:
					printf("element popped %d\n",deque());
					break;
				case 3:
					exit(0);
			}
	}
}
void enque(int n)
{
	a1[++top1]=n;
}
int deque(int n)
{
	while((top1)!=-1)
	{
		a2[++top2]=a1[top1--];
	}
	return a2[top2--];
}