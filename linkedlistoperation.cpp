# include<stdio.h>
#include<stdlib.h>
void insertion_begin(struct node*head ){
	struct node{
		int data;
		struct node *next;
		};
	struct node *temp,*newnode;
	newnode=(struct node*) malloc(sizeof(struct node));
	printf("enter youe data\n");
	scanf("%d",&newnode->data);
	newnode->next=head;
	head=newnode;
	temp=head;
	printf("node inserted at begin\n");
	while(temp!=0){
		printf("%d ",temp->data);
		temp=temp->next;
	}
	struct node*head;
void creat_list(){
	struct node *newnode,*temp;
	int choice=1;
	
	while(choice){
	newnode=(struct node*)malloc(sizeof(struct node));
	
	printf("Enter your value to make a list:");
	scanf("%d",&newnode->data);
	newnode->next=0;
	
	if(head==0){
		head=temp=newnode;
	}
	else{
		temp->next=newnode;
		temp=newnode;}
		printf("Do you want to store more value print 1 if not print 0");
	scanf("%d",&choice);}
	
	}
void display(){
	struct node *temp;
	temp=head;
	int c=0;
		printf("\nYour made of values:");
	while(temp!=0){
	
		printf("%d ",temp->data);
		
		temp=temp->next;
		c++;
	}
	printf("\n No. of value are %d\n",c);
}
void del_at_beg(){
	if(head==0){
		printf("\nlist is empty\n");
	}
	else{
	
	struct node*temp;
	temp=head;
	head=temp->next;
	free(temp);
	printf("After deleting first node from begining:\n");
	display();
}
	}
	void del_at_end(){
		struct node*temp,*prevnode;
		temp=head;
		while(temp->next!=0){
			prevnode=temp;
			temp=temp->next;
		}
		prevnode->next=0;
		free(temp);
		display();
		
	}
	void del_at_pos(){
		struct node *temp,*nextnode;
		temp=head;
		int i=1,p;
		printf("Enter your position:");
		scanf("%d",&p);
		while(i<p-1){
			temp=temp->next;
			i++;
		}
		nextnode=temp->next;
		temp->next=nextnode->next;
		free(nextnode);
		display();
	}
	

int main(){
	int n;
	creat_list();
	display();
	printf("What operation do you want to perform:\n");
	printf("1 for Deletion at BEGIN\n");
	printf("2 for Deletion at END\n");
	printf("3 for Deletion at Any Specific POSITION\n");
	scanf("%d",&n);
	if(n==1)
		del_at_beg();
	if(n==2)
		del_at_end();
	if(n==3)
		del_at_pos();
	return 0;
}
	
		
	
}
void insertion_end(struct node *head){
	struct node{
		int data;
		struct node *next;
		};
	struct node *temp,*newnode;
	newnode=(struct node*) malloc(sizeof(struct node));
	printf("enter youe data\n");
	scanf("%d",&newnode->data);
	temp=head;
	while(temp->next!=0){
		temp=temp->next;
	}
	temp->next=newnode;
	newnode->next=0;
	temp=head;
	printf("node inserted at end\n");
	while(temp!=0){
		printf("%d ",temp->data);
		temp=temp->next;
	}
	
	
}
void insertion_specific(struct node*head,int c){
	struct node{
		int data;
		struct node *next;
	};
	int pos,i=1;
	struct node *temp,*newnode;
	newnode=(struct node*) malloc(sizeof(struct node));
	printf("Enter your position:\n");
	scanf("%d",&pos);
	printf("enter your data\n");
	scanf("%d",&newnode->data);
	newnode->next=0;
	temp=head;
	if(pos>c){
		printf("Wrong position has given\n");
	}
	else{
		
		while(i<=pos){
			temp=temp->next;
			i++;
		}
		newnode->next=temp->next;
		temp->next=newnode;
		
	
	}
	c=0;
	temp=head;
	while(temp!=0){
		printf("%d ",temp->data);
		temp=temp->next;
		c++;
	}
	printf("\n counts:%d\n",c);
	
}
int main(){
	struct node{
		int data;
		struct node *next;
	};
	int choice=1,n,c=0;
	struct node *head,*temp,*newnode;
	head=0;
	while(choice){
		
	
	newnode=(struct node*) malloc(sizeof(struct node));
	printf("Enter your data:");
	scanf("%d",&newnode->data);
	newnode->next=0;
	if(head==0){
		head=temp=newnode;
	}
	else{
		temp->next=newnode;
		temp=newnode;
		}
	printf("Do you want to continue(0,1)\n");
	scanf("%d",&choice);}
	temp=head;
	while(temp!=0){
		printf("%d ",temp->data);
		temp=temp->next;
		c++;
	}
	printf("\n%d counts\n",c);
	
	while(n){
	printf("Enter your operation to do:\n");
	printf("1. for BEGINNING\n");
	printf("2. for ENDING\n");
	printf("3.for at any specific location\n");
	printf("0. for NO operation to perform\n");
	scanf("%d",&n);
	if(n==1){
		insertion_begin(head);
	}
	else if(n==2){
		insertion_end(head);
	}
	else if(n==3){
		insertion_specific(head,c);
	}
	
}
	
}
