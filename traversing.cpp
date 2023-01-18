#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node*next;
};
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
	traversing(head);
	return 0;
}
