#include<conio.h>
#include<string.h>
struct node{
	char data;
	struct node *next;
};
struct node *top=NULL;
void push(char bracket);
int pop(char bracket);
int isMatch(char bracket);
void main(){
	int i;
	int success=1;
	char exp[100];
	clrscr();
	gets(exp);
	for(i=0;i<strlen(exp);i++){
		if(exp[i]=='{'||exp[i]=='('||exp[i]=='['){
			push(exp[i]);

		}else if(exp[i]=='}'||exp[i]==')'||exp[i]==']'){
			if(pop(exp[i])==0){
				success=0;
				break;
		}

		}else {
			success=0;
			break;
		}
	}
		if(success==1 && top==NULL)
		{
			printf("valid");
		}
		else{
			printf("invalid");

		}
		getch();
	}



void push(char bracket){
	struct node *n1;
	n1=(struct node*)malloc(sizeof(struct node));
	n1->data=bracket;
	n1->next=NULL;
	if(top==NULL){
		top=n1;
	}else{

		n1->next=top;
		top=n1;
	}
  }
int pop (char bracket){
	int Match=0;
	struct node *temp;
	if(bracket==')'){
		Match=isMatch('(');
	}else if(bracket=='}'){
		Match=isMatch('{');
	}else{
		Match=isMatch('[');
	}
	if(Match==1){
		temp=top;
		top=top->next;
		free(temp);
		return 1;
	}else{
		return 0;
	}
}

int isMatch(char bracket){
	if(top->data==bracket){
	return 1;
	}
	return 0;
}
