#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node* createNode();
void insert(struct node *root);
void inorder(struct node* root);          //recursive function
void preorder(struct node* root);
void postorder(struct node* root);
void deleteNode(struct node* root,struct node *lptr,struct node *rptr,int val);
void deleteRootNode(struct node *root);
struct node
{
	struct node* left;
	int data;
	struct node* right;
};

void main()
{       int i,n,ddata;
	struct node* root=NULL;
	clrscr();
	printf("Enter element you want to insert");
	scanf("%d",&n);
	if(n == NULL)
	{
	    printf("Plese Enter > 0 ");
	}
	else{

		root=createNode();
		for(i=0;i<n-1;i++)
		{
		insert(root);
		}
		printf("\nenter a data for a delete: ");
		scanf("%d",&ddata);
		deleteNode(root,NULL,NULL,ddata);

		printf("\nInorder Binary Serch Tree:-");
		inorder(root);

		printf("\nPreorder Binary Serch Tree:-");
		preorder(root);

		printf("\nPostorder Binary serch Tree:-");
		postorder(root);
	}

	getch();
} 		//end of main

struct node* createNode()
{
	struct node* n1;
	n1=(struct node*)malloc(sizeof(struct node));
	printf("Enter node data");
	scanf("%d",&n1->data);
	n1->left=n1->right=NULL;
	return n1;
}

void inorder(struct node *root)
{
	if(root == NULL)
		return;
	inorder(root->left);
	printf("%d ",root->data);
	inorder(root->right);
}
void preorder(struct node *root)
{
	if(root == NULL)
		return;
	printf("%d ",root->data);
	preorder(root->left);
	preorder(root->right);

}
void postorder(struct node *root)
{
	if(root == NULL)
		return;
	postorder(root->left);
	postorder(root->right);
	printf("%d ",root->data);
}
void insert(struct node *root)
{
	struct node* temp=root,*n2;
	struct node *n1=createNode();
	while(temp!=NULL)
	{
		n2=temp;
		if(n1->data < temp->data)
		{
			temp=temp->left;
		}
		else
		{
			temp=temp->right;
		}
	}
	if(n1->data < n2->data)
	{
		n2->left=n1;
	}
	else
	{
		n2->right=n1;
	}

}
void deleteRootNode(struct node *root)
{
	struct node *temp=root->right,*prev=root;
	while(temp->left!=NULL)
	{
		prev=temp;
		temp=temp->left;
	}
	root->data=temp->data;
	if(prev!=root)
	{
		root->right=temp->right;
	}
	else
	{
		prev->right=temp->right;
	}
	free(temp);

}
void deleteNode(struct node* root,struct node *lptr,struct node *rptr,int val)
{
		struct node* temp=root;
		if(root == NULL)
		return;
	if(val < root->data){
		deleteNode(root->left,root,NULL,val);
	}else if(val> root->data){
		deleteNode(root->right,NULL,root,val);
	}else{
		// if root is leaf node
		if(root->left==NULL && root->right==NULL){
			if(lptr==NULL){
				rptr->right=NULL;
				free(root);
			}else{

			lptr->left=NULL;
				free(root);
			}
		} else if(root->left==NULL){
			//for delete a node which left node is null
			temp=root->right;
			root->data=temp->data;
			free(temp);
			root->right=NULL;

		} else if(root->right==NULL){
			//for delete a node which right node is null
			temp=root->left;
			root->data=temp->data;
			free(temp);
			root->left=NULL;

		} else{
			deleteRootNode(temp);
			//for delete a node with 2 child
		}
	}
}