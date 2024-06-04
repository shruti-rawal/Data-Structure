#include<stdio.h>
#include<conio.h>
#define SIZE 5
int cqueue[SIZE];
int front=-1;
int rear=-1;
void insert(int ele);
void deleteele();
void display();
void main()
{
	int ch,ele;
	clrscr();
	while(1)
	{
		printf("------------MENU------------");
		printf("\n1.insert\n2.delete\n3.display\n4.exit");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:printf("Enter Element to insert");
				scanf("%d",&ele);
			       insert(ele);
			       break;
			case 2:deleteele();
				break;
			case 3:display();
				break;
			case 4:exit(0);
				break;
			default:printf("Enter valid option");
				break;
		}
	}
	getch();
}
void insert(int ele)
{
	if(front == rear+1 || rear == SIZE-1)
	{
		printf("\nQueue is Full");
	}
	else if(front == -1 && rear == -1)
	{
		front=rear=0;
		cqueue[rear]=ele;
	}
	else if(rear == SIZE-1)
	{
		 rear=0;
		cqueue[rear]=ele;
	}
	else{
		rear++;
		cqueue[rear]=ele;

	}

}
void deleteele()
{
	int ele;
	if(front == -1 && rear == -1)
	{
		printf("\nQueue is empty");
	}
	else if(front == rear)
	{
		ele=cqueue[front];
		front=rear=-1;
	}
	else if(front == SIZE-1)
	{
	       ele=cqueue[front];
	       front=0;
	}
	else{
		ele=cqueue[front];
		front++;
	}
}
void display()
{
	int i=front;
	if(front==-1 && rear==-1)
	{
		printf("\nQueue is empty");
	}
	else
	{
		printf("\nElemnts in queue");
	       while(i<rear)
	       {
			printf("%d",cqueue[i]);
			i=(i+1)%SIZE;
	       }

	}
}
