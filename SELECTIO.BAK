#include<stdio.h>
#include<conio.h>
#define SIZE 7
void selection(int a[]);
void main()
{
	int a[SIZE],i;
	clrscr();
	for(i=0;i<SIZE;i++)
	{
		printf("Enter Element");
		scanf("%d",&a[i]);
	}
	selection(a);
	for(i=0;i<SIZE;i++)
	{
		printf("\t%d",a[i]);
	}
	getch();
}
void selection(int a[])
{
	int min,i,temp,j;
	for(i=0;i<SIZE-1;i++)
	{
		min=i;
		for(j=i+1;j<SIZE;j++)
		{
			if(a[min]>a[j])      //pass < for decending order
			{
				min=j;
			}
		}
		if(min!=i)
		{
			temp=a[min];
			a[min]=a[i];
			a[i]=temp;
		}
	}
}