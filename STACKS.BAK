#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define N 5
int top=-1;
int stack[N];
void push(int ele);
int pop();
void peek();
int isEmpty();
int isFull();
void display();
void main()
{
	int ch,n;
	clrscr();
	while(1){
		printf("\n---------MENU-------");
		printf("\n1.Enter element in stack");
		printf("\n2.Delete Element in stack");
		printf("\n3.Display Top element in stack");
		printf("\n4.Display element in stack");
		printf("\n0.Exit");
		printf("\nEnter your choice");
		scanf("%d",&ch);
		switch(ch){
			case 1:printf("\nEnter value");
				scanf("%d",&n);
				push(n);
				break;
			case 2:n=pop();
				if(n==0){
					printf("Stack is Empty");
				}
				else{
					printf("%d Elemrnt pop");
				}
				break;
			case 3:peek();
				break;
			case 4:display();
				break;
			case 0:exit(0);
				break;
			default:printf("Enter valid choice");
				break;
		}
	}
	getch();
}
void push(int ele)
{
	if(isFull()){
		printf("Stack is Full");
	}
	else{
		top++;
		stack[top]=ele;
		printf("%d inserted\n",ele);
	}
}
int pop()
{
	int ele;
	if(isEmpty()){
		return 0;
	}
	else{
		ele=stack[top];
		top--;
	}
	return top;
}
int isFull()
{
	if(top==N-1){
		return 1;
	}
	else{
		return 0;
	}
}
int isEmpty()
{
	if(top==-1){
		return 1;
	}
	else{
		return 0;
	}
}
void peek()
{
	if(isEmpty()){
		printf("Stack is empty");
	}
	else{
		printf("%d is Top Elemnt",stack[top]);
	}
}
void display()
{
	int i;
	if(isEmpty())
	{
		printf("No Element\n");
	}
	else
	{
		printf("Stack Element are:-\n");
		for(i=0;i<=top;i++)
		{
			printf("\n%d",stack[i]);
		}
	}
}