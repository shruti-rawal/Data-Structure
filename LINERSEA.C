#include<stdio.h>
#include<conio.h>
#define SIZE 10
void main()
{       int a[SIZE];
	int i,serch;
	clrscr();
	for(i=0;i<SIZE;i++)
	{
		printf("Enter element %d",i+1);
		scanf("%d",&a[i]);
	}
	printf("Enter serch element");
	scanf("%d",&serch);
	for(i=0;i<SIZE;i++)
	{
		if(serch==a[i])
		{
			printf("Serch found at position: %d",i+1);
			break;
		}
	}
	if(i==SIZE){
		printf("Serch not Found");
	}
	getch();
}