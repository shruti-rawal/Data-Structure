#include<stdio.h>
#include<conio.h>
#define SIZE 7
void insertion(int a[]);
void main()
{
	int a[SIZE],i;
	clrscr();
	for(i=0;i<SIZE;i++)
	{
		printf("Enter Element");
		scanf("%d",&a[i]);
	}
	insertion(a);
	for(i=0;i<SIZE;i++)
	{
		printf("\t%d",a[i]);
	}
	getch();
}
void insertion(int a[])
{
	int i,temp,j;
	for(i=1;i<SIZE;i++)
	{
		temp=a[i];
		j=i-1;
		while(a[j]>temp && j>=0)
		{

			a[j+1]=a[j];
			j--;
		}
		a[j+1]=temp;
	}
}