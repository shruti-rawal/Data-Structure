#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void pop();
void push();
void display();
struct node{
	int data;
	struct node *link;
};
struct node* top=NULL;
void main()
{
	int ch;
	clrscr();
	while(1){
		printf("\n-------MENU--------");
		printf("\n1.Push the element");
		printf("\n2.Pop the element");
		printf("\n3.Display the element");
		printf("\n0.Exit");
		printf("\nEnter your choice");
		scanf("%d",&ch);
		switch(ch){
			case 1:push();
				break;
			case 2:pop();
				break;
			case 3:display();
				break;
			case 0:exit(0);
				break;
			default:printf("Invalid choice");
				break;
		}

	}
	getch();
}
void push()
{
	struct node* temp;
	temp=(struct node*)malloc(sizeof(struct node));
	printf("Enter data");
	scanf("%d",&temp->data);
	temp->link=top;
	top=temp;
}
void pop()
{
	struct node *temp;
	if(top==NULL)
	{
		printf("\nStack is empty");
	}
	else
	{       temp=top;
		printf("\nElement to be delete:-%d",temp->data);
		top=top->link;
		temp->link=NULL;
		free(temp);
	}
}
void display()
{
	struct node *temp;
	if(top==NULL)
	{
		printf("Stack is empty");
	}
	else{
		temp=top;
		while(temp!=NULL)
		{
			printf("%d\n",temp->data);
			temp=temp->link;
		}
	}
}