#include<stdio.h>
#include<conio.h>
#define SIZE 6
int queue[SIZE];
int front=0,rear=0;
void insert();
void deletequ();
void display();
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
			case 2:deletequ();
				break;
			case 3:display();
				break;
			case 0:exit(0);
				break;
			default:printf("Enter vaid choice");
				break;
		}
	}

}
void insert()
{
	if(SIZE == rear)
	{
		printf("\nQueue is full");
	}
	else
	{
		int ele;
		printf("\nEnter element");
		scanf("\n%d",&ele);
		queue[rear]=ele;
		rear++;
	}
}
void deletequ()
{
	int i;
	if(rear == front)
	{
		printf("Queue is empty");
	}
	else
	{
		printf("Delete:%d",queue[front]);
		for(i=front;i<rear-1;i++)
		{
			queue[i]=queue[i+1];
		}
		rear--;
	}
}
void display()
{
	int i;
	printf("Element in queue is:-");
	for(i=front;i<rear;i++)
	{
		printf("%d\t",queue[i]);
	}
}