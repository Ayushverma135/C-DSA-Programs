#include <stdio.h>   
int stack[100],i,j,choice=0,n,top=-1;  
void push();  
void pop();  
void show();
void value_on_top();
void undo();
void redo();  
int main ()  
{  
      
    printf("Enter the number of elements in the stack ");   
    scanf("%d",&n);  
    printf("*********Stack operations using array*********");  
  
printf("\n----------------------------------------------\n");  
    while(choice != 7)  
    {  
        printf("Chose one from the below options...\n");  
        printf("\n1.Push\n2.Pop\n3.Show\n4.value_on_top\n5.undo\n6.redo\n7.EXIT");  
        printf("\n Enter your choice \n");        
        scanf("%d",&choice);  
        switch(choice)  
        {  
            case 1:  
            {   
                push();  
                break;  
            }  
            case 2:  
            {  
                pop();  
                break;  
            }  
            case 3:  
            {  
                show();  
                break;  
            }  
            case 4:   
            {  
                printf("Exiting....");  
                break;   
            }  
            default:  
            {  
                printf("Please Enter valid choice ");  
            }   
        };  
    }  
}   
  
void push ()  
{  
    int val;      
    if (top == n-1 )   
    printf("\n Overflow");   
    else   
    {  
        printf("Enter the value?");  
        scanf("%d",&val);         
        top++;   
        stack[top] = val;   
    }   
}   
  
void pop ()   
{   
    if(top == -1)   
    printf("Underflow");  
    else  
    top--;   
}   
void show()  
{  
    for (i=top;i>=0;i--)  
    {  
        printf("%d\n",stack[i]);  
    }  
    if(top == -1)   
    {  
        printf("Stack is empty");  
    }  
}  
void value_on_top(){
	if(top==n-1){
		printf("stack overflow");
	}
	else if(top==-1){
		printf("stack underflow");
	}
	else{
		printf("%d",stack[top]);
	}
	
}
