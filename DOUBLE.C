#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void append();
void display();
int count();
void insertAtAfterPos();
void insertBeforePos();
void deleteNode();
struct node
{
	int data;
	struct node *right;
	struct node *left;
};
struct node* root=NULL;
void main()
{
	int ch,l;
	clrscr();
	while(1){
		printf("\nOPRATION ON DOUBLY LINKED LIST");
		printf("\n1.Add/Append\n2.Display\n3.Length\n4.InsertAtPoostitionAfter\n");
		printf("5.Before position\n6.Delete node from list\n0.EXIT");
		scanf("\n%d",&ch);
		switch(ch){
			case 1:append();
				break;
			case 2:display();
				break;
			case 3:l=count();
				printf("Number of element in list is %d",l);
				break;
			case 4:insertAtAfterPos();
				break;
			case 5:insertBeforePos();
				break;
			case 6:deleteNode();
				break;
			case 0:exit(0);
				break;
			default:printf("\nEnter valid choice");
				break;
		}              // switch
	}               //while

}          //main
void append(){
	struct node* temp;
	temp=(struct node*)malloc(sizeof(struct node));
	printf("Enter node data");
	scanf("%d",&temp->data);
	temp->left=NULL;
	temp->right=NULL;
	if(root==NULL){
		root=temp;
	}
	else{
		struct node *p;
		p=root;
		while(p->right!=NULL){
			p=p->right;
		}
		p->right=temp;
		temp->left=p;

	}

}
void display(){

	struct node *temp=root;
	while(temp!=NULL)
	{
		printf("\n%p->%d->%p",temp->left,temp->data,temp->right);
		temp=temp->right;
	}
}
int count(){
	int count=0;
	struct node *temp=root;
	while(temp!=NULL){

		count++;
		temp=temp->right;
	}
	return count;
}
void insertAtAfterPos()
{
	struct node* temp=root,*n2,*n1;
	int pos,i;
	printf("Enter position");
	scanf("%d",&pos);
	if(pos>count())
	{
		printf("OVERFLOW");
	}
	else{
		n1=(struct node*)malloc(sizeof(struct node));
		printf("Enter data");
		scanf("%d",&n1->data);
		n1->left=NULL;
		n1->right=NULL;
		if(pos == 1 )
		{
			temp->left=n1;
			n1->right=root;
			root=n1;
		}
		else
		{
			for(i=0;i<pos;i++)
			{
				if(i==pos)
				{
					n2=temp->right;
					n1->right=temp->right;
					n1->left=temp;
					temp->right=n1;
					if(n2!=NULL){
					n2->left=n1;
					}
					break;
				}
				temp=temp->right;

			}

		}
	 }

}
void insertBeforePos(){
	struct node* temp,*p;
	int i=1,pos,len;
	printf("Enter Position");
	scanf("%d",&pos);
	len=count();
	if(pos>len)
	{
		printf("OVERFLOW");
		printf("List is having %d element",len);
	}
	else
	{
		temp=(struct node*)malloc(sizeof(struct node));
		printf("\nEnter node data");
		scanf("%d",&temp->data);
		temp->left=NULL;
		temp->right=NULL;
		p=root;
		while(i<pos-1)
		{
			p=p->right;
			i++;
		}

		temp->right=p->right;
		temp->right->left=temp;
		temp->left=p;
		p->right=temp;

	}
}
void deleteNode(){
	struct node *temp=root,*n1,*n2;
	int loc,i;
	printf("Enter node to delete");
	scanf("%d",&loc);
	if(loc>count())
	{
		printf("Enter valid value");
	}
	else{
		if(loc==1){
		 root=temp->right;
		 temp->right->left=NULL;
		 temp->right=NULL;
		 free(temp);
		}
		else{
			struct node *p,*q;
			int i=1;
			while(i<loc-1)
			{
				temp=temp->right;
				i++;
			}
			p=temp->right;
			temp->right=p->right;
			q=p->right;
			q->left=temp;
			p->left=p->right=NULL;
			free(p);

	       }   //end of else

	}   		//end of else

}