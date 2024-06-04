#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void append();
void display();
void addatbegin();
void delet();
void AddAftrePosition();
void AddBeforePosition();
int length();

struct node{
	int data;
	struct node* link;
};
struct node* head=NULL;
void main()
{
	int ch,l;
	clrscr();
		while(1){

		printf("\n---------MENU------------");
		printf("\n1.INSERT AT END\n2.ADD AT BEGNING OF THE LIST\n3.Add After Position");
		printf("\n4.Add Before position\n5.Length");
		printf("\n6.Delete the element\n7.DISPLAY\n0.EXIT");
		printf("\nEnter your choice");
		scanf("\n%d",&ch);
		switch(ch)
		{
			case 1:append();
				break;
			case 2:addatbegin();
				break;
			case 3:AddAftrePosition();
				break;
			case 4:AddBeforePosition();
				break;
			case 5:l=length();
				printf("Length of a list is:- %d",l);
				break;
			case 6:delet();
				break;
			case 7:display();
				break;
			case 0:exit(0);
				break;
			default:printf("\nInvalid choice");
				break;

		}     //  end of switch


	} //end of while loop
	getch();
}              //end of main
void append()
{
    struct node* temp;
    temp=(struct node*)malloc(sizeof(struct node));
    printf("\nEnter data of the node");
    scanf("\n%d",&temp->data);
    temp->link=NULL;
    if(head==NULL)
    {
	head=temp;
    }      //end of if
    else
    {
	struct node *p;
	p=head;
	while(p->link!=NULL)
	{
		p=p->link;
	} //end of while
	p->link=temp;
    }        //end of else

}  //end of append

void addatbegin()
{
	struct node* temp;
	temp=(struct node*)malloc(sizeof(struct node));
	printf("Enter Data of the node");
	scanf("%d",&temp->data);
	temp->link=NULL;
	if(head==NULL)
	{
		head=temp;
	}	//end of if
	else
	{
		temp->link=head;
		head=temp;
	}
} 		//end of add at begin
void AddAftrePosition()
{
	int pos,i;
	struct node* p,*temp=head;
	printf("Enter Position");
	scanf("%d",&pos);
	if(pos>length())
	{
		printf("Overflow,Enter smaller vaule");
	}
	else{
		p=(struct node*)malloc(sizeof(struct node));
		printf("Enter Data");
		scanf("%d",&p->data);
		p->link=NULL;
		for(i=1;i<=pos;i++)
		{
			if(i==pos){
				p->link=temp->link;
				temp->link=p;
				break;
			}
			temp=temp->link;
		}
	}
}
void AddBeforePosition()
{
	int pos,i;
	struct node *n1,*temp=head;
	printf("Enter Psotion");
	scanf("%d",&pos);
	if(pos>length()){
		printf("Overflow,Enter smaller value");
	}
	else{
		n1=(struct node*)malloc(sizeof(struct node));
		printf("Enter data");
		scanf("%d",&n1->data);
		n1->link=NULL;
		if(pos==1){
			n1->link=head;
			head=n1;
		}
		else
		{
			for(i=1;i<=pos;i++)
			{
				if(i==pos-1){
					n1->link=temp->link;
					temp->link=n1;
					break;
				}
				temp=temp->link;
			}


		}

	}


}
void delet()
{
	struct node* temp;
	int loc;
	temp=head;
	printf("Enter  location to delete thr element");
	scanf("%d",&loc);
	if(temp == NULL)
	{
		printf("List in empty");
	}
	else if(loc>length())
	{
		printf("Invalid Location!!");
	}
	else if(loc == 1)
	{
		head=temp->link;
		temp->link=NULL;
		free(temp);
	}
	else
	{
		struct node* p=head,*q;
		int i=1;
		while(i<loc-1)
		{
			p=p->link;
			i++;
		}
		q=p->link;
		p->link=q->link;
		q->link=NULL;
		free(q);
	}
}
int length()
{
	int count=0;
	struct node* temp=head;
	while(temp!=NULL)
	{
		count++;
		temp=temp->link;
	}
	return count;
}

void display()
{
	struct node *temp=head;
	if(temp == NULL)
	{
		printf("LIST IS EMPTY");
	}
	else{
		while(temp!=NULL)
		{
			printf("%d -> %p\t",temp->data,temp->link);
			temp=temp->link;

		}   //end of while
	}
} //end of display