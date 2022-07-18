#include<stdio.h>
#include<stdlib.h>
struct bst{
	int data;
	struct bst *left,*right;
};
struct bst *insert(struct bst *,int);
void inorder(struct bst*);
void postorder(struct bst*);
void preorder(struct bst*);
void search(struct bst *,int);
int main()
{
	struct bst *root=NULL;
	int choice,data;
	while(1)
	{
		printf("1:insert\t2:inorder\t3:preorder\t4:postorder\t5:search\t6:exit\n");
		printf("enter ur choice\n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:printf("enter the data\n");
			       scanf("%d",&data);
			       root=insert(root,data);
			       break;
			case 2:inorder(root);
			       break;
			case 3:preorder(root);
			       break;
			case 4:postorder(root);
			       break;
			case 5:printf("enter the value to be search\n");
			       scanf("%d",&data);
			       search(root,data);
			       break;
			case 6:exit(0);
		}
	}
}
struct bst *insert(struct bst *ptr,int d)
{
	struct bst *temp=NULL;
	if(ptr==NULL)
	{
		ptr=(struct bst *)malloc(sizeof(struct bst));
		ptr->left=ptr->right=NULL;
		ptr->data=d;
		return ptr;
	}
	else {
		if(d<ptr->data)
		ptr->left=insert(ptr->left,d);
	else if(d>ptr->data)
		ptr->right=insert(ptr->right,d);
	else printf("%d data is alreday existing\n",d);
	return ptr;
	}
}
void inorder(struct bst *ptr)
{
	if(ptr)
	{
		inorder(ptr->left);
		printf("%d\t",ptr->data);
		inorder(ptr->right);
	}
}


void preorder(struct bst *ptr)
{
	if(ptr)
	{
		printf("%d\t",ptr->data);
		preorder(ptr->left);
		preorder(ptr->right);
	}
}
void postorder(struct bst *ptr)
{
	if(ptr)
	{
		postorder(ptr->left);
		postorder(ptr->right);
		printf("%d\t",ptr->data);
	}
}
void search(struct bst *ptr,int d)
{
	if(ptr==NULL)
	{
		printf("not found\n");
	}
	else if(d<ptr->data)
	{
		search(ptr->left,d);
	}

	else if(d>ptr->data)
	{
		search(ptr->right,d);
	}	
	else 
	{
		printf("%d is found\n",ptr->data);
	}
}