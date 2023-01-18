#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node*next;
};
struct node* insertion_at_beg(struct node*head,int data){
	struct node*p=(struct node*)malloc(sizeof(struct node));
	p->data=data;
	p->next=head;
	head=p;
	return p;
}
void traversing(struct node*ptr){
	while(ptr!=NULL){
		printf("%d\n",ptr->data);
		ptr=ptr->next;
	}
}
int main(){
	struct node*head=(struct node*)malloc(sizeof(struct node));
	struct node*second=(struct node*)malloc(sizeof(struct node));
	struct node*third=(struct node*)malloc(sizeof(struct node));
	struct node*forth=(struct node*)malloc(sizeof(struct node));
	struct node*fifth=(struct node*)malloc(sizeof(struct node));
	head->data=23;
	head->next=second;
	second->data=12;
	second->next=third;
	third->data=45;
	third->next=forth;
	forth->data=56;
	forth->next=fifth;
	fifth->data=34;
	fifth->next=NULL;
	int n;
	printf("enter data:");
	scanf("%d",&n);
	head=insertion_at_beg(head,n);
	traversing(head);
	return 0;
}
