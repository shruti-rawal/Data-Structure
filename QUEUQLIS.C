#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
{
	int ele;
	struct node *next;
};
struct node *front=0;
struct node *rear=NULL;
void insert();
void display();
void deleteele();
void main()
{
	int ch;
	clrscr();
	while(1){
		printf("\n--------MENU-------");
		printf("\n1.Insret");
		printf("\n2.delete");
		printf("\n3.display");
		printf("\n0.Exit");
		printf("\nEnter yout choice");
		scanf("\n%d",&ch);
		switch(ch)
		{
			case 1:insert();
				break;
			case 2:deleteele();
				break;
			case 3:display();
				break;
			case 0:exit(0);
				break;
			default:printf("Enter vaid choice");
				break;
		}
	}
	getch();
}
void insert()
{
	struct node* temp;
	temp=(struct node*)malloc(sizeof(struct node));
	printf("\nEnter element:");
	scanf("\n%d",&temp->ele);
	temp->next=NULL;
	if(rear == NULL)
	{
	      front=rear=temp;
	}
	else
	{
		rear->next=temp;
		rear=temp;
	}

}
void display()
{
	struct node *temp=front;
	while(temp!= NULL)
	{
		printf("%d->\t",temp->ele);
		temp=temp->next;
	}
}
void deleteele()
{
	struct node* temp=front;
	if(front == NULL)
	{
		printf("Queue is empty");
	}
	else
	{
		printf("Delted etlement:%d",temp->ele);
		front=temp->next;
		free(temp);

	}
}