#include<stdio.h>
#include<conio.h>
#define SIZE 5
void main()
{
	int i,j,temp;
	int a[SIZE],flag=0;
	clrscr();
	for(i=0;i<SIZE;i++)
	{
		printf("Enter Element");
		scanf("%d",&a[i]);
	}
       for(i=0;i<SIZE;i++)
       {
		flag=0;
		for(j=0;j<SIZE-1-i;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
				flag=1;
			}

		}
		if(flag==0)
		{
			break;
		}
	}
	for(i=0;i<SIZE;i++)
	{
		printf("\t%d,",a[i]);
	}

	getch();
}