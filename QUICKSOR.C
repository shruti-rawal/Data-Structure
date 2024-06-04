#include<stdio.h>
#include<conio.h>
#define SIZE 7
int partition(int a[],int lb,int ub);
void quicksort(int a[],int lb,int ub);
void main()
{
	int a[SIZE],i;
	clrscr();
	for(i=0;i<SIZE;i++)
	{
		printf("Enter Element");
		scanf("%d",&a[i]);
	}
	quicksort(a,0,SIZE-1);
	for(i=0;i<SIZE;i++)
	{
		printf("\t%d",a[i]);
	}
	getch();
}
int partition(int a[],int lb,int ub)
{
	int start=lb,end=ub,pivot=a[lb],temp;
	while(start<end){
		while(a[start]<=pivot && start<end)
		{
			start++;
		}
		while(a[end]>pivot)
		{
			end--;
		}
		if(start<end){
		temp=a[start];
		a[start]=a[end];
		a[end]=temp;
		}
	}
	temp=a[end];
	a[end]=a[lb];
	a[lb]=temp;
	return end;
}
void quicksort(int a[],int lb,int ub)
{
     int loc;
     if(lb<ub)
     {
	loc=partition(a,lb,ub);
	quicksort(a,lb,loc-1);
	quicksort(a,loc+1,ub);
     }
}