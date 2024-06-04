#include<stdio.h>
#include<conio.h>
#define SIZE 10
void main()
{       int a[SIZE];
	int i,se,mid,flag=0;
	int l=0,r=SIZE-1;
	clrscr();
	for(i=0;i<SIZE;i++)
	{
		printf("Enter Element in assending order");
		scanf("%d",&a[i]);
	}
	printf("Enter Element to serch");
	scanf("%d",&se);
	while(l<=r){
		mid=(l+r)/2;
		if(se==a[mid])
		{
		printf("Element found at position:-%d",mid);
		flag=1;
		break;
		}
		else if(se<a[mid])
		{
			r=mid-1;
		}
		else
		{
			l=mid+1;
		}
	}
	if(flag==0)
	{
		printf("Element not found");
	}
	getch();
}